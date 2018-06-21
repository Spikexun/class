#include"helloclass.h"
#include<iostream>
using namespace std;
class HelloClass()
{

 HelloClass:: HelloClass()
  {
         cout<<"I am being created"<<endl;
  }
 HelloClass:: ~HelloClass()
  {
         cout<<"I am being destroyed"<<endl;
  }
public:
 HelloClass:: void sayHello()
  { 
         cout<<"Hello Class"<<endl;
  }
}




