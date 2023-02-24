#include <stdexcept>

int Largest(int a, int b, int c) {
  int d = INT32_MIN;
  if (a > d) {
    d = a;
  } if (b > d) {
    d = b;
  } if (c > d) {
    d = c;
  }
  return d;
}

bool SumIsEven(int a, int b) {
  if((a + b) % 2 == 0){
    return true;
  }
  return false;
}

int BoxesNeeded(int apples) {

  if (apples <= 0){
    return 0;
  } if (apples % 20 == 0){
    return apples / 20;
  }
  return apples/20 + 1;

  // int boxes = 0;
  // if (apples > 0){
  //   boxes = apples / 20;
  //   if (apples % 20 !=0){
  //     boxes += 1;
  //   }
  // }
  // return boxes;
}

bool SmarterSection(int A_correct, int A_total, int B_correct, int B_total) {
  // needs to throw invalid arg

  if ((A_correct < 0) || (A_total <= 0) || (B_correct < 0) || (B_total <= 0) || (A_correct > A_total) || (B_correct > B_total)){
    throw std::invalid_argument("Invalid");
  }

  double correctA = A_correct;
  double totalA = A_total;
  double correctB = B_correct;
  double totalB = B_total;

  return (correctA/totalA) > (correctB/totalB);

  // if (A_correct/A_total >= B_correct/B_total){
  //   return true;
  // }
  // return false;
}


bool GoodDinner(int pizzas, bool is_weekend) {
  if (pizzas >= 10 && pizzas <= 20) {
    return true;
  }
  if (is_weekend && pizzas >= 10) {
    return true;
  }
  return false;
}

int SumBetween(int low, int high) {
  if (low > high){
    throw std::invalid_argument("Low > High");
  } 
  if (low == INT32_MIN && high == INT32_MAX){
    return INT32_MIN;
  }

  int value = 0;
  for (int n = low; n < high + 1; n++) {
    value += n;
  }
  if (value > INT32_MAX || value < INT32_MIN){
    throw std::overflow_error("Overflow");
  }
  return value;
}

int Product(int a, int b) {
  if (a > 0 && b > 0 && a > INT32_MAX / b){
    throw std::overflow_error("Overflow");
  } else if (a > 0 && b < 0 && a > INT32_MIN / b){
    throw std::overflow_error("Overflow");
  } else if (a < 0 && b > 0 && a < INT32_MIN / b){
    throw std::overflow_error("Overflow");
  } else if (a < 0 && b < 0 && a < INT32_MAX / b){
    throw std::overflow_error("Overflow");
  }
  return a * b;
}