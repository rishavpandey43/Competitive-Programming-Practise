# Lazy Jem

Jem is famous for his laziness at school. He always leaves things to last minute. Now Jem has **_N_** problems in the assignment of "Advanced topics in algorithm" class to solved. The assignment is due tomorrow and as you may guess he hasn't touch any of the problems. Fortunately he got a plan as always.

The first step will be buying a pack of Red Bull and then to work as hard as he can. Here is how he is going to spend the remaining time:

Jem will not take a break until he finishes at least half of the remaining problems. Formally, if **_N_** is even then he will take he first break after finishing N / 2 problems. If N is odd then the break will be after he done (**_N + 1) / 2_** problems. Each of his break will last for **_B_** minutes. Initially, he takes **_M_** minutes in solving a problem, after each break he will take twice more time in solving a problem, i.e. **_2 \* M_** minutes per problem after the first break.

Jem will start working soon and ask you to help him calculate how much time it will take until he finish the last problem!

## Input Format

The first line contains a single integer T represents the number of test cases in the input.

Each line in the next **_T_** line contains three integers **_N_**, **_B_** and **_M_** represents a test case.

## Output Format

For each test case output a single line containing an integer represent how much time Jem will need (in minutes).

## Constraints

- 1 ≤ T ≤ 100
- 1 ≤ N, B, M ≤ 10<sup>8</sup>

## Sample Input 0

2

9 1 2

123456 123456 123456

## Sample Output 0

45

131351258112

## Explanation 0

In the first test case, Jem will proceed as below:

- Initially, Jem has 9 problems to solve. since it is an odd number, Jem will finish the first (9 + 1) / 2 = 5 problems with speed of 2 minutes/problem.
- After that, Jem takes 1 minute break.
- Now he has 4 problems to solve, which is an even number, so Jem will solve the next 4 / 2 = 2 problems. his speed after the first break has now became 4 minutes/problem.
- Again, he takes a 1 minute break.
- he has now 2 problems left so he do one more problem in 8 minutes.
- He takes 1 minute break.
- he solves the last problem in 16 minutes.

So, Jem will need time = 5 × 2 + 1 + 2 × 4 + 1 + 8 + 1 + 16 = 45

[source of question](https://www.codechef.com/problems/TALAZY)
