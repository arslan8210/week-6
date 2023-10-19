#include<iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
main()
{
    string month;
    int numberOfStays;
cout<<"Enter the month(May,June,July,August,September,Octuber): ";
cin>>month;
cout<<"Enter the number of stays: ";
cin>>numberOfStays;
calculateHotelPrices(month,numberOfStays);

}
string calculateHotelPrices(string month, int numberOfStays)
{
    float studio,apartment,total,discount;
if(month=="may" || month=="octuber")
{
if(numberOfStays>7)
{
total=50*numberOfStays;
discount=total-(total*5/100);
studio=discount;
apartment=65*numberOfStays;
cout<<"Apartment : "<<apartment<<"$";
cout<<"Studio : "<<studio<<"$";
}
if(numberOfStays>14)
{
total=50*numberOfStays;
discount=total-(total*30/100);
studio=discount;
apartment=65*numberOfStays;
discount=total-(total*10/100);
apartment=discount;
cout<<"Apartment : "<<apartment<<"$";
cout<<"Studio : "<<studio<<"$";
}
}
if(month=="june" || month=="september")
{
if(numberOfStays>7)
{
total=75.20*numberOfStays;
studio=total;
apartment=68.70*numberOfStays;
cout<<"Apartment : "<<apartment<<"$";
cout<<"Studio : "<<studio<<"$";
}
if(numberOfStays>14)
{
total=75.20*numberOfStays;
discount=total-(total*20/100);
studio=discount;
apartment=68.70*numberOfStays;
discount=total-(total*10/100);
apartment=discount;
cout<<"Apartment : "<<apartment<<"$";
cout<<"Studio : "<<studio<<"$";
}
}
if(month=="july" || month=="August")
{
if(numberOfStays<14)
{
total=76*numberOfStays;
studio=total;
apartment=77*numberOfStays;
cout<<"Apartment : "<<apartment<<"$";
cout<<"Studio : "<<studio<<"$";
}
if(numberOfStays>14)
{
total=76*numberOfStays;
studio=total;
apartment=77*numberOfStays;
discount=total-(total*10/100);
apartment=discount;
cout<<"Apartment : "<<apartment<<"$";
cout<<"Studio : "<<studio<<"$";
}
}

}