# Extra Long Factorials

The factorial of the integer _n_, written _n!_, is defined as:

n! = n _ (n -1) _ (n - 2) _ ... _ 2\*1

Calculate and print the factorial of a given integer.

For example, if _n = 10_, we calculate 10\*9 _ 8 _ 7 _ 6 _ 5 _ 4 _ 3 _ 2 _ 1 and get 3628800.

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

25! = 25 _ 24 _ 23 _ ... _ 3 _ 2 _ 1
