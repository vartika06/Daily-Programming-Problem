#include <bits/stdc++.h>

using namespace std;

/* Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place. */

int firstPositive(vector<int> &A)
{
    int j = 0;
    int count1 = 1;

    for(int i = 0; i<A.size(); i++)
    {
        if(A[i]<0)
        {
            swap(A[i],A[j]);
            j++;
        }

    }

    //cout<<j<<endl;

    for(int i = j; i<A.size(); i++)
    {
        if(abs(A[i])-1<A.size() && A[abs(A[i])-1]>0)
        {
        A[abs(A[i])-1] = -1*A[abs(A[i])-1];
        //cout<<-A[abs(A[i])-1]<<endl;

        }
    }

    for(int i = 0; i<A.size(); i++)
    {
        if(A[i]>0)
            return i+1;
    }

    return A.size()+1;
}

int main()
{
    vector<int> A = {1,3,2};
    int num = firstPositive(A);
    cout<<num;

}
