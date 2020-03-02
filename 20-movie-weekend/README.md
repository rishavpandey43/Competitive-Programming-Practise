# Movie Weekend

Little Egor is a huge movie fan. He likes watching different kinds of movies: from drama movies to comedy movies, from teen movies to horror movies. He is planning to visit cinema this weekend, but he's not sure which movie he should watch.

There are **_n_** movies to watch during this weekend. Each movie can be characterized by two integers **_L<sub>i</sub>_** and **_R<sub>i</sub>_**, denoting the length and the rating of the corresponding movie. Egor wants to watch exactly one movie with the maximal value of **_L<sub>i</sub> × R<sub>i</sub>_**. If there are several such movies, he would pick a one with the maximal **_R<sub>i</sub>_** among them. If there is still a tie, he would pick the one with the minimal index among them.

Your task is to help Egor to pick a movie to watch during this weekend.

## Input Format

The first line of the input contains an integer **_T_** denoting the number of test cases.

The first line of the test case description contains an integer n.

The second line of the test case description contains **_n_** integers **_L<sub>1</sub>, L<sub>2</sub>, ...,L<sub>n</sub>_**. The following line contains **_n_** integers **_R<sub>1</sub>, R<sub>2</sub>, ..., R<sub>n</sub>_**.

## Output Format

For each test case, output a single integer **_i_** denoting the index of the movie that Egor should watch during this weekend. Note that we follow 1-based indexing.

## Constraints

- **_1 ≤ T ≤ 5_**
- **_1 ≤ n ≤ 100_**
- **_1 ≤ L<sub>i</sub>, R<sub>i</sub> ≤ 100_**

## Sample Input 0

2

2

1 2

2 1

4

2 1 4 1

2 4 1 4

## Sample Output 0

1

2

## Explanation 0

In the first example case, both films have the same value of **_L × R_**, but the first film has a better rating.

In the second example case, the second and the fourth movies are equally good, but the second movie has a smaller index.

[source of question](https://www.codechef.com/problems/MOVIEWKN)
