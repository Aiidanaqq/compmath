#include <iostream>
using namespace std;

int main() {
    int n=0;
    float zero = 1.0; 

    while (2.0*zero>zero) {
        n++;
        zero=zero/10.0;
    }
    cout<<n<<endl;
    return 0;
}
