# CISC2200 Spring 2024 Lab6

In this lab assignment, we practice implementing two member functions for **Binary Search Tree**. This version uses **class template**.  

## Download starter code

From your terminal (mac or WSL/Ubunto) window, you can use the following command to download it:
```
git clone https://github.com/CISC2200-Spring2024/lab6.git
```
Alternatively, you can use the following command to download the starter code as a zip file:
```
wget https://github.com/CISC2200-Spring2024/lab6/archive/refs/heads/main.zip
```

and then unzip it (if it's not automatically unzipped): 
```
unzip main.zip
```

## Programming Environment Setup
If you haven't done so already, please set up programming environment our our own computer, by following [Setup Tutorial](https://eecs280staff.github.io/tutorials/). 

- The _Commannd Line Tools_ are required. 

- The _C++ Dev Environment_ (VSCode) is highly recommened.

**Please follow these tutorials closely and carefully.**

## Requirements:

Please implement the following member functions in the **BSTMap.h**. 

1.  Implement **get** member function that performs a look up with a key, and it shall return the value.
2.  Implement **remove** member function that removes the node with the given key. You can assume the key exists in the BST.
3.  Test your functions by adding more testcases in  **main.cpp**.
4.  You can work on the following (optional) practice problems to gain more experience in thinking recursively on BST:
    -- implement **size** member function to return the total number of nodes in the BST.
    -- implement a constructor that takes in an array of Keys and an array of Values, and build a optimal BST (with a height as small as possible).
    -- implement a **print** member function to display the nodes in the BST in the ascending order.    

## Hints

The **main.cpp** provided in this repository uses **doctests.h** framework to write testcases for the **remove** and **get** member functions. 
Follow the example to write some more testcases as needed.

## Submission 

Submit your **BSTMap.h** file at the following link by TBA , Tuesday, midnight (11:59pm).

Submission Link TBA 

The autograder compiles and tests your programs using 
some testcases that are different from those in **main.cpp**. If your program fails some testcases, go back to review your code, and test your member functions
with different inputs.

