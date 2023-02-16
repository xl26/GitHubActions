#include <iostream>  
using namespace std;  
int main()  
{  
  int n=121,r,sum=0,temp;        
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}
cout << "Checking..."<<endl;    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
} 
