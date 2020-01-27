# Breaking the Records

Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

For example, assume her scores for the season are represented in the array **_scores = [12, 24, 10, 24]_**. Scores are in the same order as the games played. She would tabulate her results as follows:

Game - 0 1 2 3

Score - 12 24 10 24

Maximum - 12 24 24 24

Minimum - 12 12 10 10

Given Maria's scores for a season, find and print the number of times she breaks her records for most and least points scored during the season.

## Function Description

Complete the breakingRecords function in the editor below. It must return an integer array containing the numbers of times she broke her records. Index **_0_** is for breaking most points records, and index **_1_** is for breaking least points records.

breakingRecords has the following parameter(s):

- scores: an array of integers

## Input Format

The first line contains an integer **_n_**, the number of games.

The second line contains **_n_** space-separated integers describing the respective values of **_score 0, score 1, ... , score n-1_**.

## Constraints

- 1 <= n <= 1000
- 0 <= scores[i] < 10<sup>8</sup>

## Output Format

Print two space-separated integers describing the respective numbers of times her best (highest) score increased and her worst (lowest) score decreased.

## Sample Input 0

9

10 5 20 20 4 5 2 25 1

## Sample Output 0

2 4

## Explanation 0

The Table below depicts the number of times Maria broke her best and worst records throughout the season:

Game - 0 1 2 3 4 5 6 7 8

Score - 10 5 20 20 4 5 2 25 1

Maximum - 10 10 20 20 20 20 20 25 25

Minimum - 10 5 5 5 4 4 2 2 1

She broke her best record twice (after games **_2_** and **_7_** ) and her worst record four times (after games **_1_**, **_4_**, **_6_**, and **_8_**), so we print **_2 4_** as our answer. Note that she did not break her record for best score during game **_3_**, as her score during that game was not strictly greater than her best record at the time.

## Sample Input 1

10

3 4 21 36 10 28 35 5 24 42

## Sample Output 1

4 0

## Explanation 1

The Table below depicts the number of times Maria broke her best and worst records throughout the season:

Game - 0 1 2 3 4 5 6 7 8 9

Score - 3 4 21 36 10 28 35 5 24 42

Maximum - 3 4 21 36 36 36 36 36 36 42

Minimum - 3 3 3 3 3 3 3 3 3 3

She broke her best record four times (after games **_1_**, **_2_**, **_3_**, and **_9_**) and her worst record zero times (no score during the season was lower than the one she earned during her first game), so we print **4 0** as our answer.

[source of question](https://www.hackerrank.com/challenges/the-time-in-words/problem)
