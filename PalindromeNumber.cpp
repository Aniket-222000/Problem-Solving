#include<iostream>
using namespace std;

int main() {
	
	int n ;
	cin>> n;
	int reverseNum = 0;
	int dup = n;

	while(n>0)
	{
		int lastdigit = n%10;
    reverseNum = (reverseNum*10)+lastdigit;
		n= n/10;
        
	}
	if(dup == reverseNum) cout<<"true";
	else cout<<"false";
	
}
