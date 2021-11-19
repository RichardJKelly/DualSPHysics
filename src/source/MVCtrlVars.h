#include "TypesDef.h"
#ifndef MVCtrlVars_H
#define MVCtrlVars_H


extern int *MVctrls;
extern int MVctrlSize;
extern double fxav;
extern double fyav;
extern double fzav;

extern tdouble3 rpoint1;
extern tdouble3 rpoint2;

class MVController
{

public:
	MVController();
	bool isMVctrl(int id);
};
#endif
