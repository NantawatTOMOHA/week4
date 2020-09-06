#include<iostream>
using namespace std;
struct num {
	int a[3];	
};
int sum;
int main(){
	num N;
	cout<<"Enter number :";
	cin>>N.a[0];

    while(N.a[0]!=0.0){
	
    N.a[1]=(N.a[0]%10);
    
    N.a[0]=N.a[0]/10;
    
	sum=sum+N.a[1];
	 }
	
	cout<<"summary : "<<sum<<endl;
return 0;
}
