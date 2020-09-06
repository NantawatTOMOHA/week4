#include <iostream>
using namespace std;
struct Butterfly{
	int a[8];
};
main(){
	struct Butterfly b;
	cout << "Enter number : ";
    cin >> b.a[0];//row
    b.a[1]=0;//num
    
    b.a[3]=1;//q
    b.a[4]=0;//l
    for(int i = 1; i <= b.a[0]; ++i)
    {
        for(int j = 2; j <= i; ++j)
        {
            cout << "* ";
        }
        b.a[1]=((2*b.a[0])-(2*i));
        for(int j=1;j<=(b.a[1]+1);j++)
        {
        	cout<<"  ";
		}
		 for(int j = 2; j <= i; ++j)
        {
            cout << "* ";
        }
        
        
        	
		
        cout << endl;
    }
    while(b.a[4]!=((2*b.a[0])-1)){
    	cout<<"* ";
    	++b.a[4];
	}
	cout<<endl;
    for(int i = b.a[0]; i >= 1; --i)
    {  
        for(int j = 2; j <= i; ++j)
        {
            cout << "* ";
        }
       b.a[2]=1;
        while(b.a[2]!=(2*(b.a[3]))){
        	cout << "  ";
        	b.a[2]=	b.a[2]+1;
		}
		 for(int j = 2; j <= (i); ++j)
        {
            cout << "* ";
        }
        cout<<endl;
        ++b.a[3];
    }
    return 0;
}
