#include <iostream>
 
3	using namespace std;
 
4	
 
5	int main() {
 
6	    // Write C++ code here
 
7	    int n,d,r;
 
8	    
 
9	    cout<<endl<<"enter numinator : ";
 
10	    cin>>n;
 
11	    
 
12	    cout<<endl<<"enter denuminator : ";
 
13	    cin>>d;
 
14	    
 
15	    try
 
16	    {
 
17	        if(d==0)
 
18	        {
 
19	            throw d;
 
20	        }
 
21	        
 
22	        r=n/d;
 
23	        cout<<"result : "<<r<<endl;
 
24	    }
 
25	    
 
26	    catch(int exception)
 
27	    {
 
28	        cout<<"Exception : Division by zero"<<endl;
 
29	    }
 
30	    
 
31	    
 
32	    

  
