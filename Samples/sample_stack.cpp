#include "Stack.h"
#include "Formula.h"
#include <iostream>
#include <string>

int main()
{
  string expr = { "((a+b)*c)*(a-d/e)+a" };
  TArithmeticExpression ex1(expr);

  map<string, double> op;
  op.emplace("a", 2.0);
  op.emplace("b", 4.0);
  op.emplace("c", 7.0);
  op.emplace("d", 6.0);
  op.emplace("e", 5.0);

  double res = ex1.Calculate(op);
  
  cout << "Infix:\t" << ex1.GetInfix() << endl;
  cout << "Postfix:   " << ex1.GetPostfix() << endl;
  cout << "Calculate:  " << res << endl;

  cout << endl << "======================================\n";
  return 0;
}