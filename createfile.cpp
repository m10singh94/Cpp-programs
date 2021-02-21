// to create and write to a file
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
int main()
{
    std :: ofstream file ("First.txt");
    file<<"Hi everyone\n";
    std :: vector <std :: string> input_name;
    input_name.push_back("Maitreyi");
    input_name.push_back("Shashwat");
    input_name.push_back("Namita");
    input_name.push_back("Shivadhar");
    for(std :: string names : input_name)
        file<<names<<std :: endl;
    file.close();
    return 0;
}