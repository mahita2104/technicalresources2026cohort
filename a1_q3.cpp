#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){ 
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= n ; i++){
            if (n % i == 0){
                count += 1;
	        }
	    }
        if (count == 2){
            cout << "prime\n";
	    }
        else{
            cout << "not prime \n";
        }
      
    }
    return 0;


}
