// Bank management System

#include<iostream>
int Menu();
void Create();
void Deposit();
void Withdraw();
void Show();





int main(int argc, char const *argv[]) {
  int i = 0;
  while (i != 5)
  {
    i = Menu();
    switch (i) {
      case 1:

      case 2:

      case 3:

      case 4:

    }
    return 0;
}

int Menu()
{
  int i;
  std::cout << "-----Menu-----" << '\n';
  std::cout << "1. 계좌개설" << '\n';
  std::cout << "2. 입 금" << '\n';
  std::cout << "3. 출 금" << '\n';
  std::cout << "4. 계좌정보 전체 출력" << '\n';
  std::cout << "5. 프로그램 종료" << '\n';
  std::cout << "선택 : ";
  std::cin >> i;
  return i;
}
void
