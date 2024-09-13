#include <iostream>
using namespace std;

int main() {
    int n=0;
    double Infinity = 1.0; 

    while (2.0*Infinity>Infinity) {
        n++;
        Infinity=Infinity*10.0;
    }
    cout<<n<<endl;
    return 0;
}
