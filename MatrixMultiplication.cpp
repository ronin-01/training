#include <iostream>

using namespace std;

main() {
	int i, j, k, m, p;
	int a[3][2]={{1,4},{2,3},{5,6}};
	int b[2][3]={{4,5,6},{7,8,9}};
	int s[3][3];
	
	cout<<" a= \n";
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			cout<<"   "<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
	
	cout<<" b= \n";
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cout<<"   "<<b[i][j]<<" ";
		}
		cout<<endl<<endl;;
	}
// as an experience and advice, befor using parameters, give the value 0	
	i=0;
	j=0;
	m=0;
	p=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				p=a[i][k]*b[k][j];
				m=m+p;
			}
			s[i][j]=m;
			m=0;
		
		
		}
		
		
	}
	
	cout<<" s= \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<" "<<s[i][j]<<" ";
		}
		cout<<endl;
	}
}