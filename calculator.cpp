#include <cstdio>
#include <stdexcept>

using namespace std;

bool is_valid_op(char op) {
  return op == '*' || op == '/' || op == '+' || op == '-';
}

double safe_divide(double num1, double num2) {
  if(num2 == 0) {
    throw invalid_argument("Division by zero error!");
  }
  return num1 / num2;
}

int main() {
  double num1, num2;
  char op;
  while(true) {
    printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
    int val_op = scanf(" %c", &op);
    if(val_op == 1 && op == 'q') {
      printf("Exiting calculator program...\n");
      break;
    }
    if(val_op != 1 || !is_valid_op(op)) {
      printf("Invalid operator! Allowed operators are +, -, *, / or the letter q if you intend to exit\n\n");
      while(getchar() != '\n'); 
      continue;
    }
    
    printf("Enter two numbers separated by a space: ");
    int val_nums = scanf("%lf %lf", &num1, &num2);
    if(val_nums != 2) {
      printf("Invalid number arguments! please enter two numbers seperated by a space\n\n");
      while(getchar() != '\n'); 
      continue;
    }
    
    double ans;
    switch(op) {
      case '+':
        ans = num1 + num2;
        break;
      case '-':
        ans = num1 - num2;
        break;
      case '*':
        ans = num1 * num2;
        break;
      case '/':
        try {
          ans = safe_divide(num1, num2);
        } catch(const invalid_argument& e) {
          fprintf(stderr, "Division by zero error! please try again\n\n");
          continue;
        }
        break;
    }
    
    printf("%.2lf %c %.2lf = %.2lf\n\n", num1, op, num2, ans);
  }
  return 0;
}