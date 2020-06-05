//
//  main.cpp
//  ArrayADT
//
//  Created by darst king on 6/2/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;
class Array {
private:
    
    //int size; dont need this anymore
    int length;
    int *A;
    
public:
    
    
    // Initialize the array
    Array(int length = 0){
        //int n;
        //this->size = size; Don't need this anymore
        this->length = length;
        //cout<<"Array of size "<<size<<" initiated"<<endl;
    }
    
    
    //Set Array
    void setArray(int *p){
        A=p;
    }
    
    int len(){
        return this->length;
    }
    
    //Getters and Setters
    
    //Get value in position "INDEX"
    int get(int index){
        if (index>=0 && index < length){
            return A[index];
        } return -1;
    }
    
    //Set value in position "INDEX" with value "VALUE"
    void set(int index, int value){
        if (index>=0 && index < length){
            A[index] = value;
        }
    }
    
    // Find max of an unsorted array
    int maxUnsorted(){
        int max = A[0];
        for (int i=1;i<length;i++){
            if (A[i] > max){
                max = A[i];
            }
        } return max;
    }
    
    // Find min of an unsorted array
    int minUnsorted(){
        int min = A[0];
        for (int i=0;i<length;i++){
            if (A[i]<min){
                min = A[i];
            }
        } return min;
    }
    
    // Find Sum of Array
    
    int sum(){
        int sum=0;
        for (int i=0;i<length;i++){
            sum+=A[i];
        } return sum;
    }
    
    // Find Average
    int avg(){
        int Sum;
        Sum = sum();
        return Sum/length;
    }
    
    // Display the array
    void display(){
        for (int i=0; i<this->length;i++){
            cout<<A[i]<<endl;
        }
    }
    
    //Append to the array
    void append(int x){
        A[length]=x;
        length++;
    }
    
    //Instert value x at position index in array
    void insert(int x,int index){
        //Move elements forward one position
        for (int i=length; i>index; i--){
            A[i] = A[i-1];
        }
        // Insert the new value x in index
        A[index]=x;
        length++;
    }
    
    // Delete element index from the array
    void del(int index){
        for (int i=index; i<length-1;i++){
            A[i]=A[i+1];
        }
        length--;
    }
    
    // Linear Search Algo
    int searchLin(int key){
        for (int i=0;i<length;i++){
            if (key == A[i]){
                return i;
            }
        }
        return -1;
    }
    
    // Binary Search Algo
    int searchBin(int key){
        int low=0, high = this->length,mid;
        
        
        while (low<=high){
            mid = (low+high)/2;
            if (key == A[mid]){
                return mid;
            } else if (key >A[mid]){
                low = mid+1;
            } else if (key < A[mid]){
                high = mid-1;
            }
        } return -1;
    }
        
    
    
    
};


int main(int argc, const char * argv[]) {
    
    
    int i,len=0;
    int ary[] = {1,2,3,4,5,6,7,8,9,10};
    
    for (int b : ary){
        len++;
    }
    
    Array X(len);
    X.setArray(ary);
    X.display();
    i=X.searchBin(4);
    cout<<i<<endl;
    cout<<X.avg();
    cout<<endl;
    cout<<X.get(3)<<endl;
    cout<<X.sum()<<endl;
    cout<<X.len()<<endl;
    
    
    return 0;
}
