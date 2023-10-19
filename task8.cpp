#include <iostream>

using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int homeTown);
main()
{
    string yearType;
    int homeTown, holidays,result;
    cout<<"Enter year type: ";
    cin >>yearType;
    cout<<"Enter number of holidays: ";
    cin >>holidays;
    cout<<"Enter number of weekends: ";
    cin >>homeTown;
    result= calculateVolleyballGames(yearType, holidays, homeTown);
    cout<<result;
}

int calculateVolleyballGames(string yearType, int holidays, int homeTown)
{
    float f_holiday, f_weekend, leapYear, totalPlay,hometown;
    f_holiday = holidays *2/3;
    f_weekend = 48-homeTown;
    f_weekend = 3/4*f_weekend;
    totalPlay = f_holiday + f_weekend + homeTown;
    if (yearType == "normal" || 'n')
    {
      totalPlay = f_holiday + f_weekend + homeTown;
        return totalPlay;
    }
    if (yearType == "leap" || 'l')
    {
      leapYear = totalPlay +(totalPlay * 15/100);  
        return leapYear;
    }
}
