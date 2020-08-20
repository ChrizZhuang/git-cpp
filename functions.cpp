# include <iostream> // for cout
# include <vector>
# include <stdexcept>

std::vector<double> convert_F_to_C(std::vector<double> temperatures)
{
    std::vector<double> temperatures_new;

    for (size_t i = 0; i < temperatures.size(); i++)
    {
        double temperature_new = (temperatures[i] - 32.0) / 1.8;;
        temperatures_new.push_back(temperature_new);
    }
    return temperatures_new;
}

double convert_F_to_C(double temperature = 0.0)
{
    const double abs_zero = -459.67;
    if (temperature < abs_zero)
    {
        throw std::runtime_error("Given a temperature below absolute zero!");
    }
    return (temperature - 32.0) / 1.8;
    /*std::cout << "temperature in function: " << &temperature << std::endl;
    std::cout << "temperature in function: " << temperature << std::endl;*/
}

int main(void)
{
    /*double pi = 3.1415;
    double *rpi = &pi;

    std::cout << &pi << std::endl << *rpi << std::endl;
    std::cout << pi << std::endl << &rpi << std::endl;*/

    /*pi = 2.0 * pi;
    std::cout << pi << std::endl << rpi << std::endl;*/

    //double temperature = 68.1;
    //double new_temp = convert_F_to_C(temperature);
    //std::cout << "temperature is " << new_temp << std::endl;

    /*std::vector<double> temperatures;
    temperatures.push_back(123.3);
    temperatures.push_back(232.4);
    temperatures.push_back(321.4);
    std::vector<double> new_temps = convert_F_to_C(temperatures);*/
    //std::cout << new_temps[0] << std::endl;

    try {
        std::cout << convert_F_to_C(-607.8) << std::endl;
        }
    catch (std::exception & ex)
    {
        std::cout << "Program encountered an error!" << std::endl;
        std::cout << ex.what() << std::endl;
        return 3;
    }

    return 0;
}