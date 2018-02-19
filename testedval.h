#include <iostream>
#include <vector>

using namespace std;
class TestedVals
{
int val;
double dval;
bool test;

public:

TestedVals()
{
val = dval= 0;
test = false;
}

void set(int x)
{
val = x;
}

void set(double x)
{
dval = x;
}
int getVal()
{
return val;
}
double getDval()
{
return dval;}

double addition(double a,double b)
{
double valu = (a+b);
return valu;
}
double subtraction(double a, double b)
{
double valu = a-b;
return valu;}

double testx()
{
cout << 56.00 <<endl;
double valu= 5.6;
return valu;}

void addVectVals(vector<int>& array)
{

test = true;
int x;
if (test){
while (test){
cout<< "enter -1 if you want to end this loop" <<endl;
cout << "val:" << endl;
cin >> x;
if(x != -1){
array.push_back(x);
}
else 
test = false;
}
}
}


void dispVect(vector<int>& array)
{
cout << endl;
for(int i = 0; i < array.size(); i++)
{
cout << array[i] << endl;
}
}

};
