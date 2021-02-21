/* Write a function which takes an array and prints the majority element (if it exists),
   otherwise prints “No Majority Element”. */
#include <iostream>
void maj_element(int arr[], int n)
{
    int count, max_count = 0, i, j, index = -1;
    for(i = 0; i < n; i++)
    {
        count = 0; 
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > max_count)
        {
            max_count = count;
            index = i;
        }
    }

    if(max_count > n/2)
        std :: cout<<"\nThe majority element : "<<arr[index];
    else
        std :: cout<<"\nThe majority element not found.\n";
}
int main()
{
    int arr[20], size;
    std :: cout<<"Number of elements you want to enter in an array : ";
    std :: cin >> size;
    for(int i = 0; i < size; i++)
    {
        std :: cin>>arr[i];
    }
    maj_element(arr, size);
    return 0;
}