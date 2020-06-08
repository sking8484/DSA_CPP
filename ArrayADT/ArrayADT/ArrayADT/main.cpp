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
    
    // !!!!! Reversing and shifting !!!!! //
    
    // Reversing Array
    
    void reverse(){
        int B[length];
        
        for (int i=length-1,j=0;i>=0;i--,j++){
            B[j] = A[i];
        }
        for (int i=0;i<length;i++){
            A[i] = B[i];
        }
    }
    
    // Left shift
    
    void leftShift(){
        for (int i=0;i<length;i++){
            if (i+1 == length){
                A[i] = 0;
            } else {
                A[i] = A[i+1];
            }
        }
    }
    
    
    
    void leftRotation(){
        int first = A[0];
        for (int i=0;i<length;i++){
            if (i+1 == length){
                A[i] = first;
            } else {
                A[i] = A[i+1];
            }
        }
    }
    
    void rotationLoop(int n){
        while (n>0){
            leftRotation();
            display();
            cout<<endl;
            n--;
        }
    }
    
    // Right Movements
    
    void rightShift(){
        for (int i=length-1;i>=0;i--){
            if (i == 0){
                A[i] =0;
            } else {
                A[i] = A[i-1];
            }
        }
    }
    
    void rightRotation(){
        int last = A[length-1];
        for (int i=length-1;i>=0;i--){
            if (i==0){
                A[i] = last;
            } else {
                A[i] = A[i-1];
            }
        }
    }
    
    
    // Sorted Insert
    
    void insertSorted(int x){
        
        int i = length -1;
        while (A[i] > x){
            A[i+1] = A[i];
            i--;
        } A[i+1] = x;
    }
    
    bool isSorted(){
        for (int i=0;i<length-1;i++){
            if (A[i+1]<A[i]){
                return false;
            }
        } return true;
    }
    
    void moveSigns(){
        int i=0,j=length-1;
        int neg,pos;
        while (i<j){
            while (A[i] < 0){
                i++;
            } while (A[j] > 0){
                j--;
            } if (i<j){
                neg = A[j];
                pos = A[i];
                A[i] = neg;
                A[j] = pos;
            }
        }
    }
    
    // !!!!! Merging !!!!! //
    
    Array merge(Array B){
        int m = this->length;
        int n = B.len();
        int *C = new int[m+n];
        
        int i=0,j=0,k=0;
        while (i<m && j<n){
            if(A[i]< B.get(j)){
                C[k++] = A[i++];
            } else {
                C[k++] = B.get(j++);
            }
        } for (; i<m;i++){
            C[k++] = A[i];
        } for (; j<n;j++){
            C[k++] = B.get(j);
        } Array D(m+n);
        D.setArray(C);
        return D;
        
    }
    
    // !!!!! Searching !!!!!
    
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
    
    int s;
    int i,len1=0,len2=0;
    int arr1[] = {1,3,5,7};
    int arr2[] = {2,4,6,8};
    
    for (int b : arr1){
        len1++;
    }
    for (int b : arr2){
        len2++;
    }
    Array Z;
    
    Array X(len1);
    Array Y(len2);
    X.setArray(arr1);
    Y.setArray(arr2);
    
    
    Z = X.merge(Y);
    Z.display();
    cout<<endl;
    X.display();
    return 0;
}
