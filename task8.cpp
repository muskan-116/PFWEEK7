#include <iostream>
using namespace std;
void printpercentage(int number);
main()
{
int number;
cout<<"enter any number :";
cin>>number;
printpercentage(number);
}
void printpercentage(int number)
{
    int count=0,newnumb;
float p1=0,p2=0,p3=0,p4=0,p5=0;
while(number>count)
{
cout<<"enter number :";
cin>>newnumb;
count++;

if(newnumb<200)
{
   p1=(p1+1) ;
}
else if(newnumb>=200 &&newnumb<=399)
{
    p2=p2+1;
}
else if(newnumb>=400 &&newnumb<=599)
{
    p3=p3+1;
}
else if(newnumb>=600 &&newnumb<=799)
{
    p4=p4+1;
}
else if(newnumb>=800 )
{
    p5=p5+1;
}
}
p1=(p1*100)/number;
p2=(p2*100)/number;
p3=(p3*100)/number;
p4=(p4*100)/number;
p5=(p5*100)/number;
cout<<p1<<"%"<<endl;
cout<<p2<<"%"<<endl;
cout<<p3<<"%"<<endl;
cout<<p4<<"%"<<endl;
cout<<p5<<"%"<<endl;


}



