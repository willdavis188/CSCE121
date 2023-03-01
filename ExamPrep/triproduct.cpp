#include <iostream>
using namespace std;

// A positive integer number n is triproduct if it can be obtained by the product of three consecutive positive integers. 
// For example, 120 is triproduct, since 4 * 5 * 6 = 120. Given n > 0, determine if n is triproduct.

int main(){
    unsigned int n;

    cout << "enter a number for n:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++){
        if ((i)*(i+1)*(i+2) == n){
            cout << i << " * " << i+1 << " * " << i+2 << " = " << n;
        }
    }
    return 0;
}
