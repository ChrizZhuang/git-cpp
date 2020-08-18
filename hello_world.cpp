# include <iostream>
# include <string>
# include <map>

void say_hello(std::string name)
{
    //std::cout << std::endl;
    //std::cout << "Hello, " << name << ";" << std::endl;
    //std::cout << std::endl;
    std::cout << "Hello, " << name;

    /*std::map<std::string, std::string> affiliation_map;
    affiliation_map["Dr. C"] = "Molsol";*/
    
    if(name == "Xudong Zhuang" || name == "Chris")
    {
        std::cout <<  ";" << std::endl;
    }
    //else if(name == "Chris")
    //{
        //std::cout <<  ";" << std::endl;
    //}
    else if(name == "Yunzhi Zhang")
    {
        std::cout << " is my girl!" << std::endl;
    }
    else
    {
        std::cout << " is from nowohere;" << std::endl;
    }
    
}

// in cpp, a single quote means a character, a double quote means a string

int main(void)
{
    //std::cout << "Hello, world!" << std::endl << std::endl;
    //std::cout << "\n";
    //std::cout << "Xudong Zhuang" << std::endl;
    say_hello("Xudong Zhuang");
    std::cout << std::endl;
    say_hello("Chris");
    std::cout << std::endl;
    say_hello("XX");
    std::cout << std::endl;
    say_hello("Yunzhi Zhang");
    return 0;
}