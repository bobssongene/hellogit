#include "testedval.h"

using namespace std;

int main()
{
TestedVals obj;

obj.set(8);
obj.set(16.54);

obj.addition(50,65);// checking the function to see if it works 
obj.subtraction(8465,6560);
cout << endl;
obj.addition(obj.getVal(), obj.getDval());
obj.subtraction(obj.getVal(), obj.getDval());
return 0;
}
