#include <iostream>
using namespace std;
int calculateGCD(int numb1,int numb2);
int calculateLCM(int numb1,int numb2,int result1);
int main()
{
    int numb1,numb2,gcd,result1,result2;
    cout<<"enter number1 :";
    cin>>numb1;
    cout<<"enter number2 : ";
    cin>>numb2;
result1=calculateGCD(numb1,numb2);
cout<<"HCF IS :"<<result1<<endl;
result2=calculateLCM(numb1,numb2,result1);
cout<<"LCM IS :"<<result2<<endl;
}
int calculateGCD(int numb1,int numb2)
{
    int hcf=1,gcd;
    while(hcf<=numb1 && hcf<=numb2)
    {
        if(numb1%hcf==0 && numb2%hcf==0)
        gcd=hcf;
        hcf++;
    }
return gcd;
}
int calculateLCM(int numb1,int numb2,int result1)
{
    int lcm;
lcm=(numb1*numb2)/result1;
return lcm;
}








