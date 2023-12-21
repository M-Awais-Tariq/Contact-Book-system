#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstring>
#include <iomanip>
#include "phonebook.h"
using namespace std;

class phonebook
{
	string firstname;
	string lastname;
	string phonenumber;
	string Emailaddress;
	string Postaladdress;
	
public:
// setters
	void Setrecordno(int);
	void Setfirstname(string);
    void Setlastname(string);
    void Setphonenumber(string);
    void SetEmailaddress(string);
    void SetPostaladdress(string);
    
// getters
    string Getfirstname();
    string Getlastname();
	string Getphonenumber();
	string GetEmailaddress();
	string GetPostaladdress();
    int Getrecordno();
//  Functions
	void input();
    void disp();
}
void phonebook::Setfirstname(string firstname)
{
	this->firstname=firstname;
}
void phonebook::Setlastname(string lastname)
{
	this->lastname=lastname;
}
void phonebook::Setphonenumber(string phonenumber)
{
	this->phonenumber=phonenumber;
}
void phonebook::SetEmailaddress(string emailaddress)
{
	this->Emailaddress=emailaddress;
}
void phonebook::SetPostaladdress(string Postaladdress)
{
	this->Postaladdress=Postaladdress;
}
string phonebook::Getfirstname()
{
	return firstname;
}
string phonebook::Getlastname()
{
	return lastname;
}
string phonebook::Getphonenumber()
{
	return phonenumber;
}
string phonebook::GetEmailaddress()
{
	return Emailaddress;
}
string  phonebook::GetPostaladdress()
{
	return Postaladdress;
}

void phonebook::input()
{
	cout<<"Enter your first name:";
	cin>>firstname;
	cout<<"Enter your last Name :";
	cin>>lastname;
	cout<<"Enter your Phone number :";
	cin>>phonenumber;
	cout<<"Enter your  Email address :\n";
	cin>>Emailaddress;
	cout<<"Enter  your postal address :\n";
	cin>>postaladdress;
}

void phonebook::disp()
{
	cout<<"\n\nFirst name     = "<<firstname;
	cout<<"\nLast Name      = "<<lastname;
	cout<<"\nPhone number   = "<<phonenumber;
	cout<<"\nEmail address  = "<<Emailaddress;
	cout<<"\nPostal address = "<<postaladdress;
}
