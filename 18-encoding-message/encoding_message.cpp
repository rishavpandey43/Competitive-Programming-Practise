#include <bits/stdc++.h>

using namespace std;

string encode_message(int string_len, string message) {
  char temp_char = 'a';
  for (size_t i = 1; i < string_len; i += 2) {
    temp_char = message[i];
    message[i] = message[i - 1];
    message[i - 1] = temp_char;
  }
  for (size_t i = 0; i < string_len; i++) {
    message[i] = char(122 - (int(message[i]) - 97));
  }
  return message;
}

int main() {
  int test_case;
  std::cin >> test_case;
  int string_len;
  string message;
  for (size_t i = 0; i < test_case; i++) {
    std::cin >> string_len >> message;
    std::cout << encode_message(string_len, message) << std::endl;
  }

  return 0;
}
