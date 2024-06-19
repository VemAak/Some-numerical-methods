#include "RK4.h"



Output RK4(double t_0, double t_end, std::vector<double>& y_0, double h, std::vector<double> (*func)(double, std::vector<double>)) {
    double N = std::floor((t_0 - t_end) / h);
    double M = y_0.size(); // May be removed?

    Output sol(N, M, y_0, t_0);

    std::vector<double> K_1;
    std::vector<double> K_2;
    std::vector<double> K_3;
    std::vector<double> K_4;

    std::vector<double> yn;

    double tn;
    for (int n = 0; n <= N; ++n) {
        tn = sol.t.at(n);
        yn = sol.y.at(n);

        if (tn + h > t_end){
            h = t_end - tn;
        }


        K_1 = func(tn, yn);
        K_2 = func(tn + 0.5 * h, yn + 0.5 * h * K_1);
        K_3 = func(tn + 0.5 * h, yn + 0.5 * h * K_2);
        K_4 = func(tn + h, yn + h * K_3);

        sol.t.at(n + 1) = tn + h;
        sol.y.at(n + 1) = yn + 1.0 / 6.0 * (K_1 + 2 * K_2 + 2* K_3 + K_4);
    }

    return sol;
}
