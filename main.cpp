#include <iostream>

using namespace std;
int main{
	factorial g;
    g.calcular();
	return 0
}


class factorial() {
public:
	int n;
	factorial();
	int calcular();
};

factorial::factorial::() {
	n = 8;
}

int factorial::calcular() {
	return n * 2;
}