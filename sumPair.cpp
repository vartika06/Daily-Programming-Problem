#include <bits/stdc++.h>
#include <vector>


using namespace std;

//Given a list of numbers and a number k, return count of pairs that add upto k;
//method used - map;

int countOfPairs(vector<int>& A, int sum)
{
    unordered_map<int, int> m;
    for(int i = 0; i<A.size(); i++)
        m[A[i]]++;
    int twice_count = 0;
    for(int i = 0; i<A.size(); i++)
    {
        twice_count += m[sum-A[i]];

        if(sum-A[i]==A[i]) twice_count--;
    }

    return twice_count/2;

}

int main()
{
    vector<int> arr = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
    int count1 = countOfPairs(arr,11); //k = 11;
    cout<<count1<<endl;


}
