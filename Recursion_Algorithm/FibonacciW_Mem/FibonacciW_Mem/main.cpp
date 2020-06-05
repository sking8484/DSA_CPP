//
//  main.cpp
//  FibonacciW_Mem
//
//  Created by darst king on 6/1/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;


int F[10];

int fib(int n){
    if (n<=1){
        F[n]=n;
        return n;
    } else {
        if(F[n-2]==-1){
            F[n-2]=fib(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fib(n-1);
        }
        return F[n-2] + F[n-1];
    }
}

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    for (int i =0;i<10;i++){
        F[i]=-1;
    }
    
    int x;
    
    x = fib(9);
    return 0;
}
