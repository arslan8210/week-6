//task 1


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


//task 2


#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish , float marksmath , float marksChemistry, float marksSocialscience, float marksBiology);
string gradecCalculate(float averge);
main()
{
string name;
float avg;
float marksEnglish,marksmath,marksChemistry,marksSocialscience,marksBiology;
cout<<"Enter student name: ";
cin>>name;
cout<<"Enter marks for English: ";
cin>>marksEnglish;
cout<<"Enter marks for Math: ";
cin>>marksmath;
cout<<"Enter marks for Chemistry: ";
cin>>marksChemistry;
cout<<"Enter marks for Socialscience: ";
cin>>marksSocialscience;
cout<<"Enter marks for Biology: ";
cin>>marksBiology;
cout<<"Student Name: "<<name;
// calculateAverage(marksEnglish ,marksmath , marksChemistry,marksSocialscience,marksBiology);
avg=calculateAverage(marksEnglish ,marksmath , marksChemistry,marksSocialscience,marksBiology);
string grade =  gradecCalculate(avg);
cout << "Grade is : " << grade;
}
float calculateAverage(float marksEnglish , float marksmath , float marksChemistry, float marksSocialscience, float marksBiology)
{

float averge;
averge=((marksEnglish+marksmath+marksChemistry+marksSocialscience+marksBiology)*100)/500;
cout<<"percentage: "<<averge <<"%";
return averge;
}
string gradecCalculate(float averge)
{
if(averge>90)
{
  return "Grade: A+" ; 
} 
if(averge>80 && averge<90 )
{
  return "Grade: A" ; 
} 
if(averge>70 && averge<80)
{
  return "Grade: B+";  
} 
if(averge>60 && averge<70)
{
  return "Grade: B";  
} 
if(averge>50 && averge<60)
{
  return "Grade: C";  
} 
if(averge>50 && averge<60)
{
  return "Grade: D";  
} 
if(averge<50)
{
  return "Grade: F" ; 
} 
  
 
return "null";


}


//task 3



#include<iostream>
using namespace std;
string findZodiacSign(int day , string month);
main()
{ 

    int day ;
    string month;
    string zodaicSign;
cout<<"Enter the day of birth: ";
cin>>day;
cout<<"Enter the month of birth(e.g., januaury,feburary): ";
cin>>month;
zodaicSign=findZodiacSign(day ,month);
cout<<"zodaic Sign: "<<zodaicSign;


}
string findZodiacSign(int day , string month)
{
string sign;
if((month=="march" && day>=21) || (month=="april" && day<=19 ))
{
    sign = "Aries";
}
else if((month=="april" && day>=20) || (month=="may" && day<=20))
{

 sign = "Taurus";   
}
else if((month=="may" && day>=21) || (month=="june" && day<=20))
{

 sign = "Gemini";   
}
else if((month=="june" && day>=21) || (month=="july" && day<=22))
{

 sign = "Cancer";   
}
else if((month=="july" && day>=23) || (month=="august" && day<=22))
{

 sign = "Leo";   
}
else if((month=="august" && day>=23) || (month=="september" && day<=22))
{

 sign = "vigro";   
}
else if((month=="september" && day>=23) || (month=="octuber" && day<=22))
{

 sign = "Libra";   
}
else if((month=="octuber" && day>=23) || (month=="november" && day<=21))
{

 sign = "Scorpio";   
}
else if((month=="november" && day>=22) || (month=="december" && day<=21))
{

 sign = "Sagittarius";   
}
else if((month=="december" && day>=22) || (month=="januaury" && day<=21))
{

 sign = "Capricon";   
}
else if((month=="januaury" && day>=20) || (month=="feburary" && day<=18))
{

 sign = "Aquarius";   
}

return sign;

}



//task 4



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




//task 5


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


// task 6





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