// for input and output stream access
# include <iostream>

// shortening the variable name
# define ull unsigned long long
// defining the gravitational constant
# define G 6.67 * pow(10, -11)

// returns the value from Newton's Law of Gravitation formula'
ull force(int m1, int m2, int radius){
	return (G * m1 * m2 * 1000 * 1000 / radius * radius) / 9.8;
}

// main program starts from here
int main(int argc, char const* argv[]){
	// declaring variables
	ull m1, m2, r;
	
	// getting all the necessary data from the user
	std::cout << "Enter the mass of first object (in kg): ";
	std::cin >> m1;
	std::cout << "Enter the mass of the second object (in kg): ";
	std::cin >> m2;
	std::cout << "Enter the radius between the two objects (in km): ";
	std::cin >> r;
	
	// checking if negative or zero is given as value
	if(m1 <= 0 || m2 <= 0 || r <= 0){
		std::cout << "Values have to be positive integers!";
		return 0;
	}
	
	// calculating and returning the value
	ull g_force = force(m1, m2, r);
	std::cout << "The gravitational force between the two objects is " << g_force << " kgf";
	
	return 0;
}
