#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
using namespace std;

int main ()

{
	ofstream out;          
    out.open("/home/louisa/louisa2/spi2/l92.txt");
clock_t start;
double t1,t2,t3,tt;
start=clock()/CLOCKS_PER_SEC;
tt=double (clock())/CLOCKS_PER_SEC;
bool display = true;
	int amount = 0;
	vector <int> vec;
	vector <int> vec1;
	vector <int> vec2;
	vector <int> vec3;
	
	
	while(amount<50)
	{
		bool cond = true;
		if((	clock()/CLOCKS_PER_SEC)-start ==1)
		{
			if (cond&&(vec1.size()==0))
			{
			//	cout<<"hey";
				vec1.push_back(1);
				if(vec.size()!=0) {vec.pop_back(); display=true;}
				*(&t1)=double(clock())/CLOCKS_PER_SEC;
				cond = false;
			}
			if (cond&&(vec2.size()==0))
			{
				vec2.push_back(1);
				if(vec.size()!=0) {vec.pop_back(); display=true;}
				*(&t2)=double(clock())/CLOCKS_PER_SEC;
				cond = false;
			}
				
			if (cond&&(vec3.size()==0))
			{
				vec3.push_back(1);
				if(vec.size()!=0) {vec.pop_back(); display=true;}
				*(&t3)=double(clock())/CLOCKS_PER_SEC;
				cond = false;
			}
				
			else if ((vec1.size()!=0)&&(vec2.size()!=0)&&(vec3.size()!=0))
			{
				vec.push_back(1);
				display=true;
			}
				
			
		
			
			
		
			*(&start)=double(clock())/CLOCKS_PER_SEC;
			amount++;
			
		}
			
		if (vec1.size()!=0)
			{
				if ((double(clock())/CLOCKS_PER_SEC)-(*(&t1))> double(1.0/0.3))
				{
					/*double r=(double(clock())/CLOCKS_PER_SEC)-(*(&t1));
					cout<<r<<"\n";
					cout<<"hey";*/
					vec1.pop_back(); 
					if (vec.size()!=0)
					{vec1.push_back(1);
						*(&t1)=double(clock())/CLOCKS_PER_SEC;
						vec.pop_back();
						display=true;
						}
				}
				
			}
			
			if (vec2.size()!=0)
			{
				if ((double(clock())/CLOCKS_PER_SEC)-(*(&t2))> double(1.0/0.3))
				{
					//cout<<"hey";
					vec2.pop_back(); 
					if (vec.size()!=0)
					{vec2.push_back(1);
						*(&t2)=double(clock())/CLOCKS_PER_SEC;
						vec.pop_back();
						display=true;
						}
				}
				
			}
			if (vec3.size()!=0)
			{
				if ((double(clock())/CLOCKS_PER_SEC)-(*(&t3))> double(1.0/0.3))
				{
					//cout<<"hey";
					vec3.pop_back(); 
					if (vec.size()!=0)
					{
						//cout<<"hello";
						vec3.push_back(1);
						*(&t3)=double(clock())/CLOCKS_PER_SEC;
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

