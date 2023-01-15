#include<iostream>
using namespace std;
int main(int argc, char** agrc)
{
    for(int i=5;i>0;i--){
        if(i==4||i==3||i==2){
            for(int j=1;j<=i;j++){
                if(j!=i){
                    cout<<" ";

                }
                else{
                    cout<<"*";
                }
                
            }
        }
        else{
            for(int j=0;j<5;j++){
            cout<<"*";
            }
        }
        
            
        cout<<"\n";
    }
    return 0;

}
