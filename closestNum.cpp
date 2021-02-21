// Find k closest numbers in an unsorted array
#include <iostream>
#include <cmath>
void sort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n-1; i++)
        for(j = 0; j < n - i -1; j++)
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}
int cross_over(int arr[], int n , int x)
{
    int i;
    for(i = 0; arr[i] <= x; i++);
    return i-1;
}
void cloNumber(int arr[], int n, int x, int k)
{
    int l = cross_over(arr, n, x);
    int r = l + 1;
    int count = 0;
    if(arr[l] == x)
    {
        std :: cout<<arr[l--];
        count++;
    }
    while((l >= 0) && (r < n) && (count < k))
    {
        if(abs(x - arr[l]) < abs(arr[r] - x))
        {
            std :: cout<<arr[l--]<<"\t";
            count++;
        }
        else
        {
            std :: cout<<arr[r++]<<"\t"; 
            count++;
        }         
    }
    while((count < k) && (l >= 0)) // if the elements on right are over
    {
        std :: cout<<arr[l--]<<"\t";
        count++;
    }
    while((count < k) && (r < n)) // if the elements on the left are over
    {   
        std :: cout<<arr[r++]<<"\t";
        count++;
    }
}
int main()
{
    int arr[20], n, x, k;
    std :: cout<<"Enter the size of the array : ";
    std :: cin>>n;
    for(int i = 0; i < n; i++)
        std :: cin>>arr[i];
    std :: cout<<"Enter the value of x : ";// x = number whose nearby values have to be found
    std :: cin>>x;
    std :: cout<<"Enter the value of k : ";//k = number of nearby value to be found
    std :: cin>>k;
    sort(arr, n);
    cloNumber(arr, n,x, k);
    return 0;
}