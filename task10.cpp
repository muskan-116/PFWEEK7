#include <iostream>
using namespace std;
float calculatePrice(int year);
main()
{
float money,result;
int year;
cout<<"enter money :";
cin>>money;
cout<<"enter year :";
cin>>year;
result=calculatePrice(year);
if(money>result)
{
    result=money-result;
    cout<<"YES!!HE WILL LIVE A CAREFREE LIFE & WILL HAVE "<< result<<" $ left"<<endl;
}
else
{
    result=result-money;
    cout<<"HE WILL NEED  "<<result<<" $ TO SURVIVE"<<endl;
}
}
float calculatePrice(int year)
{
   
    int age=18;
    float result=0;
for(int count=1800;count<=year;count++)
{
    
    if(count%2==0)
    {
    result=result+12000;
    }
else 
{
    result=result+(12000+50*age);

}
age=age+1;
  
}
  return result;
}