#include <iostream>

int main() 
{
    std::cout << "/*" << std::endl;
    std::cout << "*/" << std::endl;
    //std::cout <<  /* "/*" */ ; // won't work as std::cout need an exression beffore ;
    //std::cout <<  /* "/*" */ << std::endl; //will not work as << is standing alone
    //std::cout << /* "/*" /* "/*" */; // won't work as std::cout need an exression beffore ;
    return 0;
}