#include <iostream>

void swap (int *a,int *b);
void swap (char *a,char *b);

int main(){

  int num1 = 2 , num2 = 3;
  swap(&num1, &num2);
  std::cout << num1 << num2 << '\n';

  char char1 = 'a' , char2 = 'b';
  swap(&char1, &char2);
  std::cout << char1 << char2 << '\n';


}
void swap (int *a, int *b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;

}
void swap (char *a, char *b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;

}
