#include <iostream>
#include <conio.h>
 
class  virus{
public:
	double cases, death;
	virus(double a, double b) {

		cases = a;
		death = b;

	}

	virtual double getmortalityrate() {
		std::cout << "result for mortalityrate   ";
		return 0;

	}

};

class  covid :public virus
{
public:
	covid(double a, double b) :virus(a, b) {}
	double getmortalityrate() {
		std::cout << "\n death mortalityrate result for covid"    ;
		return cases / death;
}

};
class hiv : public virus
{
public:
	hiv(double a, double b) : virus(a, b) {}
	double getmortalityrate() {
		std::cout << "\n  death mortality result for HIV";
		return cases / death;
	}
};
class birdflue :public virus {
public:
	birdflue(double a,double b):virus(a,b){}
	double getmortalityrate() {
		std::cout << "\n  death mortality result for birdflue ";
		return cases / death;

	}

};
int main() {

	int intput;
	std::cout << "\npress 1 for birdflue deathmortality";
	std::cout << "\npress 2 for HIV deathmortality";
	std::cout << "\npress 3 for covid deathmortality";
	std::cin >> intput;


	virus* v;
	if (intput == 1) {
		double a, b;
		std::cout << "enter the number of the cases";
		std::cin >> a;
		std::cout << "enter the number of the death";
		std::cin >> b;
		birdflue bf(a, b);
		v = &bf;
		std::cout << v->getmortalityrate();
	}
	else if (intput == 2) {
		double a, b;
		std::cout << "enter the number of the cases";
		std::cin >> a;
		std::cout << "enter the number of the death";
		std::cin >> b;
		hiv h(a, b);
		v = &h;
		std::cout << v->getmortalityrate();
	}
	else if (intput == 3) {
		double a, b;
		std::cout << "enter the number of the cases";
		std::cin >> a;
		std::cout << "enter the number of the death";
		std::cin >> b;
		covid c(a, b);
		v = &c;
		std::cout << v->getmortalityrate();
	
	}
	else {
		std::cout << "wrong input";
	}
}

