#pragma once
#include<iostream>
#include<vector>
void printmatrix(const std::vector<std::vector<double>>& a, const std::vector<double>& b) {
	std::cout << "A:\n";
	for (size_t i = 0; i < a.size(); i++) {
		for (size_t j = 0; j < a[i].size(); j++) {
			std::cout << a[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << "b:\n";
	for (size_t i = 0; i < b.size(); i++) {
		std::cout << b[i] << '\n';
	}

	return;
}
void printsolution(const std::vector<double>& a) {
	std::cout << "x:" << '\n';
	for (size_t i = 0; i < a.size(); i++) {
		std::cout << a[i] << '\n';
	}
}