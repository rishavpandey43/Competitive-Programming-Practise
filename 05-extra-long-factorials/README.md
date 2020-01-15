# Extra Long Factorials

The factorial of the integer _n_, written _n!_, is defined as:

n! = n \* (n -1) \* (n - 2) \* ... \* 2 \* 1

Calculate and print the factorial of a given integer.

For example, if _n = 10_, we calculate 10 \* 9 \* 8 \* 7 \* 6 \* 5 \* 4 \* 3 \* 2 \* 1 and get 3628800.

## Function Description

Complete the extraLongFactorials function in the editor below. It should print the result and return.

extraLongFactorials has the following parameter(s):

- n: an integer

**Note** : Factorials of n > 20 can't be stored even in a 64-bit long long variable. Big integers must be used for such calculations. Languages like Java, Python, Ruby etc. can handle big integers, but we need to write additional code in C/C++ to handle huge values.

We recommend solving this challenge using BigIntegers.

## Input Format

Input consists of a single integer _n_

## Constraints

1 <= n <= 100

## Output Format

Print the factorial of _n_.

## Sample Input

25

## Sample Output

15511210043330985984000000

## Explanation

25! = 25 \* 24 \* 23 \* ... \* 3 \* 21

[source of question](https://www.hackerrank.com/challenges/extra-long-factorials)
