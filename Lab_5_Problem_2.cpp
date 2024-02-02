#include <stdio.h>
double timeA, timeP, speed;
void moon (){
	timeP = 363104 / speed;
	timeA = 405696 / speed;
}

void mars (){
	timeP = 54600000 / speed;
	timeA = 401000000 / speed;
}

void venus (){
	timeP = 38000000 / speed;
	timeA = 261000000 / speed;
}

int main (){
	bool loop = true;
	int selection;
	while (loop){
		printf("\nPlease enter the number corresponding to the task you wish to complete");
		printf("\n1. Traveling to the Moon");
		printf("\n2. Traveling to Mars");
		printf("\n3. Traveling to Venus");
		printf("\n4. Exit program\n");
		scanf("%d", &selection); 
		switch (selection){
			case 1:
				printf("You have selected Moon\n");
				printf("Please enter the speed at which you are traveling (km/h): ");
				scanf("%lf", &speed); 
				moon();
				printf("\nPerigee = %f", timeP);
				printf("\nAprogee = %f", timeA);
				break;
			case 2:
				printf("You have selected Mars\n");
				printf("Please enter the speed at which you are traveling (km/h): ");
				scanf("%lf", &speed); 
				mars();
				printf("\nPerigee = %f", timeP);
				printf("\nAprogee = %f", timeA);
				break;
			case 3:
				printf("You have selected Venus\n");
				printf("Please enter the speed at which you are traveling (km/h): ");
				scanf("%lf", &speed);
				venus();
				printf("\nPerigee = %f", timeP);
				printf("\nAprogee = %f", timeA);
				break;
			case 4:
				printf("Thank you for using this program!\n");
				loop = false;
				break;
		}
	}
}
