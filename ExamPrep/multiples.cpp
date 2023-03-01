#include <iostream>
using std::cout, std::cin, std::endl;

// Given positive integers n, k and l, print the first n positive integer numbers that are multiple of k, l or both. 
// Example: n = 6, k = 2 and l = 3, you should print:
// 2 3 4 6 8 9
int main(){
    int n;
    int k;
    int l;
    int count = 0;

    cout << "enter a number for n: " << endl;
    cin >> n;
    cout << "enter a number for k: " << endl;
    cin >> k;
    cout << "enter a number for l: " << endl;
    cin >> l;

    for (int i = 1; i < INT32_MAX; i++){
        if ((i%k == 0) || (i%l == 0)){
            cout << i << " ";
            count += 1;
        }
        if (count == 6){
            break;
        }
    }
    return 0;
}



