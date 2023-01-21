#include <iostream>
using namespace std;
int digitsum(int number);
main()
{
int number,result;
cout<<"enter any number :  ";
cin>>number;
result=digitsum(number);
cout<< "sum :"<<result;
}
int digitsum(int number)
{
   int sum=0;
while(number>0)
{

    int number2;
number2=number%10;
number=number/10;
sum=sum+number2;

}
return sum;








}