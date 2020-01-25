# Circular Array Rotation

John Watson knows of an operation called a right circular rotation on an array of integers. One rotation operation moves the last array element to the first position and shifts all remaining elements right one. To test Sherlock's abilities, Watson provides Sherlock with an array of integers. Sherlock is to perform the rotation operation a number of times then determine the value of the element at a given position.

For each array, perform a number of right circular rotations and return the value of the element at a given index.

For example, array **_a = [3, 4, 5]_**, number of rotations, **_k = 2_** and indices to check, **_m = [1, 2]_**.
First we perform the two rotations:
**_[3, 4, 5] => [5, 3, 4] => [4, 5, 3]_**

Now return the values from the zero-based indices **_1_** and **_2_** as indicated in the **_m_** array.

**_a[1] = 5_**

**_a[2] = 3_**

## Function Description

Complete the circularArrayRotation function in the editor below. It should return an array of integers representing the values at the specified indices.

circularArrayRotation has the following parameter(s):

- a: an array of integers to rotate
- k: an integer, the rotation count
- queries: an array of integers, the indices to report

## Input Format

The first line contains **_3_** space-separated integers, **_n_**, **_k_**, and **_q_**, the number of elements in the integer array, the rotation count and the number of queries.

The second line contains **_n_** space-separated integers, where each integer **_i_** describes array element **_a[i]_** (where **_0 <= i < n_**).

Each of the **_q_** subsequent lines contains a single integer denoting **_m_**, the index of the element to return from **_a_**.

## Constraints

- 1 <= n <= 10<sup>5</sup>
- 1 <= a[i] <= 10<sup>5</sup>
- 1 <= k <= 10<sup>5</sup>
- 1 <= q <= 500
- 1 <= m <= n

## Output Format

For each query, print the value of the element at index **_m_** of the rotated array on a new line.

## Sample Input 0

3 2 3

1 2 3

0

1

2

## Sample Output 0

2

3

1

## Explanation 0

After the first rotation, the array becomes **_[3, 1, 2]_**.

After the second (and final) rotation, the array becomes **_[2, 3, 1]_**.

Let's refer to the array's final state as array **_b = [2, 3, 1]_**. For each query, we just have to print the value of **_b<sub>m</sub>_** on a new line:

1. m = 0, b<sub>0</sub> = 2.
2. m = 1, b<sub>1</sub> = 3.
3. m = 2, b<sub>2</sub> = 1.

[source of question](https://www.hackerrank.com/challenges/circular-array-rotation/problem)

**Note-** This solution is giving correct solution in every possible test case checked(even from hidden test case on local machine), though not passing all the test cases.
