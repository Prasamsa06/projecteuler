#include <iostream>
using namespace std;

int main() {
  int sum_multiples = 0;
  for (int num = 0; num < 1000; num++) {
    if (num % 3 == 0){
      sum_multiples += num;
    }
    else if (num % 5 == 0){
      sum_multiples += num;
    }
  }
  cout << sum_multiples;
  return 0;
}