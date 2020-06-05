//
//  main.cpp
//  treeRecursion
//
//  Created by darst king on 5/30/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

//tree recursion

int recurse(int n){
    if (n>0){
        cout<<n<<endl;
        recurse(n-1);
        recurse(n-1);
    }
    
    
    return 0;
}

int main() {
    // insert code here...
    
    recurse(3);
    
    
    return 0;
}
