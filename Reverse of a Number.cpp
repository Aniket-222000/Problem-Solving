#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n ;
	cin>> n;
	int reverseNum = 0;

	while(n>0)
	{
		int lastdigit = n%10;
        reverseNum = (reverseNum*10)+lastdigit;
		n= n/10;
        
	}
	cout<<reverseNum<<endl;

}
