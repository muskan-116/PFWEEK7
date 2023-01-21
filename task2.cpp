#include <iostream>
using namespace std;
int totaldigit(int total);
int main()
{
int digit,result;
cout<<"enter any number of digit :";
cin>>digit;
result=totaldigit(digit);
cout<<"total digit is : "<<result;
}
int totaldigit(int total)
{
int counter=0;
while(total>0)
{
total=total/10;
counter=counter+1;

}
return counter;




}
