//
//  main.cpp
//  Nested Recursion
//
//  Created by darst king on 5/30/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

int fun(int n){
    if (n>100){
        cout<<"Function Called with value: "<<n<<endl;
        return n-10;
    } else {
        cout<<"Function Called with value: "<<n<<endl;
        return fun(fun(n+11));
    }
}

int main(int argc, const char * argv[]) {
    int x;
    x=fun(95);
    cout<<x;
    return 0;
}
