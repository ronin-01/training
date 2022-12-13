#include <iostream>

using namespace std;

main() {
	int n;
	cout<<" how many numbers do you want to be sorted? ";
	cin>>n;
	int a[n];
	int i=0;
	int j=0;
	int key=0;
//entering numbers	
	for(i=0;i<n;i++){
		cout<<" a["<<i+1<<"]=";
		cin>>a[i];
		cout<<endl;
	}	
	cout<<" your enterd data\n"<<" a=[ ";
	for(i=0;i<n;i++){
		cout<<a[i];
		if(i<n-1){
			cout<<" ,";
		}
	}
	cout<<"]"<<endl;
	
//Insertion Sort
	for(j=1;j<n;j++){
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]>key){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}	
	
	cout<<" sorted data\n"<<" a=[ ";
	for(i=0;i<n;i++){
		cout<<a[i];
		if(i<n-1){
			cout<<" ,";
		}
	}
	cout<<"]"<<endl;
	return 0;
}