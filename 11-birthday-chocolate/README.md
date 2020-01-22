# Birthday Chocolate

Lily has a chocolate bar that she wants to share it with Ron for his birthday. Each of the squares has an integer on it. She decides to share a contiguous segment of the bar selected such that the length of the segment matches Ron's birth month and the sum of the integers on the squares is equal to his birth day. You must determine how many ways she can divide the chocolate.

Consider the chocolate bar as an array of squares, **_s = [2, 2, 1, 3, 2]_**. She wants to find segments summing to Ron's birth day, **_d = 4_** with a length equalling his birth month, **_m = 2_**. In this case, there are two segments meeting her criteria: **_[2, 2]_** and **_[1, 3]_**.

## Function Description

Complete the birthday function in the editor below. It should return an integer denoting the number of ways Lily can divide the chocolate bar.

birthday has the following parameter(s):

- s: an array of integers, the numbers on each of the squares of chocolate
- d: an integer, Ron's birth day
- m: an integer, Ron's birth month

## Input Format

The first line contains an integer **_n_**, the number of squares in the chocolate bar.

The second line contains **_n_** space-separated integers **_s[i]_**, the numbers on the chocolate squares where **_0 <= i < n_**.

The third line contains two space-separated integers, **_d_** and **_m_**, Ron's birth day and his birth month.

## Constraints

- 1 <= n <= 100
- 1 <= s[i] <= 5, where(0 <= i < n)
- 1 <= d <= 31
- 1 <= m <= 12

It is guaranteed that each type is **_1_**, **_2_**, **_3_**, **_4_**, or **_5_**.

## Output Format

Print an integer denoting the total number of ways that Lily can portion her chocolate bar to share with Ron.

## Sample Input 0

5

1 2 1 3 2

3 2

## Sample Output 0

2

## Explanation 0

Lily wants to give Ron **_m = 2_** squares summing to **_d = 3_**. The following two segments meet the criteria:

1 + 2 = 3, 2 + 1 = 3

## Sample Input 1

6

1 1 1 1 1 1

3 2

## Sample Output 1

0

## Explanation 1

Lily only wants to give Ron consecutive squares of chocolate whose integers sum to . There are no possible pieces satisfying these constraints:

**No pair exist of _d = 2_, which sums to _s_**

Thus, we print **_0_** as our answer.

## Sample Input 2

1
4
4 1

## Sample Output 2

1

## Explanation 2

Lily only wants to give Ron **_m = 1_** square of chocolate with an integer value of **_d = 4_**. Because the only square of chocolate in the bar satisfies this constraint, we print **_1_** as our answer.

[source of question](https://www.hackerrank.com/challenges/the-birthday-bar/problem)
