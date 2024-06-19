#pragma once

#include <vector>
#include <cmath>
#include <algorithm>

#include "output.h"
#include "utils.h"

Output RK4(double t_0, double t_end, std::vector<double> y_0, double h, std::vector<double> (*func)(double, std::vector<double>));


