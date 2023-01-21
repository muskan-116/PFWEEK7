#include <iostream>
using namespace std;
float calculatemoney(int age,int toyPrice);
main()
{
int age,toyPrice;
float washingMachine,result;
cout<<"enter lilly's age :";
cin>>age;
cout<<"enter price of washing machine :";
cin>>washingMachine;
cout<<"enter price of toys :";
cin>>toyPrice;
result=calculatemoney(age,toyPrice);
if(washingMachine<result)
{
   result=result-washingMachine;
   cout<<"YES!!!" <<result<<endl;
}
else
{
    result=washingMachine-result;
    cout<<"NO!!!"<<result<<endl;
}
}
float calculatemoney(int age,int toyPrice)
{
    int money=10,year=0,output,toys=0,result;
    for(int count=1;count<=age;count++)
    {
    if(count%2==0)
    {
       year=(year++) +(money-1);
       money=money+10;
         
        
    }
    else
    {
        toys=toys+1;

    }
    }

    toys=toys*toyPrice;

    result=toys+year;
    return result;
}








































    





