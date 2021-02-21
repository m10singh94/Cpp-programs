// Find the Number Occurring Odd Number of Times
#include <iostream>
void numOddx(int arr[], int n)
{
    int count, flag = 1;
    for(int i = 0; i< n; i++)
    {
        count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if((count % 2) != 0)
        {
            std :: cout<<"\nNumber with odd number of appearances : "<<arr[i];
            flag = 0;
        }
    }
    if(flag == 1)
        std :: cout<<"No number with odd occurrences found.\n";
}
int main()
{
    int arr[10], size;
    std :: cout<<"Enter the size of the array to be created : ";
    std :: cin>>size;
    for(int i = 0; i < size; i++)
        std :: cin>>arr[i];
    numOddx(arr, size);
    return 0;
}