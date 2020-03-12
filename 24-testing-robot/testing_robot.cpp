#include <iostream>

using namespace std;

int total_points(long int string_length, int starting_point, char path[]) {
  int high = starting_point, low = starting_point;
  int total_points = 0;
  for (size_t i = 0; path[i] != '\0'; i++) {
    if (path[i] == 'R') {
      starting_point++;
    }
    if (path[i] == 'L') {
      starting_point--;
    }
    if (starting_point >= high) {
      high = starting_point;
    }
    if (starting_point <= low) {
      low = starting_point;
    }
  }
  total_points = (high - low) + 1;
  return total_points;
}

int main() {
  int test_case;
  cin >> test_case;
  while (test_case--) {
    long int string_length, starting_point;
    char path[101];
    cin >> string_length >> starting_point;
    cin >> path;
    cout << total_points(string_length, starting_point, path) << endl;
  }
  return 0;
}
