1	#include<iostream>
 
2	using namespace std;
 
3	
 
4	class addition{
 
5	
 
6	    public:
 
7	    // Function to add two integers
 
8	        void add(int a, int b) {
 
9	
 
10	            cout<<"Sum of int values : "<<a+b<<endl;
 
11	        }
 
12	
 
13	        // Function to add two doubles
 
14	        void add(double a, double b) {
 
15	            cout<<"Sum of double values : "<<a+b<<endl;
 
16	        }
 
17	};
 
18	
 
19	int main() {
 
20	
 
21	    addition dd;
 
22	    
 
23	    // Calls int add(int a, int b)
 
24	    dd.add(5, 3); 
 
25	
 
26	    // Calls double add(double a, double b)      
 
27	    dd.add(2.5, 3.7); 
 
28	
 
29	    return 0;
 
30	}

