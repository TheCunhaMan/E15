#include "sensor.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//functions 


//mote struct;	
mote* new_mote(float mote_id, float voltage, float light, float infra, float temp, float humid, float h_rel) 
{
    mote* M = (mote*)malloc(sizeof(mote));
  	
    M->type    = mote_id;	
    M->light   = light;
    M->infra   = infra;
    M->h_rel   = h_rel;
    M->humid   = humid;
    M->temp    = temp;
    M->voltage = voltage;
    return M;
}



float temp_measure(float temp)	
		return (float)(-39.6 + 0.01*temp);


float humid_measure(float humid)		return (-2.0468 + 0.0367*humid -1.5955*pow(10, -6)*humid); 


float hrel_measure(float humid, float temp)	return (float)(temp - 25)*(0.01+8*pow(10, -5)*humid)+humid_measure(humid, temp);

// for quickness, bitshift used = l/4096*1.5/100
float light_measure(float light)		return (float)(0.625*pow(10, 6)*(light>>13)*(0.03)); 

// for quickness, bitshift used =i/4096*1.5/100
float infra_measure(float infra)		return (float)(0.769*pow(10, 5)*(light>>13)*(0.03)); 

// for quickness, bitshift used ==  v/4096*1.5
float voltage_measure(float voltage)		return (float)((voltage>>13)*3);  					 


float substring(const char* str, int begin, int end)
{
  if (str == 0 || strlen(str) == 0 || strlen(str) < begin || strlen(str) < (begin+len))	 return 0;
	return strtol(strndup(str + begin, end), NULL, 16);
} 

int read_string(mote*Mote)
{	
	static char string = (char*) malloc((47)*sizeof(char));
	int begin[8] = {0, 10, 20, 24, 28, 32, 36, 44};
	int end[8]   = {3, 13, 23, 27, 31, 35, 39, 45};
	char b[4] = "7E45";
	char e[2] = "7E";
	
			scanf("%s", &string);
				
		if (((strcmp(substring(string, begin[0], end[0])), b) !=0) || (strcmp( substring(string, begin[8], end[8])), e) !=0) 
					return NULL; 
					
		mote*M= new_mote(
					substring      (string, begin[1], end[1]),
					voltage_measure(substring(string, begin[2], end[2])),
					light_measure  (substring(string, begin[3], end[3])),
					infra_measure  (substring(string, begin[4], end[4])),
					temp_measure   (substring(string, begin[5], end[5])),
					humid_measure  (substring(string, begin[6], end[6])),
					humid_rel      (substring(string, begin[6], end[6]), substring(string, begin[5], end[5]))
				);
					
					Mote = M;
					return 0;
				
}
