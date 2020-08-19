# include <iostream>
# include <vector>
# include <array>

typedef std::array<double, 3> AtomCoord;
typedef std::vector<AtomCoord> Coordinates;


int main(void)
{
    //double i = 10;

    //Create an array of 10 doubles
    //double arr[10];
    //double arr[10] = {0.0, 2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0, 16.0, 18.0};

    /*for (int idx = 0; idx < 10; idx++)
    {
        arr[idx] = idx * 2.0;
    }*/

    /*for (int idx = 0; idx < 10; idx++)
    {
        std::cout << "i = " << arr[idx] << std::endl;
    }
    //arr[10] = 20.0;*/
    /*std::cout << "i = " << i << std::endl;
    std::cout << "Address of i " << &i << std::endl;
    std::cout << std::endl;

    double *pi = &i;
    std::cout << "value of pi " << pi << std::endl;
    std::cout << "value of *pi " << *pi << std::endl; 
    std::cout << std::endl;

    *pi = 3;
    std::cout << "value of pi " << pi << std::endl;
    std::cout << "value of *pi " << *pi << std::endl; 
    std::cout << "i = " << i << std::endl;
    std::cout << "Address of i " << &i << std::endl;
    std::cout << std::endl;

    i = 8;
    std::cout << "value of pi " << pi << std::endl;
    std::cout << "value of *pi " << *pi << std::endl; 
    std::cout << "i = " << i << std::endl;
    std::cout << "Address of i " << &i << std::endl;
    std::cout << std::endl;
    int *pi = nullptr;
    std::cout << *pi << std::endl;

    int ndoubles = 100;

    //double *p = new double[ndoubles]; 

    p[0] = 311.2;
    p[1] = 2 * p[0];

    std::cout << p[0] << "\t" << p[1] << std::endl;
    delete [] p;*/
    /*std::vector<double> dvec;
    dvec.resize(ndoubles);

    for (size_t i = 0; i < dvec.size(); i++) // size_t: holding the size of the vector dvec.size() no matter how big it is; size_t is an unsigned int;
    {
        dvec[i] = 0.0;
    }
    //std::cout << "size: " << dvec.size() << std::endl;
    dvec.push_back(12.3); // add a value at the end
    std::cout << "size: " << dvec.size() << std::endl;
    dvec.push_back(12.8);
    std::cout << "size: " << dvec.size() << std::endl;
    std::cout << std::endl;
    std::cout << dvec[0] << std::endl;*/
    //std::cout << dvec[3] << std::endl; // cpp is able to access something that is not within the vector
    //std::cout << dvec.at[3] << std::endl; //'at' make sure you enter the element within the vector

    //dvec.pop_back(); // delete the last element in the vector

    //dvec.clear(); // clear all elements in the vector
    //std::cout << "size: " << dvec.size() << std::endl;

    //dvec.at(50) = 45.3;
    //std::cout << "size: " << dvec.size() << std::endl; 
    AtomCoord coord1 = {1.0, 2.0, 3.0};
    Coordinates atom_coordinates;
    //coord1[0] = 1.0;
    //coord1[1] = 2.0;
    //coord1[2] = 3.0;
    atom_coordinates.push_back(coord1);
    std::cout << "size: " << coord1.size() << std::endl; 
    //coord1.at(3) = 1.0;

    std::array<double, 3> coord2 = coord1;
    std::cout << coord2[0] << std::endl;

    return 0;
}