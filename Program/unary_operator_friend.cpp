#include <iostream>
 
2	using namespace std;
 
3	
 
4	class Negation {
 
5	public:
 
6		int x, y;
 
7		Negation(int a, int b)
 
8		{
 
9			x = a;
 
10			cout<<"x : "<<x<<endl;
 
11		}
 
12	
 
13		//overload - operator
 
14		friend void operator-(Negation &N);
 
15		
 
16	}; 
 
17	
 
18	void operator-(Negation &N) 
 
19		{ 
 
20			N.x=++N.x; 
 
21			cout<<endl<<"After performing unary operator overlaoding"<<endl;
 
22			cout<<"x : "<<N.x<<endl;
 
23		} 
 
24		
 
25	int main() 
 
26	{ 
 
27		Negation d1(8, 9);
 
28		
 
29		-d1;
 
30		
 
31		return 0; 
 
32	}

