#include <iostream>

int main ()
{
  int A, B, C;
  std::cin >> A >> B >> C;
  if (A <= B && A <= C)
    {
      std::cout << A;
    }
  else if (B <= A && B <= C)
    {
      std::cout << B;
    }
  else if (C <= A && C <= B)
    {
      std::cout << C;
    }
    
}
