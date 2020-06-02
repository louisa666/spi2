#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
using namespace std;

int main ()

{
	ofstream out;          
    out.open("/home/louisa/louisa2/spi2/lab_10/103.txt");
	clock_t start;
double t,tt;
start=double (clock())/CLOCKS_PER_SEC;
tt=double (clock())/CLOCKS_PER_SEC;
bool display = true;
	int amount = 0;
	vector <int> vec;
	vector <int> vec1;
	
	srand (time(0));
	
	double a = 0.1;
	double b = 2.0;
	double x =  (double)rand()/(double) RAND_MAX*(b-a)+a; 
	
	bool flag = false;
	
	while(amount<50)
	{
		
		
		if((	double(clock())/CLOCKS_PER_SEC)-start > x)
		{
			if (flag)
			{
			if (vec1.size()==0)
			{
				cout<<"hey";
				vec1.push_back(1);
				if(vec.size()!=0) {vec.pop_back(); display=true;}
				*(&t)=double(clock())/CLOCKS_PER_SEC;
			}
			else if (vec1.size()!=0)
			{
				vec.push_back(1);
				display=true;
				/*if (double(clock())/CLOCKS_PER_SEC-(*(&t))==(1.0/0.9))
				{vec1.pop_back();*/
			}
				
			
		
			
		
			*(&start)=start+x;
			*(&x) = (double)rand()/(double) RAND_MAX*(b-a)+a;
			amount++;
			
		}
		flag =true;
	}
			
		if (vec1.size()!=0)
			{
				if ((double(clock())/CLOCKS_PER_SEC)-(*(&t))> double(1.0/0.95))
				{
					//cout<<"hey";
					vec1.pop_back(); 
					if (vec.size()!=0)
					{vec1.push_back(1);
						*(&t)=double(clock())/CLOCKS_PER_SEC;
						vec.pop_back();
						display=true;
						}
				}
				
			}
			
			
	
		if (display) {
			 if (out.is_open())
			{
				out << "\nlength: "<<vec.size()<<" time: "<<double (clock())/CLOCKS_PER_SEC-tt<<"\n";
			}
			display = false;
		}
	}

	
	return 0;
}
