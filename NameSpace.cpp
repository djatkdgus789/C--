#include<iostream>

namespace A
{
  void Simple()
  {
    std::cout << "1에서 정의한 함수" << '\n';
  }
}


namespace B
{
  void Simple(/* arguments */)
  {
    std::cout << "2에서 정의한 함수" << '\n';
  }
}

int main()
{
  A::Simple();
  B::Simple();
  return 0;
}
