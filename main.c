#include "stdio.h"
#define MAX_INPUT 128

int main() {
	int array_of_inputs[MAX_INPUT];
	int number_of_inputs = 0;
	int current_input;
	float total = 0;

	do{
		scanf("%d", &current_input);
		if (current_input < 0)
			break;
		array_of_inputs[number_of_inputs] = current_input;
		number_of_inputs += 1;
		total += current_input;
	} while (number_of_inputs < MAX_INPUT && current_input >= 0);

	float average = total / number_of_inputs;

	total = 0;
	int number_of_wobegons = 0;
	
	for (int i = 0; i < number_of_inputs; i += 1){
		if (array_of_inputs[i] > average) {
			total += array_of_inputs[i];
			number_of_wobegons += 1;
		}
	}

	printf("%f\n", total/number_of_wobegons);
	return 0;
}