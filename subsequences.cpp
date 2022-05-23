#include<bits/stdc++.h>
using namespace std;

void printF(int index, vector<int> &v,int arr[],int n)
{
    if(index >= n)
    {
        for(auto it : v)
        {
            cout<<it<<" ";
        }
        if(v.size()==0)
        {
            cout<<"{ }";
        }

        cout<<endl;
        return;
    }

    // to take or pick the value

    v.push_back(arr[index]);
    printF(index+1,v,arr,n);
    v.pop_back();

    // not take or not include in subsequences

    printF(index+1, v, arr,n);
}

int main()
{
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> v;
    printF(0,v,arr,n);
}