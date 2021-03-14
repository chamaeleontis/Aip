//вычислить  корень(x^2+b)−(b^2sin^3(x+a))/x при a=0.1, b=0.2 и x=1

#include <iostream>
#include <fstream>

int main() {
	float a, b, x, y;
	
	std::ifstream fin;
	std::ofstream fout;
	
	fin.open("in.txt");
	fin >> a;
	fin >> b;
	fin >> x;
	fin.close();
    
	y = sqrt(x * x + b) - (b * b * sin(x + a) * sin(x + a) * sin(x + a)) / x;
	std::cout << y << std::endl;
	fout.open("out.txt");
	fout << y;
	fout.close();
}