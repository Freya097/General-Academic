#include <iostream>
using namespace std;
double division(int a, int b)
{
if( b == 50 )
{
throw "Division by zero condition!";
}
return (a/b);
}
int main ()
{
int x = 0;
int y = 50;
double z = 0;
try {
z = division(x, y);
cout << z << endl;
}catch (const char* msg) {
cerr << msg << endl;
}
return 0;
}
