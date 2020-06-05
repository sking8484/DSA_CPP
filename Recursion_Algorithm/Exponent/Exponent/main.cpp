//
//  main.cpp
//  Exponent
//
//  Created by darst king on 5/30/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

double exponent(int base, int exp){
    if (exp==0){
        return 1;
        
    } else {
        return exponent(base,exp-1)*base;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    double x;
    
    x=exponent(9,3);
    cout<<x<<endl;
    return 0;
}
