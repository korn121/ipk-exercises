#include <iostream>
#include <cmath>

double potenz(int a, int n){
		
		int b = 1;
		
		for (int j = 1; j <= n ; j++){
			
			b *= a;
		}
		if ( n < 0){
			
			return 1/b;
		}
		else{
			
			return b;
		}
	}
	
double rootiterative(double q, int n, int steps){
	
	int a = 1;
	
	for (int i = 1; i <= steps; i++)
	{
		
		a += ((1/n)*(q/potenz(a,n-1)-a));
	}
	
	
	return a;
}

int main(int argc, char** argv){
	
	double q;
	int n;
	int steps;
	
	std::cout << "wir wollen uns der n-ten wurzel von q annähren. was ist q?"<< std::endl;
	std::cin >> q;
	std::cout << "was ist n?" << std::endl;
	std::cin >> n;
	std::cout << "in wie wielen schritten sollen wir uns annaehern?" << std::endl;
	std::cin >> steps;
	
	std::cout<< rootiterative(q,n,steps) << std::endl;
	
	return 0;
}
