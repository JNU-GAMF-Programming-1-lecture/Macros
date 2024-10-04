/*
 * Macros.cpp
 * 
 * Different macro types and their usage.
 */

#include <iostream>
using namespace std;

#define PI 3.1415926
#define D2R(d) ((d)/180.0*PI)
#define R2D(r) ((r)/PI*180)
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define BADSUM(a,b) (a+b)

int main()
{
	cout << PI << endl;
	cout << "Enter angle in degrees: ";
	double degr;
	cin >> degr;
	cout << "Angle in radians: " << D2R(degr) << endl;
	cout << "Enter angle in radians: ";
	double rad;
	cin >> rad;
	cout << "Angle in degrees: " << R2D(rad) << endl;
	cout << "Enter two integer numbers separated by a space: ";
	int x, y;
	cin >> x >> y;
	cout << "The smaller number is: " << MIN(x, y) << endl;
	cout << "The bigger number is: " << MAX(x, y) << endl;
	x = 2, y = 3;
	cout << "10*BADSUM(x,y)= " << 10 * BADSUM(x, y) << endl;
	return 0;
}