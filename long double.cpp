#include <iostream>
using namespace std;

int main() {
    int n=0;
    long double epsilon= 1.0; 

    while (1+epsilon>1) {
        n++;
        epsilon=epsilon/10;
    }
    cout<<n<<endl;
    return 0;
}
