# dynamic-object-array-cpp
C++ project demonstrating dynamic object arrays, constructors, destructors and pointer arithmetic

# Dynamic Object Array in C++

This C++ project demonstrates **dynamic object arrays**, **constructors and destructors**, and **pointer arithmetic**.  
It uses a class `ALFA` to show how objects are created and destroyed dynamically.

## Features
- Class `ALFA` with constructor, destructor, and a member function `FUNCION()`
- Dynamic allocation of an array of objects using `new[]`
- Accessing objects using pointer arithmetic `(P+i)->FUNCION()`
- Proper memory deallocation with `delete[]`
- Demonstrates the order of constructor and destructor calls

## Example usage

When creating 5 objects:
Constructor is called for each object
Calling FUNCION for each object:
Prints "ESTA ES LA FUNCION"
Deleting objects:
Destructor is called for each object

## Project structure
dynamic-object-array-cpp/
│── dynamic_object_array.cpp # Source code demonstrating dynamic objects
│── README.md # Project documentation
