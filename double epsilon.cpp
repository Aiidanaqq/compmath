#include <iostream>
using namespace std;

int main() {
    int n=0;
    double epsilon=1.0; 

    while (1.0+epsilon>1.0) {
        n++;
        epsilon=epsilon/10.0;
    }
    cout<<n<<endl;
    return 0;
}
