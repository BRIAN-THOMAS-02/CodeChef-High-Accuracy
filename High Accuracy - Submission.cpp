High Accuracy - "https://www.codechef.com/submit/ACCURACY"
SUBMISSION

#include <iostream>
using namespace std;

int main() 
{
	int a,b,c,d;
	int t;
	
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    
	    if(a%3 == 0 || a == 0)
	        cout<<"\n0";
	        
        else
        {
            while(a > 0)
                a = a - 3;

        cout<<"\n"<<abs(a);
        }
	}
	
	
	return 0;
}
