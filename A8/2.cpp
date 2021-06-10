#include<iostream>
#include<string.h>
using namespace std;

class Student{
 protected:
  int roll;
  char nm[30];
 public:
  Student(){cout<<"Default constructor of class Student\n";}
  Student(int r, char nm){cout<<"Parameterized constructor of class Student\n";}
  ~Student(){cout<<"Destructor of class Student\n";}};

class Mark:public Student{
 protected:
  int mks[3];
 public:
  Mark(){cout<<"Default constructor of class Mark\n";}
  Mark(int r, char name[], int mark[3]){cout<<"Parameterized constructor of class Mark\n";}
  ~Mark(){cout<<"Destructor of class Mark\n";}};

class Result:public Mark{
  float tot;
 public:
  Result()
   {cout<<"Default constructor of class Result\n";}
  Result(int r,char name[], int marks[3])
   {cout<<"Parameterized constructor of class Result\n";}
  ~Result(){cout<<"Destructor of class Result\n";}
};

int main()
{Student S; Mark M; Result R; char name; int r,marks[3];


return 0;
}
