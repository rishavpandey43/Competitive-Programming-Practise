#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#


def timeConversion(s):
    #
    # Write your code here.
    #
    new_time = []
    new_time_string = ""
    meridies = s.split(":")[2][2]+s.split(":")[2][3]
    if meridies == "AM":
        new_time = s.split(":")
        if (new_time[0]) == "12":
            new_time[0] = "00"
        new_time[2] = new_time[2][0] + new_time[2][1]
        for i in range(0, len(new_time) - 1):
            new_time[i] += ":"
        new_time_string = "".join(new_time)
    elif meridies == "PM":
        new_time = s.split(":")
        if (new_time[0]) == "12":
            new_time[0] = "12"
        else:
            new_time[0] = str(int(new_time[0]) + 12)
        new_time[2] = new_time[2][0] + new_time[2][1]
        for i in range(0, len(new_time) - 1):
            new_time[i] += ":"
        new_time_string = "".join(new_time)
    return new_time_string


if __name__ == '__main__':

    # f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)
    print(result)

    # f.write(result + '\n')

    # f.close()
