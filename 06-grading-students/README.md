# Grading Students

HackerLand University has the following grading policy:

- Every student receives a _grade_ in the inclusive range from _0_ to _100_.
- Any _grade_ less than _40_ is a failing grade.

Sam is a professor at the university and likes to round each student's _grade_ according to these rules:

- If the difference between the _grade_ and the next multiple of _5_ is less than _3_, round _grade_ up to the next multiple of _5_.
- If the value of _grade_ is less than _38_, no rounding occurs as the result will still be a failing grade.

For example, _grade = 84_ will be rounded to _85_ but _grade = 29_ will not be rounded because the rounding would result in a number that is less than .

Given the initial value of _grade_ for each of Sam's students, write code to automate the rounding process.

## Function Description

Complete the function gradingStudents in the editor below. It should return an integer array consisting of rounded grades.

gradingStudents has the following parameter(s):

- grades: an array of integers representing grades before rounding

## Input Format

The first line contains a single integer, _n_, the number of students.

Each line _i_ of the _n_ subsequent lines contains a single integer, _grades[i]_, denoting student _i_'s grade.

## Constraints

1 <= n <= 60

0 <= grades[i] <= 100

## Output Format

For each _grades[i]_, print the rounded grade on a new line.

## Sample Input

4

73

67

38

33

## Sample Output

75

67

40

33

## Explanation

1. Student _1_ received a _73_, and the next multiple of _5_ from _73_ is _75_. Since _75 - 73 = 2_, the student's grade is rounded to _75_.
2. Student _2_ received a _67_, and the next multiple of _5_ from _67_ is _70_. Since _70 - 67 = 3_, the grade will not be modified and the student's final grade is _67_.
3. Student _3_ received a _38_, and the next multiple of _5_ from _38_ is _40_. Since _40 - 38 < 3_, the student's grade will be rounded to _40_.
4. Student _4_ received a grade below _38_, so the grade will not be modified and the student's final grade is _33_.
