#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;long long int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i < n; i++)
    {
        array[i] = array[i-1] + array[i];
    }
    reverse(array,array+n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    
    
    
    return 0;
}