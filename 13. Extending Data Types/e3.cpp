#include <iostream>

using namespace std;

int main()
{
    float f=1.00;
    short int i=100;
    long int l=500L;
    double d=15.00;

    cout << "int " << sizeof(int) << endl;
    cout << "float " << sizeof(float) << endl;
    cout << "double " << sizeof(double) << endl;
    cout << "long int " << sizeof(long int) << endl;
    cout << endl;

    cout << f+i << " " << sizeof(f+i) << endl;
    cout << l/d << " " << sizeof(l/d) << endl;
    cout << i/l+f << " " << sizeof(i/l+f) << endl;
    cout << l*i << " " << sizeof(l*i) << endl;
    cout << f/2 << " " << sizeof(f/2) << endl;
    cout << i/(d+f) << " " << sizeof(i/(d+f)) << endl;
    cout << l/(i*2.0) << " " << sizeof(l/(i*2.0)) << endl;
    cout << l+i/(double)l << " " << sizeof(l+i/(double)l) <<endl;

    return 0;
}
