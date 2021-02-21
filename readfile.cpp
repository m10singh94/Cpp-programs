// to read a file
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
int main()
{
    std :: ifstream file("First.txt");
    std :: vector <std :: string> names;
    std :: string input;
    while(file>>input)
        names.push_back(input);
    for(std :: string NAME : names)
        std :: cout<<NAME<<std :: endl;
    file.close();
    return 0; 
}