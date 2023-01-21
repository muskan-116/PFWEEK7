#include <iostream>
using namespace std;
int frequencychecker(int number,int digit);
main()
{
int number,digit,result;
cout<<"enter  number :";
cin>>number;
cout<<"enter digit  :";
cin>>digit;
result=frequencychecker( number,digit);
cout<<"number of digit : "<<result;
}
int frequencychecker(int number,int digit)
{

int count=0;
int number2;
while(number>0)
{
number2=number%10;
number=number/10;
if(number2==digit)
{
count=count+1;

}


return count;




}