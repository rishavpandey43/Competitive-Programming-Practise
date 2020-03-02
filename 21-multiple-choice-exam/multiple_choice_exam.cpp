#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int total_points(int string_length, char correct_ans_arr[],
                 char chef_ans_arr[]) {
  int total_points = 0;
  int penalty = 0;
  for (size_t i = 0; i < string_length; i++) {
    if (chef_ans_arr[i] != 'N' && chef_ans_arr[i] != correct_ans_arr[i] &&
        i != string_length - 1) {
      chef_ans_arr[i + 1] = 'N';
    }

    if (chef_ans_arr[i] == correct_ans_arr[i]) {
      total_points++;
    }
  }
  return total_points;
}

int main() {
  int test_case;
  cin >> test_case;
  for (size_t i = 0; i < test_case; i++) {
    int string_length;
    cin >> string_length;
    string correct_ans, chef_ans;
    char correct_ans_arr[string_length];
    char chef_ans_arr[string_length];
    cin >> correct_ans >> chef_ans;
    strcpy(correct_ans_arr, correct_ans.c_str());
    strcpy(chef_ans_arr, chef_ans.c_str());
    cout << total_points(string_length, correct_ans_arr, chef_ans_arr) << endl;
  }

  return 0;
}
