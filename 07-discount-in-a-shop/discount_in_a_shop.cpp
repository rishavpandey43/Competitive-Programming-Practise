#include <algorithm>
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int check_max_discount(int amount_index, vector<int> toArray) {
  toArray.erase(toArray.begin() + amount_index);
  string toString = "";
  for (size_t i = 0; i < toArray.size(); i++) {
    toString += to_string(toArray[i]);
  }
  return std::stoi(toString);
}

int discount_calc(int amounts) {
  vector<int> toArray;
  int discounted_price = 0;
  for (; amounts; amounts /= 10)
    toArray.push_back(amounts % 10);
  std::reverse(toArray.begin(), toArray.end());
  discounted_price = check_max_discount(0, toArray);
  for (size_t i = 0; i < toArray.size(); i++) {
    int new_discounted_price = check_max_discount(i, toArray);
    if (discounted_price > new_discounted_price) {
      discounted_price = new_discounted_price;
    }
  }

  return discounted_price;
}

int main() {
  // your code goes here
  int amount_count;
  std::cin >> amount_count;
  int amounts[amount_count];
  for (int i = 0; i < amount_count; i++) {
    std::cin >> amounts[i];
    std::cout << discount_calc(amounts[i]) << "\n";
  }

  return 0;
}
