#include<iostream>
using namespace std;

class Facto{
  int num;
 public:
  Facto(){num=0;}
  Facto(int a){num=a;}
  int facto()
  { int a=1;
    for(int i=1;i<=num;i++)
        a*=i;
  return a;}
};

int main()
{
Facto F1(5); 
Facto F2=F1;
cout<<"Factorial of 5 is "<<F2.facto()<<endl;
return 0;
}

