#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#define PI 3.14159265 
using namespace std;
int main ()
{
	
	double l = 10;
	double amount = 1;
	double a = 20;
	
	srand(time(0));
	while (amount<51)
	{
		double scs = 0;
	for(int i = 0; i<amount; i++)
	{
		int x = rand()%41;
		double phi = rand()%91;
		
		double phi_s = sin(phi*PI/180);
		
		if (x<=20)
		{
			if (x<=(l*phi_s))
			{
				scs++;
			}
		}
		else
		{
			if ((40-x)<=(l*phi_s))
			{
				scs++;
			}
		}
		
	}
	
	double N = scs/amount;
	double P = (2*l)/(a*PI);
	double delta = (abs(P-N)/P);
	cout<<" N: "<<amount<<" success: "<<scs<<" delta:"<<delta<<"\n";
	amount++;
}
	
	
	return 0;
}
