#pragma once
#include<iostream>
#include<vector>
inline void printmatrix(const std::vector<std::vector<double>>& a, const std::vector<double>& b) {
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
inline void printsolution(const std::vector<double>& a) {
    std::cout << "x:" << '\n';
    for (size_t i = 0; i < a.size(); i++) {
        std::cout << a[i] << '\n';
    }
    return;
}
inline void verification(const vector<vector<double>>& a, const vector<double>& b) {
    cout << "verification:\n";
    for (int i = 0; i < a.size(); i++) {
        double s = 0;
        for (int j = 0; j < a.size(); j++) {
            s += a[i][j] * b[j];
        }
        cout << s << '\n';
    }
    return;
}
