#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
main()
{
string fruit, dayOfWeek;
double quantity,total;
cout<<"Enter fruit: ";
cin>>fruit;
cout<<"Enter day: ";
cin>>dayOfWeek;
cout<<"Enter the quantity: ";
cin>>quantity;
total=calculateFruitPrice(fruit,dayOfWeek,quantity);
cout<<"your total bill is: "<<total <<"$";

}
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
{
 double price;
if(dayOfWeek!="sunday")
{
if(fruit=="banana")
{
price=2.50*quantity;

}
if(fruit=="apple")
{
price=1.20*quantity;
}
if(fruit=="orange")
{
price=0.85*quantity;
}
if(fruit=="grapefruit")
{
price=1.45*quantity;
}
if(fruit=="kiwi")
{
price=2.70*quantity;
}
if(fruit=="pineapple")
{
price=5.50*quantity;
}
if(fruit=="grapes")
{
price=3.85*quantity;
}
return price;

}
if(dayOfWeek=="sunday")
{
if(fruit=="banana")
{
price=2.70*quantity;

}
if(fruit=="apple")
{
price=1.25*quantity;
}
if(fruit=="orange")
{
price=0.90*quantity;
}
if(fruit=="grapefruit")
{
price=1.60*quantity;
}
if(fruit=="kiwi")
{
price=3.00*quantity;
}
if(fruit=="pineapple")
{
price=5.60*quantity;
}
if(fruit=="grapes")
{
price=4.20*quantity;
}
return price;

}


}
