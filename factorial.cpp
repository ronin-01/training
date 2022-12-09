#include <iostream>
using namespace std;
//R.Abbasi

main() {
	int n;
	int i=1;
	int fact=1;
	cout<<" Hello! i will calculate factorial of any given number,\n"<<" i sould mention that i work just for numbers less than 13\n";
	cout<<" can you guess why?\n"<<" factorial for numbers greater than 13 is more than 32 bytes\n"<<" i can't show them correctly!\n";
	cout<<endl; 
	
	cout<<" enter an intiger value as n= ";
	cin>>n;
	
	if (n<0){
		cout<<"i can't calculate factorial for this value";
	}
	
	if (n==0){
		cout<<" fact("<<n<<")=1 ";
	}
		
	if (n==1){
		cout<<" fact("<<n<<")=1 ";
	}
	
	else {
	while(i<=n){
		fact=fact*i;
		i++;
	}
	cout<< " fact("<<n<<")="<<fact;
	}	
	return 0;
}