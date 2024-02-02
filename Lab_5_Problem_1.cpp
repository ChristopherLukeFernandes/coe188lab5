#include <stdio.h>
int display [2];
int process (int numbers [2]){
	for (int j = 0; j < 3; ++j){
		if (numbers [0] < numbers [1] && numbers [0] < numbers [2]){
			display [0] = numbers [0];
			if (numbers [1] < numbers [2]){
				display [1] = numbers [1];
				display [2] = numbers [2];
			}
			else {
				display [1] = numbers [2];
				display [2] = numbers [1];
			}
		}
		else if (numbers [0] < numbers [1] && numbers [0] > numbers [2]){
			display [0] = numbers [2];
			display [1] = numbers [0];
			display [2] = numbers [1];
		}
		else if (numbers [0] > numbers [1] && numbers [0] < numbers [2]){
			display [0] = numbers [1];
			display [1] = numbers [0];
			display [2] = numbers [2];
		}
		else{
			if (numbers [1] > numbers [2]){
				display [0] = numbers [2];
				display [1] = numbers [1];
				display [2] = numbers [0];
		}
			else{
				display [0] = numbers [1];
				display [1] = numbers [2];
				display [2] = numbers [0];
		}
		}
	}
}

	int main (){
		int numbers [2];
		printf("Please enter 3 integers");
		for (int i = 0; i < 3; ++i){
			scanf("%d", &numbers[i]);
	}
	process (numbers);
	printf("Highest %d", display [2]);
	printf("\nLowest %d", display [0]);
	printf("\nMiddle %d", display [1]);
	printf("\nAscending order ");
	printf("%d", display [0]);
	printf(", ");
	printf("%d", display [1]);
	printf(", ");
	printf("%d", display [2]);
	printf("\n");
}
