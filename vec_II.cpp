// to create a vector, take entries from user amd then display it
// using the range based loop
#include <iostream>
#include <vector>
#include <string>
int main()
{
    int n;
    std :: cout<<"Enter the number of entries you want to make : ";
    std :: cin>>n;
    std :: vector <std :: string> String;
    std :: string input;
    for(int i = 0; i < n; i++)
    {
        getline(std :: cin, input);
        String.push_back(input);
    }
    std :: cout<<"\nYou Entered :\n";
    for(std :: string  output : String)
        std :: cout<<output<<"\n";
    return 0;
}