//Given an array A[] and a number x, check for pair in A[] with sum as x

#include <iostream>

void read_arr(int arr[], int size)
{
    std :: cout<<"Enter the elements of the array:\n";
    for(int i = 0; i < size; i++)
        std :: cin>>arr[i];
}
void arr_sort(int arr[], int size)
{
    int i, j, temp;
    for(i = 0; i < size-1; i++)
        for(j = 0; j < size - i -1; j++)
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}
void print_arr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        std :: cout<<arr[i]<<'\t';
}
int main()
{
    int arr[10], sum, size, fr, rr, count = 0;
    std :: cout<<"Enter the number of elements you want to put in a array : ";
    std :: cin>>size;
    read_arr(arr, size);
    arr_sort(arr, size);
    std :: cout<<"Enter the sum to be found : ";
    std :: cin>>sum;
    for(fr = 0, rr = size -1; rr > fr; )
    {
        if((arr[fr] + arr[rr]) > sum)
            rr--;
        else if((arr[fr] + arr[rr]) < sum)
                fr++;
            else if((arr[fr] + arr[rr]) == sum)
                {
                    count++;
                    std :: cout<<"\n"<<arr[fr]<<"\t"<<arr[rr];
                    fr++;
                    rr--;
                }
    }
    std :: cout<<"\nThere were total "<<count<<(count == 1 ? " combinations found\n" : " combination found\n");
    return 0;
}