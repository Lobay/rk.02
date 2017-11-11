#include<iostream>
using namespace std;
int main()
{
    int i;
    int k; 
    int z;
    cin >> k;
    if (k <= 0){
        return 0;
    }
    int a[k];
    for (i = 0; i < k; i++) {
        cin >> a[i];
    }
    cin >> z;
    int b[z - 1], c[k - z - 1];
    for (i = 0; i < z; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < k - z; i++) {
        c[i] = a[i + z];
    }
    for (i = 0; i < k - z; i++) {
        cout << c[i] << " ";
    }
    for (i = 0; i < z; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
