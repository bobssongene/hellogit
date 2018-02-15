#include <iostream>
#include <vector>

using namespace std;
class TestedVals
{
int val;
double dval;
bool test;

public:
vector <int> array;
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

double addition(auto a,auto b)
{
return (a+b);
}
double subtraction(auto a, auto b)
{
return (a-b);}



void addVectVals()
{

test = true;
int x;
if (test){
while (test){
cout<< "enter n if you want to end this loop" <<endl;
cout << "val:" << endl;
cin >> x;
if(x != 'n'){
array.push_back(x);
}
else 
test = false;
}
}
}


void dispVect()
{
for(int i; i < array.size(); i++)
{
cout << array[i] << endl;
}
}

};
