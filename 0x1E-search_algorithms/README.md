# 0x1E. C - Search Algorithms

This project serves as an introduction to search algorithms in the C programming language. It covers various concepts including linear search, binary search, and when to choose the best search algorithm based on specific needs.

## Table of Contents
* [Introduction](#introduction)
* [Requirements](#requirements)
* [File Descriptions](#file-descriptions)
  * [Mandatory Files](#mandatory-files)
  * [Advanced Files](#advanced-files)

## Introduction

In this project, you will learn about different search algorithms and their implementations in C. The primary focus is on:

- Understanding what search algorithms are and how they work.
- Implementing linear search and binary search algorithms.
- Determining the best search algorithm based on specific requirements and data structures.

## Requirements

To compile the files, ensure you are using Ubuntu 20.04 LTS and have `gcc` installed. The files are compiled using the following flags:

```
-Wall -Werror -Wextra -pedantic -std=gnu89
```

Additionally:
- Only the `printf` function from the standard library is allowed. Any other function calls like `strdup`, `malloc`, etc., are forbidden.
- The prototypes of all functions are included in the header file [search_algos.h](./search_algos.h).

## File Descriptions

### Mandatory Files

1. [0-linear.c](./0-linear.c)
   - Implements a function that performs a linear search for a value in an array of integers.
   - Prototype: `int linear_search(int *array, size_t size, int value)`

2. [1-binary.c](./1-binary.c)
   - Implements a function that performs a binary search for a value in a sorted array of integers.
   - Prototype: `int binary_search(int *array, size_t size, int value)`

3. [2-O](./2-O)
   - Describes the time complexity (worst case) of a linear search in an array of size `n`.

4. [3-O](./3-O)
   - Describes the space complexity (worst case) of an iterative linear search algorithm in an array of size `n`.

5. [4-O](./4-O)
   - Describes the time complexity (worst case) of a binary search in an array of size `n`.

### Advanced Files

These files are provided for further exploration and understanding:

- Advanced files are not mandatory for completion but may be useful for additional learning.

Make sure to compile the files using the provided flags before running them.

**Note**: Detailed descriptions and examples are provided in each file to help you understand the concepts and implementation better.