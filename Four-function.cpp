#include<iostream>
#include<math.h>
using namespace std;
void caculation(float a,float b, char s)
{
	cout<<"Enter first number: ";cin>>a;
	cout<<"Enter operator: ";cin>>s;
	cout<<"Enter second number: ";cin>>b;
switch (s)
{
	case '+':
		cout<<"Answer= "<<a+b;
		break;
	case'-':
		cout<<"Answer= "<<a-b;
		break;
	case'*':
		cout<<"Answer= "<<a*b;
		break;
	case'/':
		if(b!=0){
		float d=a/b;
		cout<<"Answer= "<<d;
		}
		else{
		cout<<"unavailable";
		}
		break;
}
}
int main()
{
	float a,b;
	char s,c;
	do
	{
		caculation(a,b,s);
		cout<<"\nDo another(y/n)?";cin>>c;
	}while(c=='y');
	cout<<"Finish caculation!!";
	return 0;
}

