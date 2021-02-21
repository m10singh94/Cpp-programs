// creating a class and accessing it by vector
#include <iostream>
#include <vector>
#include <string>

class user
{
    int userID;
    public :
        std :: string first_name;
        std :: string last_name;
        void readID()
        {
            std :: cin>>userID;
        }
};
int add_if_doesnt_exist(std :: vector<user> &candidate, user new_candidate)
{
    for(int i = 0; i < candidate.size(); i++)
    {
        if((candidate[i].first_name == new_candidate.first_name) && (candidate[i].last_name == new_candidate.last_name))
        {    
            std :: cout<<"already exists\n";
            return i;
        }
    }
    candidate.push_back(new_candidate);
    return (candidate.size()-1);
}
int main()
{
    int count;
    std :: vector<user> candidate;
    user new_candidate, entry;
    std :: cout<<"Enter the number of elements to be added : ";
    std :: cin>>count;
    for(int i = 0; i < count; i++)
    {    
        std :: cout<<"Enter the UserID : ";
        entry.readID();
        std :: cout<<"Enter the First Name : ";
        std :: cin>>entry.first_name;
        std :: cout<<"Enter the Last Name : ";
        std :: cin>>entry.last_name;
        candidate.push_back(entry);
    }
    std :: cout<<"\n\nEnter the entries of new candidate :";
    std :: cout<<"\nEnter the First Name : ";
    std :: cin>>new_candidate.first_name;
    std :: cout<<"Enter the Last Name : ";
    std :: cin>>new_candidate.last_name;
    std :: cout<<"\nIndex = "<<add_if_doesnt_exist(candidate, new_candidate);
    return 0;
}