# Day of the Programmer

Marie invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of the Programmer (the **_256<sup>th</sup>_** day of the year) during a year in the inclusive range from **_1700_** to **_2700_**.

From **_1700_** to **_1917_**, Russia's official calendar was the Julian calendar; since **_1919_** they used the Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in , when the next day after January **_31<sup>st</sup>_** was February **_14<sup>th</sup>_**. This means that in **_1918_**, February **_14<sup>th</sup>_** was the **_32<sup>nd</sup>_** day of the year in Russia.

In both calendar systems, February is the only month with a variable amount of days; it has **_29_** days during a leap year, and **_28_** days during all other years. In the Julian calendar, leap years are divisible by **_4_**; in the Gregorian calendar, leap years are either of the following:

- Divisible by **_400_**.
- Divisible by **_4_** and not divisible by **_100_**.
  Given a year, **_y_**, find the date of the **_256<sup>th</sup>_** day of that year according to the official Russian calendar during that year. Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is **_y_**.

For example, the given . **_year = 1984. 1984_** is divisible by **_4_**, so it is a leap year. The **_256<sup>th</sup>_** day of a leap year after **_1918_** is September 12, so the answer is **_12.09.1984_**.

## Function Description

Complete the dayOfProgrammer function in the editor below. It should return a string representing the date of the **_256<sup>th</sup>_** day of the year given.

dayOfProgrammer has the following parameter(s):

- year: an integer

## Input Format

A single integer denoting year **_y_**.

## Constraints

- 1 <= n <= 1000
- 0 <= scores[i] < 10<sup>8</sup>

## Output Format

Print the full date of Day of the Programmer during year **_y_** in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is **_y_**.

## Sample Input 0

2017

## Sample Output 0

13.09.2017

## Explanation 0

In the year **_y = 2017_**, January has **_31_** days, February has **_28_** days, March has **_31_** days, April has **_30_** days, May has **_31_** days, June has **_30_** days, July has **_31_** days, and August has **_31_** days. When we sum the total number of days in the first eight months, we get **_31 + 28 + 31 + 30 + 31 + 30 +31 + 31 = 243_**. Day of the Programmer is the **_256<sup>th</sup>_** day, so then calculate **_256 - 243 = 13_** to determine that it falls on day **_13_** of the **_9<sup>th</sup>_** month (September). We then print the full date in the specified format, which is 13.09.2017.

## Sample Input 1

2016

## Sample Output 1

12.09.2016

## Explanation 1

Year **_Y = 2018_** is a leap year, so February has **_29_** days but all the other months have the same number of days as in **_2017_**. When we sum the total number of days in the first eight months, we get **_31 + 29 + 31 + 30 + 31 + 30 +31 + 31 = 244_**.Day of the Programmer is the **_256<sup>th</sup>_** day, so then calculate **_256 - 244 = 12_** to determine that it falls on day **_12_** of the **_9<sup>th</sup>_** month (September). We then print the full date in the specified format, which is 12.09.2018.

[source of question](https://www.hackerrank.com/challenges/day-of-the-programmer/problem)
