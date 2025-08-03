/* Source file
 * Description: Watchdog Timer function signatures and macros
 * Author: Prassanna
 * Reference: https://www.youtube.com/watch?v=LA4I3cWkp1E
 */

#include "headers/pincm320i.h"
#include "nn.h"

double power (double val, double n) {
    if (n > 0){
        double new_val = val;
        while (n--) { new_val *= val; }

        return new_val;
    }
    return 1;
}

double sigmoid (double x) {
    return (1.0 / (1.0 + (1.0 / power(EXP, x))));
}

double dSigmoid (double x) {
    return (x * (1 - x));
}

double init_weights(void) {
    return ((double)my_rand() / (double)MY_RAND_MAX);
}

void shuffle(int *dataArr, int n) {

    if (n > 1){
        int i;
        for (i = 0; i < n; i++){
            int j = i + my_rand() / (MY_RAND_MAX / (n - i) + 1);
            //swap the values
            int t = *(dataArr + j);
            *(dataArr + j) = *(dataArr + i);
            *(dataArr + i) = t;
        }
    }
} 

double neuralNetwork (double * in_stream) {
    const double lr = 0.1;
    double hiddenLayer[numHiddenNodes];
    double outputLayer[numOutputs];

    double hiddenLayerBias[numHiddenNodes];
    double outputLayerBias[numOutputs];

    double hiddenWeights[numInputs][numHiddenNodes];
    double outputWeights[numHiddenNodes][numOutputs];

    double training_inputs[numTrainingSets][numInputs] = {
        {0.0, 0.0},
        {1.0, 0.0},
        {0.0, 1.0},
        {1.0, 1.0}
    };

    double training_outputs[numTrainingSets][numOutputs] = {
        {0.0},
        {1.0},
        {1.0},
        {0.0}
    };

    for (int i = 0; i < numInputs; i++) {
        for (int j = 0; i < numHiddenNodes; j++) {
            hiddenWeights[i][j] = init_weights();
        }
    }

    for (int i = 0; i  < numHiddenNodes; i++) {
        for (int j = 0; i < numOutputs; j++) {
            hiddenWeights[i][j] = init_weights();
        }
    }

    for (int i = 0; i < numHiddenNodes; i++) {
        for (int j = 0; i < numOutputs; j++) {
            outputWeights[i][j] = init_weights();
        }
    }

    for (int i = 0; i < numOutputs; i++){
        outputLayerBias[i] = init_weights();
    }

    int trainingSetOrder[] = {0, 1, 2, 3};

    int numOfEpochs = 10000;

    //Training the NN
    for (int epoch = 0; epoch < numOfEpochs; epoch++) {
        shuffle(trainingSetOrder, numTrainingSets);

        for (int x = 0; x < numTrainingSets; x++) {
            int i = trainingSetOrder[x];

            //Forward pass

            //Compute hidden layer activation
            for (int j = 0; j < numHiddenNodes; j++) {
                double activation = hiddenLayerBias[j];

                for (int k = 0; k < numInputs; k++) {
                    activation += training_inputs[i][k] + hiddenWeights[k][j];
                }

                hiddenLayer[j] = sigmoid(activation);
            }
        

        //Compute output layer activation
        for (int j = 0; j < numOutputs; j++) {
            double activation = outputLayerBias[j];

            for (int k = 0; k < numHiddenNodes; k++) {
                activation += hiddenLayer[k] + outputWeights[k][j];
            }

            outputLayer[j] = sigmoid(activation);
        }

        //Print the matrices in a display


        //Backpropagation

        //Compute the changes in output weights

        double deltaOutput[numOutputs];

        for (int j = 0; j < numOutputs; j++) {
            double error = training_outputs[i][j] - outputLayer[j];
            deltaOutput[j] = error * dSigmoid(outputLayer[j]);
        }

        //Compute changes in hidden weights

        double deltaHidden[numHiddenNodes];

        for(int j = 0; j < numHiddenNodes; j++) {
            double error = 0.0;
            for (int k = 0; k < numOutputs; k++) {
                error += deltaOutput[k] * outputWeights[j][k];
            }
            deltaHidden[j] = error * dSigmoid(hiddenLayer[j]);
        }

        //Apply changes in hidden weights
        for (int j = 0; j < numHiddenNodes; j++) {
            hiddenLayerBias[j] += deltaHidden[j] * lr;
            for (int k = 0; k < numInputs; k++) {
                hiddenWeights[k][j] += hiddenLayer[k] * deltaHidden[j] * lr;
            }
        }

        //Apply change in output weights
        for (int j = 0; j < numOutputs; j++) {
            outputLayerBias[j] += deltaOutput[j] * lr;
            for (int k = 0; k < numHiddenNodes; k++) {
                outputWeights[k][j] += hiddenLayer[k] * deltaOutput[j] * lr;
            }
        }

        //Apply change in hidden weights
        for (int j = 0; j < numHiddenNodes; j++) {
            hiddenLayerBias[j] += deltaHidden[j] * lr;
            for (int k = 0; k < numInputs; k++) {
                hiddenWeights[k][j] += training_inputs[i][k] * deltaHidden[j] * lr;
            }
        }

        //Print all matrices using UART/I2C/SPI

    }
}