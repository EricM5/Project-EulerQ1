#include <iostream>
int main()
{
  int uptill = 1000;
  int sum = 0;
  for (int i = 0; i < uptill; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      sum += i;
    }
  }
  std::cout << sum;
}
