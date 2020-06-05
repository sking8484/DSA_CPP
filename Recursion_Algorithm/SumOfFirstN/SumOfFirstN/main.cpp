//
//  main.cpp
//  SumOfFirstN
//
//  Created by darst king on 5/30/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

// Sum of first N Natural Numbers

int sumFNN(int n){
    if (n==0){
        return 0;
        
    } else {
        return sumFNN(n-1) + n;
    }
}

int main() {
    // insert code here...
    
    int x;
    x = sumFNN(10);
    cout<<x<<endl;
    return 0;
}
