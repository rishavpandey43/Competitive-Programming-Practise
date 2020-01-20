# Kangaroo

You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

- The first kangaroo starts at location **_x1_** and moves at a rate of **_v1_** meters per jump.
- The second kangaroo starts at location **_x2_** and moves at a rate of **_v2_** meters per jump.

You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

For example, kangaroo **_1_** starts at **_x1 = 2_** with a jump distance **_v1 = 1_** and kangaroo **_2_** starts at **_x2 = 1_** with a jump distance of **_v2 = 2_**. After one jump, they are both at **_x = 3_**, **_(x1 + v1 = 2 + 1, x2 + v2 = 1 + 2)_**, so our answer is **YES**.

## Function Description

Complete the function kangaroo in the editor below. It should return YES if they reach the same position at the same time, or NO if they don't.

kangaroo has the following parameter(s):

- x1, v1: integers, starting position and jump distance for kangaroo 1
- x2, v2: integers, starting position and jump distance for kangaroo 2

## Input Format

A single line of four space-separated integers denoting the respective values of **_x1_**, **_v1_**, **_x2_**, and **_v2_**.

## Constraints

0 <= x1, x2 <= 10000

0 <= v1 <= 10000

0 <= v2 <= 10000

## Output Format

Print YES if they can land on the same location at the same time; otherwise, print NO.

**Not**e: The two kangaroos must land at the same location after making the same number of jumps.

## Sample Input 0

0 3 4 2

## Sample Output 0

YES

## Sample Input 1

0 2 5 3

## Sample Output 1

NO

[source of question](https://www.hackerrank.com/challenges/kangaroo/problem)
