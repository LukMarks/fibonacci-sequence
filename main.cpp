#include <iostream>

void codePresentation();
void printFibonacciSequence(int sequenceLength, int* sequence);
int getSequenceLength();
void calculateFibonacciSequence(int sequenceLength, int* sequence);

int main()
{
    codePresentation();
    int fibonacciLength = getSequenceLength();

    int* sequence;
    sequence = (int *)malloc(fibonacciLength * sizeof(int));
    calculateFibonacciSequence(fibonacciLength, sequence);
    printFibonacciSequence(fibonacciLength, sequence);
    free(sequence);
    return 0;
}


void codePresentation(){

    std::string introductionText;
    introductionText = "============== \nWelcome to \nFibonacci Sequence calculator \n==============\n";
    std::cout << introductionText;

}

int getSequenceLength(){

    int sequenceLength = 0;
    std::cout << "Please enter the Sequence Length: ";
    std::cin >> sequenceLength;
    return(sequenceLength);
}

void calculateFibonacciSequence(int sequenceLength, int* sequence){

    sequence[0] = 0;
    sequence[1] = 1;

    for(int position = 2; position < sequenceLength; position++){
        sequence[position] = sequence[position-1] + sequence[position-2];
    }

}

void printFibonacciSequence(int sequenceLength, int *sequence){

    int row, column;

    for(row = 0 ; row <= sequenceLength; row++){

        if(row > 1){
            for(column=0; column<row; column++)
            {
                std::cout << sequence[column]<<" ";
            }
            std::cout << std::endl;
        } else{
            std::cout << sequence[row]<< std::endl;
        }
    }
}
