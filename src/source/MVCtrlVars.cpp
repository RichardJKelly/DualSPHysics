#include "MVCtrlVars.h"
#include <cstdio>
#include "TypesDef.h"

int *MVctrls; 
int MVctrlSize;
double fxav;
double fyav;
double fzav;
tdouble3 rpoint1 = TDouble3(0, 0, 0);
tdouble3 rpoint2 = TDouble3(0, -1, 0);
bool MVController::isMVctrl(int id){
	printf("\nisMVctrl mvctrlsize: %d\n", MVctrlSize );
	for (int i = 0; i < MVctrlSize; i++){
		printf("\nisMVctrl: %d, %d\n", MVctrls[i], id);
  		if (MVctrls[i] == id) return true;
  	}
	return false; 
}

MVController::MVController(){
	
}