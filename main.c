#include "sensor.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

	mote*M = malloc(1);
	int i=0;
		
		while(i<9){
			read_string(M); //undefined ref. to this function
			i++;
			}			
return 0;
}

int read_string(mote*Mote);
