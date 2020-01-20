# Migratory Birds

You have been asked to help study the population of birds migrating across the continent. Each type of bird you are interested in will be identified by an integer value. Each time a particular kind of bird is spotted, its id number will be added to your array of sightings. You would like to be able to find out which type of bird is most common given a list of sightings. Your task is to print the type number of that bird and if two or more types of birds are equally common, choose the type with the smallest ID number.

For example, assume your bird sightings are of types **_arr = [1, 1, 2, 2, 3]_**. There are two each of types **_1_** and **_2_**, and one sighting of type **_3_**. Pick the lower of the two types seen twice: type **_1_**.

## Function Description

Complete the migratoryBirds function in the editor below. It should return the lowest type number of the most frequently sighted bird.

migratoryBirds has the following parameter(s):

- arr: an array of integers representing types of birds sighted

## Input Format

The first line contains an integer denoting , the number of birds sighted and reported in the array **_arr_**.

The second line describes **_arr_** as **_n_** space-separated integers representing the type numbers of each bird sighted.

## Constraints

5 <= n <= 2 \* 10<sup>5</sup>

It is guaranteed that each type is **_1_**, **_2_**, **_3_**, **_4_**, or **_5_**.

## Output Format

Print the type number of the most common bird; if two or more types of birds are equally common, choose the type with the smallest ID number.

## Sample Input 0

6

1 4 4 4 5 3

## Sample Output 0

4

## Explanation 0

The different types of birds occur in the following frequencies:

- Type **_1_**: **_1_** bird
- Type **_2_**: **_0_** birds
- Type **_3_**: **_1_** bird
- Type **_4_**: **_3_** birds
- Type **_5_**: **_1_** bird

The type number that occurs at the highest frequency is type , so we print as our answer.

## Sample Input 1

11
1 2 3 4 5 4 3 2 1 3 4

## Sample Output 1

3

## Explanation 1

The different types of birds occur in the following frequencies:

- Type **_1_**: **_2_** birds
- Type **_2_**: **_2_** birds
- Type **_3_**: **_3_** birds
- Type **_4_**: **_3_** birds
- Type **_5_**: **_1_** bird

The type number that occurs at the highest frequency is type , so we print as our answer.

[source of question](https://www.hackerrank.com/challenges/migratory-birds/problem)
