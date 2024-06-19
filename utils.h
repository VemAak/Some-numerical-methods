#pragma once

#include <vector>
#include <cassert>

std::vector<double> elem_add(std::vector<double> lhs, std::vector<double> rhs);

std::vector<double> operator+(const std::vector<double>& lhs, const std::vector<double>& rhs);

std::vector<double> operator*(const double& scale, const std::vector<double>& rhs);