//
//  main.cpp
//  TaylorSeries
//
//  Created by darst king on 5/30/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

// Taylor Series using recursion and static variables //

double e(int x, int n){
    static double p=1,f=1;
    double r;
    if (n==0){
        return 1;
    } else{
        r = e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    double x;
    x = e(1,20000);
    cout<<x<<endl;
    return 0;
}
