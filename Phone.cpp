#include<iostream>
#include<cstring>
using namespace std;
struct phonenumber
{
	char area[4];
	char exchange[4];
	char number[5];
};
int main()
{
struct phonenumber Yournumber;
	cout<<"\nEnter your area code,exchange and number: ";
	cin>>Yournumber.area>>Yournumber.exchange>>Yournumber.number;
	cout<<"My number is:("<<212<<")"<<767<<"-"<<8900<<endl;
	cout<<"Your number is:("<<Yournumber.area<<")"<<Yournumber.exchange<<"-"<<Yournumber.number<<endl;
	return 0;
}

	
	
