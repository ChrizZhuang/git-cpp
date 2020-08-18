# include <iostream> // for std::cout, std::endl

double convert_F_to_C(double temp_F)
{
    if(temp_F < 0.0)
    {
        std::cout << "Temperature is less than 0." << std::endl;
    }
    double temp_C;
    temp_C = (temp_F - 32.0) / 1.8;
    return temp_C;
}

int main(void)
{
    // i++ is equivalent to i += 1
    for (int i = 0; i < 100; i++)
    {
        double temperature = i * 10.0;
        std::cout << "Converted temperature: " << temperature << "F = " << 
        convert_F_to_C(temperature) << " C " << std::endl;
    }
    //double temp_Fa = 212;
    //double temp_celcius;
    //temp_celcius = convert_F_to_C(temp_Fa);
    //std::cout << "The Celcius temperature of " << temp_Fa <<" F is "<< temp_celcius << " C." << std::endl; 
    return 0;
}