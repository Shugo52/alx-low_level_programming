# 0x1E. C - Search Algorithms

In computer science, a search algorithm is an algorithm designed to solve a search problem. Search algorithms work to retrieve information stored within particular data structure, or calculated in the search space of a problem domain, with either discrete or continuous values.

## Resource

- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)
- [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)
- [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)
- [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)
- [Interpolation search algorithm](https://en.wikipedia.org/wiki/Interpolation_search)
- [Exponential search algorithm](https://en.wikipedia.org/wiki/Exponential_search)

## Tasks

<details>
<summary><a href="./0-linear.c">0. Linear search</a></summary>
  Write a function that searches for a value in an array of integers using the Linear search algorithm
  
  - Prototype : int linear_search(int *array, size_t size, int value);
  - Where array is a pointer to the first element of the array to search in
  - size is the number of elements in array
  - And value is the value to search for
  - Your function must return the first index where value is located
  - If value is not present in array or if array is NULL, your function must return -1
  - Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
</details>

<details>
  <summary><a href="./1-binary.c">1. Binary search</a></summary>
  Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
  
  - Prototype : int binary_search(int *array, size_t size, int value);
  - Where array is a pointer to the first element of the array to search in
  - size is the number of elements in array
  - And value is the value to search for
  - Your function must return the index where value is located
  - You can assume that array will be sorted in ascending order
  - You can assume that value won’t appear more than once in array
  - If value is not present in array or if array is NULL, your function must return -1
  - You must print the array being searched every time it changes.
</details>
