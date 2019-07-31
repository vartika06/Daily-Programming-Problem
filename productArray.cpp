#include <bits/stdc++.h>
#include <vector>


using namespace std;

//Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
//Can't use division;



vector<int> productArr(vector<int>& A)
{
    vector<int> product(A.size());
    int temp = 1, prod;
    //left side
    for(int i = 0; i<A.size(); i++)
    {
        product[i] = temp;
        temp *= A[i];
    }
    //right side
    temp = 1;
    for(int i = A.size()-1; i>=0; i--)
    {
        product[i] *= temp;
        temp *= A[i];
    }

    return product;
}

int main()
{
    vector<int> A = {1,2,3,4,5};
    A = productArr(A);
    for(int i = 0; i<A.size(); i++)
        cout<<A[i]<<endl;

}
