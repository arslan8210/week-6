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