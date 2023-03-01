#include <iostream>
using namespace std;

bool hasFailingGrade(double grades[], unsigned int size) {
  if (size == 0) {
    throw invalid_argument("There are no grades.");
  }
  
  bool hasFailing = false;
  for (unsigned int i = 0; i < size; ++i) {
    if (grades[i] < 60) {
      return true;
    }
    else {
      hasFailing = false;
    }
  }
  return hasFailing;
}



int main(){
    double g1[] = {83, 91, 100, 60, 75};
    double g2[] = {100, 100, 55, 100};

    if (!hasFailingGrade(g1, 5)){
        cout << "g1 has no failing grades" << endl;
    }
    if (hasFailingGrade(g1, 5)){
        cout << "g1 has failing grades" << endl;
    }
    if (!hasFailingGrade(g2, 4)){
        cout << "g2 has no failing grades" << endl;
    }
    if (hasFailingGrade(g2, 4)){
        cout << "g2 has failing grades" << endl;
    }
}