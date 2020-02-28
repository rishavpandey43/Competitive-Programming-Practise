# Chef and Glove

Winter has finally come to Chefland, so Chef bought a glove for herself. Chef has a hand with **_N_** fingers (for the sake of simplicity, let us consider the thumb a finger too) numbered 1 through **_N_** and the glove has **_N_** sheaths numbered 1 through **_N_**. Exactly one finger has to be inserted into each sheath. You are given the lengths of Chef's fingers, as seen from left to right. You are also given the lengths of the sheaths of the glove, from left to right, as seen from the front.

Chef can wear the glove normally (the front side of the glove matching the front of Chef's hand), or she can flip the glove and then insert her hand in it. In the first case, the first finger will go into the first sheath, the second finger into the second one, and so on. However, when she flips the glove, her first finger will go into the **_N_**-th sheath, the second finger into the (**_N-1_**)-th and so on — the i-th finger will go into the **_N+1-i_**-th sheath for each valid i. Of course, for her to wear the glove comfortably, each finger's length should be less than or equal to the length of the sheath it goes into.

Find out whether Chef can wear the glove by keeping its front side facing her, or if she can wear it by flipping it over and facing its back side. If she can only wear the glove in the former way, output "front"; if she can wear it only in the latter way, output "back". If both front and back orientations can be used, output "both", and if she can't wear it either way, output "none".

## Input Format

The first line of the input contains a single integer **_T_** denoting the number of test cases. The description of **_T_** test cases follows.

The first line of each test case contains a single integer **_N_** denoting the number of Chef's fingers.

The second line contains **_N_** space-separated integers **_L1_**, **_L2_**, ..., **_L<sub>N</sub>_** denoting the lengths of Chef's fingers.

The third line contains **_N_** space-separated integers **_G1_**, **_G2_**, ..., **_G<sub>N</sub>_**, denoting the lengths of sheaths of the glove.

## Output Format

For each test case, print a single line containing one of the strings "front", "back", "both", or "none".

## Constraints

- 1 ≤ **_T_** ≤ 10
- 1 ≤ **_N_** ≤ 10<sup>5</sup>
- 1 ≤ **_L<sub>i</sub>_** ≤ 10<sup>9</sup> for each valid **_i_**
- 1 ≤ **_G<sub>i</sub>_** ≤ 10<sup>9</sup> for each valid **_i_**

## Subtasks

**_Subtask #1 (30 points)_**: 1 ≤ **_N_** ≤ 102

**_Subtask #2 (70 points)_**: original constraints

## Sample Input 0

4

3

1 2 3

2 3 4

3

1 2 1

1 2 1

3

3 2 1

1 2 3

4

1 3 2 4

1 2 3 5

## Sample Output 0

front

both

back

none

## Explanation 0

The glove can be worn normally, with its front side facing Chef. The lengths of the glove sheaths are 2, 3, 4. The lengths of the fingers are 1, 2, 3. Each of the fingers will fit in the corresponding glove sheath, that is, 1 ≤ 2, 2 ≤ 3 and 3 ≤ 4.

However, if Chef tries to wear the glove with its back facing her, then the lengths of the sheaths will be 4, 3, 2. The first two fingers, which have lengths 1 and 2, will fit into the corresponding sheaths, but the 3rd finger won't fit because its length is 3, and the length of the corresponding sheath is 2. Hence, this glove can be worn only in one way, and we output "front".

[source of question](https://www.codechef.com/problems/CHEGLOVE)
