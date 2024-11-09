#include"Header.h"

int main() {

std::cout << "give a  size\n";
std::size_t size;
std::cin >> size;
assert(size > 0);
std::vector <std::vector<double>>a(size);
std::vector<double>b{};
std::cout << "elements for A\n";
for (size_t i = 0; i < a.size(); i++) {
	for (size_t j = 0; j < a.size(); j++) {
		double element;
		std::cin >> element;
		a[i].push_back(element);

	}
}
std::vector<std::vector<double>>u = a;
std::cout << "elements for b\n";
for (size_t i = 0; i < a.size(); i++) {
	double element;
	std::cin >> element;
	b.push_back(element);
}
for (size_t k = 0; k < a.size(); k++) {
	size_t row1 = k;
	size_t row2 = k;
	if (a[k][k] == 0) {
		for (size_t i = k + 1; i < a.size(); i++) {
			if (a[i][k] != 0) {
				row2 = i;
				break;
			}
		}
		if (row2 == k) {
			std::cout << "error\n";
			std::exit(EXIT_FAILURE);

		}


		std::vector<double>c = a[row1];
		a[row1] = a[row2];
		a[row2] = c;
		double temp = b[row1];
		b[row1] = b[row2];
		b[row2] = temp;
	}
	for (size_t i = k + 1; i < a.size(); i++) {
		double kati = a[i][k] / a[k][k];

		for (size_t j = k; j < a.size(); j++) {

			a[i][j] = a[i][j] - kati * a[k][j];

		}
		b[i] = b[i] - kati * b[k];
	}

}
printmatrix(a, b);
if (a[a.size() - 1][a.size() - 1] == 0) {
	std::cout << "error\m";
	std::exit(EXIT_FAILURE);
}
std::vector <double>x(size);
for (size_t k = a.size() - 1; k > 0; k--) {

	x[k] = b[k];
	for (size_t j = k + 1; j < a.size(); j++) {
		x[k] = (x[k] - a[k][j] * x[j]);
	}
	x[k] = x[k] / a[k][k];


}
size_t k = 0;
while (k == 0) {
	x[k] = b[k];
	for (size_t j = k + 1; j < a.size(); j++) {
		x[k] = (x[k] - a[k][j] * x[j]);
	}
	x[k] = x[k] / a[k][k];
	k = 1;
}
printsolution(x);
verification(u, x);
}
