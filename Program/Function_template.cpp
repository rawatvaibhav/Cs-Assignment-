#include<iostream>
 
2	using namespace std;
 
3	
 
4	template <class T1>
 
5	
 
6	void fun(T1 val)
 
7	{
 
8	    cout<<"Result : "<<val<<endl;
 
9	}
 
10	
 
11	int main()
 
12	{
 
13	    
 
14	    fun('C');   //for character
 
15	    fun("C++"); //for string
 
16	    fun(56);    //for integer
 
17	    fun(89.9);  //for float
 
18	    
 
