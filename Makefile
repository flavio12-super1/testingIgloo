# Makefile for compiling and running a C++ program

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Source files and executable name
SRC = main.cpp
TARGET = my_program

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean run

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)