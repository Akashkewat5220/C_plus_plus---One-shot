#include<iostream>
using namespace std;

void change(int arr[])
{
    arr[0] = 7; //pass by reference ho raha hai yaha par;
}

int main()
{
    int arr[3] = {1,2,3};
    for(int i = 0 ; i <= 2 ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    change(arr);
    for(int i = 0 ; i <= 2 ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// paas by vvalue mei copy hota hao
// reference mei address jata hai