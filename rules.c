#include "rules.h"




mote* M;
 
int div = M->type;

switch (div) 
{


case 1:						 //Room 1

if(M->temp > 25)	
		return 0;					 //Heater OFF
	else if(M->temp <23)
		return 1;					 //Heater ON and Close Windows 
		break;
									 
if(M->light > 300)
		return 1;           		 //Open blinds
	else if(M->light < 150)
		return 0;					 //Close blinds
		break;
		
if(M->humid > 50)			
		return 1; 					 //Dehumedifier ON	
	else if(M->humid <45)
		return 0;					 //Dehumedifier OFF
	

case 2:						 //ROOM 2

if(M->temp > 25)	
		return 0;					 //Heater OFF
	else if(M->temp <23)
		return 1;					 //Heater ON and Close Windows 
		break;
									 
if(M->light > 300)
		return 1;           		 //Open blinds
	else if(M->light < 150)
		return 0;					 //Close blinds
		break;
		
if(M->humid > 50)			
		return 1; 					 //Dehumedifier ON	
	else if(M->humid <45)
		return 0;					 //Dehumedifier OFF


case 3:						 //LIVING ROOM				

if(M->temp > 25)	
		return 0;					 //Heater OFF
	else if(M->temp <23)
		return 1;					 //Heater ON and Close Windows 
		break;

if(M->light > 200)
		return 1;           		 //Open blinds
	else if(M->light < 150)
		return 0;					 //Close blinds
		break;









}		
								
