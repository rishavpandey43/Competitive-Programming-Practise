#include <bits/stdc++.h>
#include <iostream>

using namespace std;

vector<string> split_string(string);

string check_valid_gloves(long int input_len, long int chef_finger_arr[],
                          long int glove_sheaths_arr[]) {
  string result = "none";
  int front = 0, back = 0;
  for (size_t i = 0; i < input_len; i++) {
    if (chef_finger_arr[i] <= glove_sheaths_arr[i]) {
      front++;
    }
  }

  for (size_t j = 0; j < input_len; j++) {
    // std::cout << glove_sheaths_arr[input_len - 1 - j] << "\t";
    if (chef_finger_arr[j] <= glove_sheaths_arr[input_len - 1 - j]) {
      back++;
    }
  }

  // std::cout << "front- " << front << "\t"
  //           << "back- " << back << "input_len- " << input_len << std::endl;

  if (front == input_len && back == input_len) {
    result = "both";
  }
  if (front == input_len && back != input_len) {
    result = "front";
  }
  if (front != input_len && back == input_len) {
    result = "back";
  }
  if (front != input_len && back != input_len) {
    result = "none";
  }

  return result;
}

int main() {
  int test_case;
  cin >> test_case;
  for (size_t i = 0; i < test_case; i++) {
    long int input_len;
    cin >> input_len;
    long int chef_finger[input_len];
    long int glove_sheaths[input_len];
    for (size_t j = 0; j < input_len; j++) {
      cin >> chef_finger[j];
    }
    for (size_t k = 0; k < input_len; k++) {
      cin >> glove_sheaths[k];
    }
    std::cout << check_valid_gloves(input_len, chef_finger, glove_sheaths)
              << endl;
  }

  return 0;
}
