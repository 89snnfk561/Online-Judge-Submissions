#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){
	double a;
	double x, y, z;
	cin >> a;
	x = a*a - 4*(a*a*2.0*acos(0.0)/12 - (a*a*2.0*acos(0.0)/6 - a*a*sqrt(3.0)/4.0));
	y = 4*(a*a*2.0*acos(0.0)/4 - a*a/2) - 2*x;
	z = a*a - x - y;
	cout << fixed << setprecision(3) << x <<" "<< y <<" "<< z << endl;
}
