#include <iostream>

using namespace std;

int pick_the_movie(int number_of_movies, long int movie_length[],
                   long int movie_rating[]) {
  int movie_index = number_of_movies - 1;
  int max_value = movie_length[0] * movie_rating[0];
  int max_rating = 0;
  int min_index = number_of_movies - 1;
  for (size_t i = 0; i < number_of_movies; i++) {
    if (movie_rating[i] > max_rating) {
      max_rating = movie_rating[i];
    }
  }
  for (int i = 0; i < number_of_movies; i++) {
    if (movie_length[i] * movie_rating[i] > max_value) {
      max_value = movie_length[i] * movie_rating[i];
      movie_index = i;
      // min_index = i;
    }
    if (movie_length[i] * movie_rating[i] == max_value &&
        movie_rating[i] == max_rating) {
      max_value = movie_length[i] * movie_rating[i];
      // movie_index = i;
      // cout << min_index << "\t" << i << "\n";
      if (i < min_index) {
        min_index = i;
      }

      if (min_index == i) {
        movie_index = i;
      }
    }
  }

  return movie_index + 1;
}

int main() {
  int test_case;
  cin >> test_case;
  for (size_t i = 0; i < test_case; i++) {
    int number_of_movies;
    cin >> number_of_movies;
    long int movie_length[number_of_movies];
    long int movie_rating[number_of_movies];
    for (size_t j = 0; j < number_of_movies; j++) {
      cin >> movie_length[j];
    }
    for (size_t k = 0; k < number_of_movies; k++) {
      cin >> movie_rating[k];
    }
    cout << pick_the_movie(number_of_movies, movie_length, movie_rating)
         << endl;
  }
  return 0;
}
