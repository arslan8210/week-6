#include <iostream>
#include<windows.h>
using namespace std;
void checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinutes);
main()
{
    int examHour, examMinute, studentHour, studentMinutes;
    cout<<"enter Exam Starting Time (hours): ";
    cin>> examHour;
    cout<<"enter Exam Starting Time (minutes): ";
    cin>>examMinute;
    cout<<"enter Student hour  of arrival: ";
    cin>>studentHour;
    cout<<"enter Student minutes of arrival: ";
    cin>>studentMinutes;
    checkStudentStatus (examHour, examMinute, studentHour, studentMinutes);

}

void checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinutes)
{
    int emin,stMin,f_hour,f_min;
    emin=(examHour*60) + examMinute;
    stMin = (studentHour * 60) + studentMinutes;
    if (emin == stMin)
    {
        cout << "On time";
    }
    else if (emin > stMin)
    {
        cout << "Early\n";
        f_hour = (emin - stMin) / 60;
        f_min = (emin - stMin) - (f_hour * 60);
        if (f_hour != 0)
        {
            cout << f_hour << ":" << f_min << " hours before the start";
        }
        if(f_hour==0)
            cout << emin - stMin <<" examMinute before the start";
    }
    else if(stMin > emin)
    {
        cout << "Late\n"; 
        f_hour = (stMin - emin) / 60;
        cout << stMin - emin;
        f_min = (stMin - emin) - (f_hour * 60);
        if (f_hour != 0)
         {
             cout<<f_hour<<":"<< f_min <<" hours after the start";
         }
        if(f_hour==0)
           {
            cout<<stMin - emin<<"Minutes before the start";
    }
}

}