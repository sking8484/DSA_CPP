//
//  main.cpp
//  Factorial
//
//  Created by darst king on 5/30/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>

int factorial(int n){
    if (n==0){
        return 1;
    } else {
        return factorial(n-1)*n;
    }
}


int main() {
    
    int x;
    x= factorial(10);
    std::cout<<x<<std::endl;
    
    return 0;
}
