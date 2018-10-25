#include<iostream>
#include<math.h>
using namespace std;
void interest(long int A,int y,float r)
{
	cout<<"Enter initial amount: ";cin>>A;
	cout<<"Enter number of years: ";cin>>y;
	cout<<"Enter interest rate: ";cin>>r;
	double sum=0;
	float R=r/100;
	float c=1+R;
	double e=pow(c,y);
	for(int i=1;i<=y;i++)
	{
		
		sum=e*A;
	}
	cout<<"At the end of "<<y<<" years,you will have "<<sum<<" dollars";
}
int main()
{
	long int A;
	int y;
	float r;
	interest( A,y,r);
	return 0;
}
