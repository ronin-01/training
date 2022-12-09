#include <iostream>

using namespace std;


int main() {
	cout<< " sigma i, i=0 to i=n\n";
	int n;
	cout<<" enter an integer value as n= ";
	cin>>n;
	
	int i=n;
	int sum=0;
	while(i>=1){
	sum=sum+i;
		i--;
	}
	
	cout<<" (sigma i, i=0 to i="<<n<<") is "<<sum;
	
	return 0;
}