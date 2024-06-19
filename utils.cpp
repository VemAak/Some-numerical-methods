
#include "utils.h"

std::vector<double> elem_add(const std::vector<double> &lhs, const std::vector<double> &rhs)
{
    size_t n = lhs.size();
    assert((n == rhs.size()) && "Tried to add vector without equal length");

    std::vector<double> output(lhs);
    for (size_t i = 0; i < n; i++)
    {
        output.at(i) += rhs.at(i);
    }

    return output;
}

std::vector<double> operator+(const std::vector<double> &lhs, const std::vector<double> &rhs)
{
    size_t n = lhs.size();
    assert((n == rhs.size()) && "Tried to add vector without equal length");

    std::vector<double> output(lhs);
    for (size_t i = 0; i < n; i++)
    {
        output.at(i) += rhs.at(i);
    }

    return output;
};

std::vector<double> operator*(const double &scale, const std::vector<double> &rhs)
{
    std::vector<double> output(rhs);

    for (size_t i = 0; i < rhs.size(); i++)
    {
        output.at(i) *= scale;
    }

    return output;
};