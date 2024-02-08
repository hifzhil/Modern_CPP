#include<iostream>
template <typename T> T add (T a, T b)
{
    return a + b;
}

int main()
{
    std::cout<<add<std::string>("me ","you")<<std::endl;
    return 0;
}


