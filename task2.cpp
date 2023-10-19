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