CXX := g++
CXXFLAGS := -O0 -g -Wall -std=c++14 -Werror=return-type

# enable asan
CXXFLAGS += -fsanitize=address -fno-omit-frame-pointer
LDFLAGS  += -fsanitize=address -fno-omit-frame-pointer

main.out: main.cpp BSTMap.h BSTPrinter.h
	$(CXX) $(CXXFLAGS) main.cpp -o main.out

test: main.out
	./main.out

clean:
	rm -f *.out
