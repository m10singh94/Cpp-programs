// to overload operators through a class
#include <iostream>

class position
{
    public:
        int x;
        int y;
    position operator + (position pos)
    {
        position new_pos;
        new_pos.x = x + pos.x;
        new_pos.y = y + pos.y;
        return new_pos;
    }
    bool operator== (position pos)
    {
        if((x == pos.x) && (y == pos.y))
            return true;
        return false;
    }
};
std :: ostream& operator<<(std :: ostream& output, position pos)
{
    output<<"x = "<<pos.x<<"\ty = "<<pos.y<<std :: endl;
    return output;
}
std :: istream& operator>>(std :: istream& input, position &pos)
{
    input>>pos.x>>pos.y;
    return input;
}
int main()
{
    position pos1, pos2;
    pos1.x = 10;
    pos1.y = 25;
    pos2.x = 50;
    pos2.y = 44;
    position pos3 = pos1 + pos2;
    std :: cout<<pos3;
    std :: cout<< std :: endl;
    if(pos1 == pos2)
        std :: cout<<"Equals\n";
    else
        std :: cout<<"Not Equals\n";
    std :: cout<<"Enter the details of new position : ";
    std :: cin>>pos3;
    std :: cout<<pos3;
    return 0;
}