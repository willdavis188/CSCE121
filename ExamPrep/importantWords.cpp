#include <iostream>
using namespace std;

int moreImportant(string s1, string s2){
    
}

int main(){

    if (moreImportant("eel", "the") == 1){
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }
    // returns 1.

    if (moreImportant("the", "eel") == 1){
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }
    // returns 2.

    if (moreImportant("angelic", "mistrust") == 1){
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }
    // returns 2.

    if (moreImportant("spy", "il") == 1){
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }
    // returns 1.

    if (moreImportant("ill", "spy") == 1){
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }
    // returns 2.

    if (moreImportant("trust", "silly") == 1){
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }
    // returns 2.

    if (moreImportant("see", "sea") == 1){
        cout << "1" << endl;
    } else {
        cout << "2" << endl;
    }
    // returns 1.


}