#include<iostream>
using namespace std;
class Date
{int dd,mm,yr;
 public:
  Date(){dd=0;mm=0;yr=0;}
  Date(int d,int m,int y)
    {dd=d;mm=m;yr=y;}
  void disp()
   {cout<<dd<<'/'<<mm<<'/'<<yr<<endl;}
  void operator ++()
   {int flag=0;
    if((yr%400==0)||(yr%4==0&&yr%100!=0))
     flag=1;
    if(mm==12)
      {if(dd==31){yr++; mm=1; dd=1;}
       else dd++;}
    else if(mm==4||mm==6||mm==9||mm==11)
      {if(dd==30)
         {dd=1; mm++;}
       else dd++;}
   else if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10)
      {if(dd==31)
         {dd=1; mm++;}
       else dd++;}
   else if(mm==2)
      {
       if(dd==28)
         {if(flag==1)
             dd++;
         else {mm++;dd=1;}}
       else if(dd==29)
           {mm++; dd=1;}
       else dd++;
     }
}
};

int main()
{
  Date D; int d,m,y;
  cout<<"Enter date, month and year: ";
  cin>>d>>m>>y;
  D=Date(d,m,y);
  ++D;
  cout<<"The next day is ";D.disp();
  return 0;
}
