#include <iostream>
#include <cmath>

namespace power {
	int iterative(int q, int n){
		
		
		int a = 1;
		
		for (int i = 1; i <= n ; i++){
			
			a = a * q;
		}
		if ( n < 0){
			
			std::cout << 1/a << std::endl;
			return 1/a;
		}
		else{
			
			std::cout << a << std::endl;
			return a;
		}
	}
	
	int recursive(int q, int n){
		
		
		
		if (n > 0){
			
			return recursive(q, n-1) * q;
		}
		else{
			
			return 0;
		}
		
	}
	
	int besser(int q, int n){
		
		
		int a = n%2;
		int b = n/2;
		int c = 1;
		int d = q*q;
		
		for ( int i = 1; i <= b; i++){
				c = c * d;
		}
		
		if ( a == 0){
			
			std::cout << c << std::endl;
			return c;
			
		}else{
			std::cout << c*q << std::endl;
			return c*q;
		}
	}
}
int main(int argc, char** argv){
	
	int q;
	int n;
	
	std::cout << "wir berchenen q hoch n" << std::endl;
	std::cout << "was ist q?" << std::endl;
	std::cin >> q;
	std::cout << "was ist n?" << std::endl;
	std::cin >> n;
	
	power::iterative(q, n);
	
	return 0;
}
		
