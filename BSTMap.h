#ifndef __BSTMAP_H__
#define __BSTMAP_H__

#include <ostream>
#include <sstream>
#include <string>

namespace ds {

template <typename Key, typename Value> class BSTMapNode {
public:
  Key key;
  Value value;
  BSTMapNode *left;
  BSTMapNode *right;

  BSTMapNode(const Key &k, const Value &v, BSTMapNode *l = nullptr,
             BSTMapNode *r = nullptr) {
    key = k;
    value = v;
    left = l;
    right = r;
  }
};

class BSTPrinter;

template <typename Key, typename Value> class BSTMap {
  friend class BSTPrinter;

private:
  BSTMapNode<Key, Value> *root; // Root of the BST

  BSTMapNode<Key, Value> *putHelp(BSTMapNode<Key, Value> *root,
                                     const Key &ik, const Value &val) {
    if (root == nullptr)
      return new BSTMapNode<Key, Value>(ik, val);
    if (ik < root->key)
      root->left = putHelp(root->left, ik, val);
    else if (ik > root->key)
      root->right = putHelp(root->right, ik, val);
    return root;
  }

  bool findHelp(const BSTMapNode<Key, Value> *root, const Key &sk) const {
    if (root == nullptr)
      return false;
    if (sk < root->key)
      return findHelp(root->left, sk);
    if (sk > root->key)
      return findHelp(root->right, sk);
    else
      return true;
  }

public:
  BSTMap() { root = nullptr; }
  ~BSTMap() { clear(root); }

  /** Delete all nodes. */
  void clear(BSTMapNode<Key, Value> *root) {
    if (root == nullptr)
      return;
    clear(root->left);
    clear(root->right);
    delete root;
  }

  /**
   * Insert the key-value pair `ik` and `val` to the BSTMap.
   *
   * @param ik The key to insert
   * @param val The value corresponding to the key
   */
  void put(const Key &ik, const Value &val) {
    root = putHelp(root, ik, val);
  }

  /**
   * Search for given key in the BSTMap.
   *
   * @param sk The search key
   * @return true if `sk` is in the BSTMap
   */
  bool find(const Key &sk) const { return findHelp(root, sk); }

  Value get(const Key &sk) const;
  void remove(const Key &rk);
};

/**
 * Return the value of the given search key `sk` in the BSTMap.
 */
template <typename Key, typename Value>
Value BSTMap<Key, Value>::get(const Key &sk) const {
  // TODO: You may assume that `sk` is in the BSTMap.
}

/**
 * Remove `rk` and its corresponding value from the BST.
 */
template <typename Key, typename Value>
void BSTMap<Key, Value>::remove(const Key &rk) {
  // TODO: You may assume that `rk` is in the BSTMap.
}

} // namespace ds

#endif // __BSTMAP_H__