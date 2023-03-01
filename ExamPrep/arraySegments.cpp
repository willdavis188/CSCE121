#include <iostream>
using namespace std;

int main(){
    const int n = 11;
    int array[n];
    int segments = 1;

    cout << "enter the number sequence:" << endl;

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for (int i = 1; i < n; i++){
        if (array[i] != array[i-1]){
            segments += 1;
        }
    }

    cout << "the array has " << segments << " segments" << endl;

    return 0;
}