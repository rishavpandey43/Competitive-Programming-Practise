#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gradingStudents' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY grades as parameter.
#


def gradingStudents(grades):
    # Write your code here
    new_grades = []
    for grade in grades:
        if grade < 38:
            new_grades.append(grade)
        elif grade >= 38:
            r = grade % 5
            to_nearest_5 = 5 - r
            if to_nearest_5 < 3:
                new_grades.append(grade + to_nearest_5)
            elif to_nearest_5 >= 3:
                new_grades.append(grade)
    return new_grades


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)

    # fptr.write('\n'.join(map(str, result)))
    # fptr.write('\n')

    # fptr.close()
