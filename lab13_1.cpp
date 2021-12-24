#include<iostream>
#include <ctime>
using namespace std;

int fibonacci(int x);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    int y;
    if(x==0)
    cout << 0;
    if(x==1)
    cout << 1;
    if(x>1)
    y = fibonacci(x-1) + fibonacci(x-2);
    
    return y;
}
