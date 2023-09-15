#include <iostream>
float average(int);
main( ){
int n;
float avg;
cout<<"enter size of the numbers :\n";
cin>>n;
avg= average(n);
cout<<"the average of all numbers ="<<avg;
cout<<"\n";
return 0;}
float average(int a )
{
float i, value,sum=0;
cout<<"enter "<<a<<"values please=:\n";
for(i=1;i<=a;i++)
{
cout<<"enter value "<<i<<"\n";
cin>>value;
sum+=value;
}
return sum/a;
}