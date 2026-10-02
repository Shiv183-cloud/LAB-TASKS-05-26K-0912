/* Task 9: Traffic Light and Action Simulator
Write a program where the outer switch takes a character representing a traffic light color ('R', 'Y', 'G'). For
the 'R' (red) and 'G' (green) cases, nest an inner switch that takes a second character representing whether a
pedestrian button has been pressed ('Y' for yes, 'N' for no), and prints an appropriate action message for
each combination (e.g., stop and wait, stop and cross, go, go but watch for pedestrians). The 'Y' (yellow)
case does not need a nested switch. */

#include <stdio.h>
int main() {
	char light ;
	char ans ;
	printf("Enter the Traffic Light Color! R represents Red , Y represents Yellow , G represents Green ");
	scanf(" %c",&light);

	switch(light) {
		case 'R' :
			printf("Has the Pedestrian Button Been Pressed? Y- yes , N- no ");
			scanf(" %c",&ans);
			switch(ans) {
				case 'Y' :
					printf("Stop and Wait! ");
					break ;
				case 'N' :
					printf("Stop and Cross! ");
					break;
				default:
					printf("Invalid Answer!  ");
			}
			break;
		case 'Y' :
			printf("The Light is Yellow; Start your Car! ");
			break ;
		case 'G' :
			printf("Has the Pedestrian Button Been Pressed? Y- yes , N- no ");
			scanf(" %c",&ans);
			switch(ans) {
				case 'Y' :
					printf("Stop and Wait! ");
					break ;
				case 'N' :
					printf("Stop and Cross! ");
					break;
				default:
					printf("Invalid Answer!  ");
				
			}
			break;	
		default:
			printf("Invalid Traffic Light! ");
	}
	return 0 ;
}
