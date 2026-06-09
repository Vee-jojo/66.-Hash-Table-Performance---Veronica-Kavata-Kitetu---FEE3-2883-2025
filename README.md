# 66.-Hash-Table-Performance---Veronica-Kavata-Kitetu---FEE3-2883-2025
66. Hash-Table Performance: C++ Implementation of Chaining and Open Addressing Hash Tables from scratch, with benchmarking against std:: unordered _ map using random and adversarial inputs.

    # Hash Table Performance Benchmark (C++)

## Description
This project implements hash tables from scratch in C++ using:

- Chaining (separate chaining with linked lists)
- Open Addressing (linear probing)

It also compares performance against `std::unordered_map`.

The project includes:
- Demo application (functionality demonstration)
- Benchmark program (performance measurement)
- Unit tests (correctness verification)

---

## Project Structure

include/
- HashChaining.h
- HashOpenAddressing.h

src/
- HashChaining.cpp
- HashOpenAddressing.cpp

demo/
- main_demo.cpp

benchmark/
- main_benchmark.cpp

tests/
- test.cpp

---

## Build Instructions

### Compile Demo
g++ -std=c++17 demo/main_demo.cpp src/HashChaining.cpp src/HashOpenAddressing.cpp -o demo

### Compile Benchmark
g++ -std=c++17 benchmark/main_benchmark.cpp src/HashChaining.cpp src/HashOpenAddressing.cpp -o benchmark

### Compile Tests
g++ -std=c++17 tests/test.cpp src/HashChaining.cpp src/HashOpenAddressing.cpp -o test

---

## Run

### Demo
./demo

### Benchmark
./benchmark

### Tests
./test

---

## Features

- Custom hash table implementation (no STL internals used)
- Collision handling:
  - Chaining
  - Linear probing
- Performance comparison with `std::unordered_map`
- Stress and edge case testing
- Unit testing using assertions

---

## Author
Veronica Kavata Kitetu
FFE3/2883/2025
