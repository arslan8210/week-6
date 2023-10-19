#include<iostream>
using namespace std;
float premium();
float regular();
main()
{
char code;
cout<<"Enter the service code R/r for regular , P/p for premium): ";
cin>>code;
if(code=='r' || code=='R')
{
    premium();
}
if(code=='P' || code=='p') 
{
  regular();  
}
}
float premium()
{
char time;
float minutes;
float tt;
float charges;
cout<<"Enter time of the call(d for day , n for night): ";
cin>>time;
cout<<"Enter the minutes: ";
cin>>minutes;
cout<<"Total minutes used: "<<minutes;
if(minutes>50)
{
    tt=50-minutes;
    charges=0.2*tt;
    cout<<"Amount Due "<<charges <<"$";
    return charges;
}

}
float regular()
{
float minutes;
float tt;
float charges;
cout<<"Enter the minutes: ";
cin>>minutes;
cout<<"Total minutes used: "<<minutes;
if(minutes>50)
{
    tt=50-minutes;
    charges=0.10*tt;
    cout<<"Amount Due "<<charges <<"$";
    return charges;

}
}
