#include <math.h>
#include <stdio.h>
#define PI 3.14159265358979323846

double quadric_hyperbola(double x) { return 1.0 / pow(x, 2.0); }

double lemniscate_of_Bernoulli(double x) {
    return sqrt(sqrt(pow(1.0, 4.0) + 4 * pow(x, 2.0)) - pow(x, 2.0) - 1);
}

double witch_of_agnesi(double x) { return pow(1.0, 3.0) / (1 + pow(x, 2.0)); }

void graph_witch_of_agnesi();

void graph_quadric_hyperbola();

void graph_lemniscate_of_Bernoulli();

int main() {
    double pi = PI;
    double step = (pi * 2.0) / 41.0;
    double begin = pi * -1;
    for (int i = 0; i < 42; i++) {
        printf("%.8lf |\t", begin);
        double w_a = witch_of_agnesi(begin);
        double l_B = lemniscate_of_Bernoulli(begin);
        double q_h = quadric_hyperbola(begin);
        if (w_a == w_a) {
            printf("%.7lf |\t", w_a);
        } else {
            printf("- |\t");
        }

        if (l_B == l_B) {
            printf("%.7lf |\t", l_B);
        } else {
            printf("- |\t");
        }

        if (q_h == q_h) {
            printf("%.7lf |\t", q_h);
        } else {
            printf("- |\t");
        }

        begin += step;
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    graph_witch_of_agnesi();
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    graph_quadric_hyperbola();
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    graph_lemniscate_of_Bernoulli();
    return 0;
}

void graph_witch_of_agnesi() {
    double step_y = 1.0 / 20.0;
    double step_x = 5.0 / 41.0;
    double epsilon = 0.05;
    for (double y = 1.0; y >= 0.0; y -= step_y) {
        for (double x = 5.0; x > -1.0; x -= step_x) {
            double value_function = witch_of_agnesi(x);
            if (x == 5.0) {
                printf("|");
            } else if (y < 0.05) {
                printf("-");
            } else if (value_function < y + epsilon && value_function > y - epsilon) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void graph_quadric_hyperbola() {
    double step_y = 1.0 / 20.0;
    double step_x = 5.0 / 41.0;
    double epsilon = 0.05;
    for (double y = 1.0; y >= 0.0; y -= step_y) {
        for (double x = 5.0; x > -1.0; x -= step_x) {
            double value_function = quadric_hyperbola(x);
            if (x == 5.0) {
                printf("|");
            } else if (y < 0.05) {
                printf("-");
            } else if (value_function < y + epsilon && value_function > y - epsilon) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void graph_lemniscate_of_Bernoulli() {
    double step_y = 1.0 / 20.0;
    double step_x = 5.0 / 41.0;
    double epsilon = 0.05;
    for (double y = 1.0; y >= 0.0; y -= step_y) {
        for (double x = 5.0; x > 0.0; x -= step_x) {
            double value_function = lemniscate_of_Bernoulli(x);
            if (x == 5.0) {
                printf("|");
            } else if (y < 0.05) {
                printf("-");
            } else if (value_function < y + epsilon && value_function > y - epsilon) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
