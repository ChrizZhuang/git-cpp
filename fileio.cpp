# include <iostream> 
# include <fstream>

int main(void)
{
    //std::ofstream outfile("new_file.txt"); //writing to this file
    /*std::ofstream outfile("new_file.txt", std::fstream::app); // add something new in the file
    outfile << "hello!" << std::endl;
    outfile << "asdad" << std::endl;

    outfile.precision(3);
    double pi = 1.3231;
    outfile << "asdaad323424 " << pi << std::endl;*/
    //int n;
    std::ifstream infile("input.txt"); //reading input file

    if(!infile.is_open())
    {
        std::cout << "input file does not exist!" << std::endl;
        return 1;
    }

    std::string name;
    int x;
    int y;

    infile >> name >> x >> y;
    std::cout << "name = " << name << std::endl;
    std::cout << "x = " << x << std::endl; 
    std::cout << "y = " << y << std::endl; 

    return 0;
}