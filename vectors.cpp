// using vectors
#include <iostream>
#include <vector>
int main()
{
    std :: vector<int> items = {1, 2, 3};
    items.push_back(100);
    std :: cout<<items[2]<<"\t"<<items[3]<<std :: endl;
    items.pop_back();
    std :: cout<<"\n"<<items.size()<<std :: endl;    
    return 0;
}