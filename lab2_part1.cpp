#include <iostream>
#include <vector>
#include <ctime>
bool cicle (int *a,int n,int m);

using namespace std;
int main ()
{
	double time, start;
	
	int *a;
	
	int point = 5;
	while (point<1000)
	{
		start = double (clock());
		
		  a = new int[point-1];
		  int n = point-1;
		  
		for (int i = 0; i < n; i++)
		{a[i] = i + 1;}
		
		
		while (cicle(a,n,n))
		{
		}
		time = double (clock());
		cout<<"\namount N: "<<point<<" time : "<<time-start<<"\n";
		point++;
	}

	
	
	return 0;
}


bool cicle (int *a, int n, int m)
{
  int k = m;
  for (int i = k - 1; i >= 0; --i)
    if (a[i] < n - k + i + 1) 
    {
      ++a[i];
      for (int j = i + 1; j < k; ++j)
        a[j] = a[j - 1] + 1;
      return true;
    }
  return false;
}
