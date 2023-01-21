#include <iostream>
using namespace std;

int main()
{
int number=0,number1=1,series,next;
cout<<"enter series :"<<endl;
cin>>series;
cout<<number<<","<<number1;
for(int count=1;count<=series-2;count++)
{
next=number+number1;
cout<<","<<next;
number=number1;
number1=next;


}





}