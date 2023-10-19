#include<iostream>
using namespace std;
string detectActivity(string temperature, string humidity);
main()
{
string temperature,humidity;
cout<<"Enter the temperature (warm or cold): ";
cin>>temperature;
cout<<"Enter the humidity (dry or humid): ";
cin>>humidity;
detectActivity(temperature,humidity);

}
string detectActivity(string temperature, string humidity)
{
string reusult;
if(temperature=="warm" && humidity=="dry")
{
cout<<"Play tennis";
}
if(temperature=="warm" && humidity=="humid")
{
cout<<"swim";
}
if(temperature=="cold" && humidity=="dry")
{
cout<<"Play basketball";
}
if(temperature=="cold" && humidity=="humid")
{
cout<<"Watch TV";
}

}
