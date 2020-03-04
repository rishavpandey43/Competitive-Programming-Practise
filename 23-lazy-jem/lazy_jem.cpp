#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int test_case;
  cin >> test_case;
  while (test_case--) {
    long int total_ques, break_time, solving_time;
    cin >> total_ques >> break_time >> solving_time;
    long int remaining_ques_to_calculate = 0;
    long int total_ques_left = total_ques;
    long long int total_time = 0;
    long long int multiple = 1;
    while (total_ques_left != 0) {
      remaining_ques_to_calculate = (total_ques_left + 1) / 2;
      total_time +=
          break_time + (solving_time * multiple) * remaining_ques_to_calculate;
      total_ques_left = total_ques_left - remaining_ques_to_calculate;
      multiple *= 2;
    }
    cout << total_time - break_time << endl;
  }
  return 0;
}
