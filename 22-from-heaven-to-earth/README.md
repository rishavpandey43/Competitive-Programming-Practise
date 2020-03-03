# From heaven to earth

Chef has been working in a restaurant which has **_N_** floors. He wants to minimize the time it takes him to go from the **_N_**-th floor to ground floor. He can either take the elevator or the stairs.

The stairs are at an angle of **_45_** degrees and Chef's velocity is **_V<sub>1</sub>_** m/s when taking the stairs down. The elevator on the other hand moves with a velocity **_V<sub>2</sub>_** m/s. Whenever an elevator is called, it always starts from ground floor and goes to **_N_**-th floor where it collects Chef (collecting takes no time), it then makes its way down to the ground floor with Chef in it.

The elevator cross a total distance equal to **_N_** meters when going from **_N_**-th floor to ground floor or vice versa, while the length of the stairs is **_sqrt(2) \* N_** because the stairs is at angle **_45_** degrees.
Chef has enlisted your help to decide whether he should use stairs or the elevator to minimize his travel time. Can you help him out?

## Input Format

The first line contains a single integer **_T_**, the number of test cases. Each test case is described by a single line containing three space-separated integers **_N_**, **_V<sub>1</sub>_**, **_V<sub>2</sub>_**.

## Output Format

For each test case, output a single line with string **_Elevator_** or **_Stairs_**, denoting the answer to the problem.

## Constraints

- 1 ≤ T ≤ 1000
- 1 ≤ N, V<sub>1</sub>, V<sub>2</sub> ≤ 100

## Sample Input 0

3

5 10 15

2 10 14

7 14 10

## Sample Output 0

Elevator

Stairs

Stairs

[source of question](https://www.codechef.com/problems/ELEVSTRS)
