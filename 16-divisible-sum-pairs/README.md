# Divisible Sum Pairs

You are given an array of **_n_** integers, **_ar = [ar[0], ar[1], ... ar[n - 1]]_**, and a positive integer, **_k_**. Find and print the number of **_(i, j)_** pairs where **_i < j_** and **_ar[i]_** + **_ar[j]_** is divisible by **_k_**.

For example, **_ar = [1, 2, 3, 4, 5, 6]_** and **_k = 5_** . Our three pairs meeting the criteria are **_[1, 4], [2, 3]_** and **_[4, 6]_** .

## Function Description

Complete the divisibleSumPairs function in the editor below. It should return the integer count of pairs meeting the criteria.

divisibleSumPairs has the following parameter(s):

- n: the integer length of array **_ar_**
- ar: an array of integers
- k: the integer to divide the pair sum by

## Input Format

The first line contains **_2_** space-separated integers, **_n_** and **_k_** .
The second line contains **_n_** space-separated integers describing the values of **_ar[ar[0], ar[1], ... ar[n - 1]]_**.

## Constraints

- 2 <= n <= 100
- 1 <= k <= 100
- 1 <= ar[i] < 100

## Output Format

Print the number of **_(i, j)_** pairs where **_i < j_** and **_a[i]_** + **_a[j]_** is evenly divisible by **_k_**.

## Sample Input 0

6 3

1 3 2 6 1 2

## Sample Output 0

5

## Explanation 0

Here are the **_5_** valid pairs when **_k = 3_**:

- **_(0, 2) -> ar[0] + ar[2] = 1 + 2 = 3_**
- **_(0, 5) -> ar[0] + ar[5] = 1 + 2 = 3_**
- **_(1, 3) -> ar[1] + ar[3] = 3 + 6 = 9_**
- **_(2, 4) -> ar[2] + ar[4] = 2 + 1 = 3_**
- **_(4, 5) -> ar[4] + ar[5] = 1 + 2 = 3_**

[source of question](https://www.hackerrank.com/challenges/the-time-in-words/problem)
