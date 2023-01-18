#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int m=0;
    int l=n;
    int c=0;
    while(l>0){
        l=l/10;
        c+=1;
    }
    double p;
    while(n>0){
        c=c-1;
        int k=n%10;

        n=n/10;
        p=pow(10.0,1.0*c);
        
        m=m+k*p;
    }
    cout<<"\nthe reversed number is:"<<m;
    return 0;
    
}
