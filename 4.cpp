#include<iostream.h>
#include<conio.h>
class time
{
public:
int hour;
int minute;
int second;
public:
friend istream &operator>>(istream &scan,time &t)
{
scan>>t.hour>>t.minute>>t.second;
return scan;
}
friend ostream &operator<<(ostream &print,time &t)
{
print<<t.hour<<“:”<<t.minute<<“:”<<t.second;
return print;
}
void operator==(time z)
{
if(hour==z.hour&&minute==z.minute&&second==z.second)
{
cout<<“\nBoth the time are same: “;
}
else
{
cout<<“\nTime are not same: “;
}
}
};
void main()
{
time t1,t2;
clrscr();
cout<<“\nEnter the Time 1st: HOUR MINUTE SECOND \n”;
cin>>t1;
cout<<“\nTIME: “;
cout<<t1;
cout<<“\nEnter the Time 2nd: HOUR MINUTE SECOND \n”;
cin>>t2;
cout<<“\nTIME: “;
cout<<t2;
t1==t2;
getch();
}
