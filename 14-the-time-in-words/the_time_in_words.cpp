#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
  string result = "";
  vector<string> num_to_word{
      "one",         "two",        "three",        "four",
      "five",        "six",        "seven",        "eight",
      "nine",        "ten",        "eleven",       "twelve",
      "thirteen",    "fourteen",   "fifteen",      "sixteen",
      "seventeen",   "eighteen",   "nineteen",     "twenty",
      "twenty one",  "twenty two", "twenty three", "twenty four",
      "twenty five", "twenty six", "twenty seven", "twenty eight",
      "twenty nine", "thirty"};
  if (m == 0) {
    result = num_to_word[h - 1];
    result.append(" o' clock");
  } else if (m <= 30) {
    if (m == 1) {
      result = num_to_word[m - 1] + " minute past " + num_to_word[h - 1];
    } else if (m == 15) {
      result = "quarter past " + num_to_word[h - 1];
    } else if (m == 30) {
      result = "half past " + num_to_word[h - 1];
    } else {
      result = num_to_word[m - 1] + " minutes past " + num_to_word[h - 1];
    }
  } else if (m > 30) {
    if (m == 59) {
      result = num_to_word[59 - m] + " minute to " + num_to_word[h];
    } else if (m == 45) {
      result = "quarter to " + num_to_word[h];
    } else {
      result = num_to_word[59 - m] + " minutes to " + num_to_word[h];
    }
  }

  // std::cout << result << "\n";
  return result;
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int h;
  cin >> h;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int m;
  cin >> m;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string result = timeInWords(h, m);

  fout << result << "\n";

  fout.close();

  return 0;
}
