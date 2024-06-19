#pragma once

#include <vector>

class Output
{
private:

public:
    Output(int N, int M, std::vector<double> y_0, double t_0);
    ~Output();
    std::vector<std::vector<double>> y;
    std::vector<double> t;
};

Output::Output(int N, int M, std::vector<double> y_0, double t_0) {
    y.resize(N + 1, std::vector<double>(M, 0));
    y.at(0) = y_0;
    t.resize(N + 1);
    t.at(0) = t_0;
}