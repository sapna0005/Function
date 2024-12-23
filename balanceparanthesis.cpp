#include<iostream>
using namespace std;
bool balance(string &str)
{
    int square=0;
    int curly=0;
    int circle=0;
    for (int i = 0; i<str.length(); ++i)
    {
        
        if (str[i]=='[')
        {
           square++;
        }
        else if(str[i]==']')
        {
            if (square==0)
            {
                return false;
            }
         square--;
        }
        else if(str[i]=='{')
        {
            curly++;
        }
        else if(str[i]=='}')
        {
         if (curly==0)
         {
            return false;
         }
         
           curly--;
        }
        
        else if(str[i]=='(')
        {
          circle++;
        }
        else if(str[i]==')')
        {
          if(circle==0)
          {
            return false;
          }
          circle--;
        }
    }
    if (square==0 && curly==0 && circle==0)
    {
        return true;
    }
        return false;
}
int main()
{
    string str="[{()}]";
    if (balance(str))
    {
        cout<<"balanced";
    }
    else
    {
        cout<<"not balanced";
    }

}