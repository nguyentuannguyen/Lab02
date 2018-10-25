#include<iostream>
#include<math.h>
using namespace std;
struct frac
{
	float a;
	float b;
};
int main()
{
	char c,s;
	do
	{
	struct frac FRAC1;
		cout<<"Nhap tu so: ";cin>>FRAC1.a;
		do
		{
			cout<<"Nhap mau so: ";cin>>FRAC1.b;
			if(FRAC1.b==0)
			{
				cout<<"\n Khong hop le.";
			}
		}while(FRAC1.b==0);
		cout<<"Phan so thu nhat: "<<FRAC1.a<<"/"<<FRAC1.b;
	struct frac FRAC2;
		cout<<"\nNhap tu so: ";cin>>FRAC2.a;
		do
		{
			cout<<"Nhap mau so: ";cin>>FRAC2.b;
			if(FRAC2.b==0)
			{
				cout<<"\n Khong hop le.";
			}
		}while(FRAC2.b==0);
		cout<<"Phan so thu hai: "<<FRAC2.a<<"/"<<FRAC2.b;
		cout<<"\nNhap phep toan: ";cin>>s;
	switch(s)
	{
		case'+':
		cout<<"Addition: "<<(FRAC1.a*FRAC2.b+FRAC1.b*FRAC2.a)/(FRAC1.b*FRAC2.b);
		break;
		case'-':
		cout<<"Subtraction: "<<(FRAC1.a*FRAC2.b-FRAC1.b*FRAC2.a)/(FRAC1.b*FRAC2.b);
		break;
		case'*':
		cout<<"Multiplication: "<<(FRAC1.a*FRAC2.a)/(FRAC1.b*FRAC2.b);
		break;
		case'/':
		if(FRAC2.a!=0)
		{
			cout<<"Division: "<<(FRAC1.a*FRAC2.b)/(FRAC1.b*FRAC2.a);
		}
		else{
			cout<<"unavailable";
		}
		break;
	}
	cout<<"\nContinue(y/n)?";cin>>c;
	}while(c=='y');
	cout<<"Finish caculation!!";
	return 0;
}

