#include <iostream>
using namespace std;

int main(){
    int arr[50],n,i;
    cout << "Ingresa el tamaño del arreglosssssss" << endl;
    cin>>n;
    cout << "Ingresa los elementos del arreglo" << endl;

    for (size_t i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    cout << "Los elementos son: " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}