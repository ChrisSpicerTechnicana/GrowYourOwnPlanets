// GrowYourOwnPlanets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct InitialParameters
{
    double max_eccentricity = 0.0;
    double stellar_mass = 0.0;
    double dust = 0.0;
    double gas = 0.0;
};

int main()
{
    InitialParameters initialParameters;

    std::cout << "Input max eccentricity: ";
    std::cin >> initialParameters.max_eccentricity;

    std::cout << "\nInput stellar mass: ";
    std::cin >> initialParameters.stellar_mass;

    std::cout << "\nInput Dust: ";
    std::cin >> initialParameters.dust;

    std::cout << "\nInput gas: ";
    std::cin >> initialParameters.gas;

    std::cout << "\nRunning with parameters:";
    std::cout << "\nmax eccentricity: " << initialParameters.max_eccentricity;
    std::cout << "\nstellar mass: " << initialParameters.stellar_mass;
    std::cout << "\ndust: " << initialParameters.dust;
    std::cout << "\ngas: " << initialParameters.gas << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
