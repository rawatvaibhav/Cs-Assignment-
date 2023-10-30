#include<iostream>
 
2	using namespace std;
 
3	
 
4	template <class T1>
 
5	class temp{
 
6	    
 
7	    public:
 
8	        T1 value;
 
9	        
 
10	        temp(T1 val)
 
11	        {
 
12	            value=val;
 
13	            cout<<"Result : "<<val<<endl;
 
14	        }
 
15	};
 
16	
 
17	int main()
 
18	{
 
19	    temp <char> t('C');    // for character
 
20	    temp <string> u("C++"); // for string
 
21	    temp <int> v(58);   //for integer
 
22	    temp <float> w(98.9);  //for float
 
23	    

  
