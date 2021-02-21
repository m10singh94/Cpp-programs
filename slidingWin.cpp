// Sliding Window Maximum (Maximum of all subarrays of size k) using stack
#include <iostream>
int max(int arr[], int j, int k)
{
    int MAX = 0;
    for(int r = j; r < j+k; r++)
    {
        if(arr[r] > MAX)
            MAX = arr[r];
    }
    return MAX;
}
void slidingWin(int arr[], int n, int k)
{
    if( k == 1)
    {
        for(int i = 0; i < n; i++)
            std :: cout<<arr[i];
    }
    else
    {
        for(int j = 0; j <= n-k; j++)
            std :: cout<<max(arr, j, k);
    }
}
int main()
{
    int arr[20], n, k;
    std :: cout<<"Enter the number you want to enter in the array : ";
    std :: cin>>n;
    std :: cout<<"Enter the elements\n";
    for(int i = 0; i < n; i++)
        std :: cin>>arr[i];
    std :: cout<<"\nNumber of elements that will comprise a substring : ";
    std :: cin>>k;
    slidingWin(arr, n, k);
    //std :: cout<<max(arr, 5, k);
    return 0;
}
