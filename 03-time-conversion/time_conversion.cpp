#include <bits/stdc++.h>

using namespace std;

/* * Complete the timeConversion function below. */
string timeConversion(string s) {
  std::replace(s.begin(), s.end(), ':', ' ');

  vector < int > array;
  stringstream ss(s);
  int temp;
  while (ss >> temp)
    array.push_back(temp);

  for (size_t i = 0; i < array.size(); i++)
  {
    std::cout << array[i];
  }
  return "hello";

}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  string s;
  getline(cin, s);

  string result = timeConversion(s);

  fout << result << "\n";

  fout.close();

  return 0;
}
