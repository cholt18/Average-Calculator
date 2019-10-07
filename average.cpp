#include <iostream>


int main(){

  std::cout << "Please enter 5 integers" << std::endl;
  int x = 0;
  int sum = 0;
  int num = 0;
  while(cin >> x){
    sum+= x;
    num++;
  }
  float average = sum/num;
  std::cout << "The average of the numbers is " << average << std::endl;
  return 0;
}
