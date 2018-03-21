#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>



//Mote Struct
typedef struct mote {
	float type;
	float light;
	float infra;
	float humid;
	float h_rel;
	float temp;
	float voltage;
	}mote;


//functions

mote* new_mote(float mote, float voltage, float light, float infra, float temp, float humid, float h_rel);

int read_string(mote*Mote);
float temp_measure(float temp);
float humid_measure(float humid);
float hrel_measure(float humid, float temp);
float light_measure(float light);
float infra_measure(float infra);
float voltage_measure(float voltage);
float substring(const char* str, int begin, int end);


