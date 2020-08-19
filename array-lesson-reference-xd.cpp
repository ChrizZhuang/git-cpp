# include <iostream>
# include <vector>
# include <array>
# include <string>

int main(void)
{
    std::string my_string = "Hello";
    std::string & ref_string = my_string;

    std::cout << "string: " << my_string << std::endl;
    std::cout << "string: " << ref_string << std::endl;

    std::cout << "address: " << &my_string << std::endl;
    std::cout << "address: " << &ref_string << std::endl;

    std::string my_string2 = "nihao";
    ref_string = my_string2;

    std::cout << "string: " << my_string2 << std::endl;
    std::cout << "string: " << my_string << std::endl;
    std::cout << "string: " << ref_string << std::endl;

    std::cout << "address: " << &my_string2 << std::endl;
    std::cout << "address: " << &ref_string << std::endl;
    std::cout << "address: " << &my_string << std::endl;

    return 0;
}