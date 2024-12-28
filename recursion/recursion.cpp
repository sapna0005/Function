
// sum
// # include <iostream>
// using namespace std;
//  int sum(int number)
// {
//   if (number<=1)
//   {
//    return number;
//   }
//   return number+sum(number-1);

// }
// int main()
// {
//   cout<<sum(10);

// }

// factorial
// # include <iostream>
// using namespace std;
// int sum(int number)
// {
//   if (number<=1)
//   {
//    return number;
//   }
//   return number*sum(number-1);

// }
// int main()
// {
//   cout<<sum(2);

// }

//fibonacci series
# include<iostream>
using namespace std;

int fibo(int number)
{
  if (number<=1)
  {
    return number;
  }
  return fibo(number-1)+(number-2);
}
int main()
{
  cout<<fibo(4);
}



