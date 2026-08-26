#include <cstdio>

using namespace std;

int main() {
  double num1, num2;
  char op;
  while(true) {
    scanf("%lf %lf", &num1, &num2);
    scanf(" %c", &op);
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
        ans = num1 / num2;
        break;
      default:
        continue;
    }
    printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, ans);
  }
  return 0;
}