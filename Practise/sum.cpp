#include<iostream>
using namespace std;
int sum(int number)
{
  int sum=0;
  for (int i = 1; i<=number; ++i)
  {
    sum=sum+i;
  }
  return sum;
}
int main()
{
    cout<<sum(10);
}
