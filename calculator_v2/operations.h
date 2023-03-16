#ifndef OPERATIONS_H
#define OPERATIONS_H

#define ERROR 98765e-99

typedef struct operations
{
    char* operation;
    double num_first;
    double num_second;
} operations;

double entry_point(operations operations);
double result_calculation(operations operations);
double trig_calculation(operations operations);
double optional_calculation(operations operations);

#endif // OPERATIONS_H
