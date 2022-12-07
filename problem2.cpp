#include <iostream>
using namespace std;

int main() {
  int even = 0;
  int sum = 0;
  for (int num = 1; num < 4000000; num++ ){
    sum += num;
    if (sum % 2 == 0){
      even += 1;
    }
    
  }
  cout << even;
  return 0;
}