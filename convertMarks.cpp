#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,b,c,d;
float e;
char f='y';
cout<<" ________________________________________\n";
cout<<" |\tCONVERT MARKS OF STUDENT\t|\n";
cout<<" |______________________________________|\n\n";
cout<<" Enter full marks you are converting from: ";
cin>>a;
cout<<"\n Enter full marks you are converting to:   ";
cin>>b;
while(f=='y')
{
    d=1;
    cout<<"\n How many students to convert: ";
    cin>>c;
    cout<<"\n Enter marks:\n";
    while(d<=c)
    {
        cout<<"\n Roll["<<d<<"]: ";
        cin>>e;
        cout<<" ----------> "<<((b*e)/a);
        d++;
    }
    cout<<"\n\n\a Do you want to convert again [y / n]: ";
    cin>>f;
}
return 0;
getch();
}
