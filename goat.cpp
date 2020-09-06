#include<iostream>
using namespace std;
 long long int n = 0, sum = 0;
int main()
{
    struct goo{
       long long int  a[2] = { 0,0 };
};
    goo b;
    cout << "ENTER NUMBER : " ;
    cin >> b.a[0];
    while (b.a[0] > 0 || b.a[1] > 9)
    {
        
        if (b.a[0] == 0)
        {
            cout << "SUMMARY : " << b.a[1] << endl;
            b.a[0] = b.a[1];
            b.a[1] = 0;

        }
        b.a[1] += b.a[0] % 10;
        b.a[0] /= 10;
        
    }
    cout << "SUMMARY : " << b.a[1] << endl;
    
}