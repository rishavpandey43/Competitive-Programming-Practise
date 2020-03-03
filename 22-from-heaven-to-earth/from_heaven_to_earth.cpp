#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int test_case;
  cin >> test_case;
  while (test_case--) {
    int total_floor, elevator_speed, chef_speed;
    double stairs_distance, elevator_distance, chef_time, elevator_time;
    cin >> total_floor >> chef_speed >> elevator_speed;
    stairs_distance = sqrt(2) * total_floor;
    elevator_distance = 2 * total_floor;
    chef_time = stairs_distance / chef_speed;
    elevator_time = elevator_distance / elevator_speed;
    if (chef_time < elevator_time) {
      cout << "Stairs" << endl;
    }
    if (chef_time > elevator_time) {
      cout << "Elevator" << endl;
    }
  }
}
