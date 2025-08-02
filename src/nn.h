#ifndef NN_H_
#define NN_H_

#define numInputs           2
#define numHiddenNodes      2
#define numOutputs          1
#define numTrainingSets     4

#define MY_RAND_MAX         255

#define EXP                 __DOUBLE__(2.7182818)

double power (double, double);
double sigmoid (double);
double dSigmoid (double);
void shuffle(int *, int);
double neuralNetwork (double *);

#endif