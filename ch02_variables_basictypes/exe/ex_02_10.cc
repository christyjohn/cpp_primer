#include <iostream>

std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_string;

    std:: cout << "global_str : " << global_str << std::endl;
    std:: cout << "global_int : " << global_int << std::endl;
    std:: cout << "local_string : " << local_string << std::endl;
    std:: cout << "local_int : " << local_int << std::endl;
    return 0;
}

/*
 * sample output
 * global_str : 
 * global_int : 0
 * local_string : 
 * local_int : 21923 (uninitiliazed. is the value already residing in the address)
 */