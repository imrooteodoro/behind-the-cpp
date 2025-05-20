#include <iostream>
using namespace std;


int main(){

    int n;

    scanf("%d", &n);
    int fact = 1;
    for(int i=2; i <=n; i++){
        fact*=i;
    }
    cout << fact <<endl;

    return 0;

}

