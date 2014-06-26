#ifndef __WINDOWREP_H__
#define __WINDOWREP_H__
#include "window.h"
extern WINDOW_S osd_s;
extern WINDOW_S context_s;
typedef enum{
	OSD,
	CONTEXT,
	WIN_NUM
}EMWIN;

typedef struct{
	int	nwndid;
	pWINDOW_S wnd_s;

}WINDOWREP_S,*pWINDOWREP_S;
	
WINDOWREP_S windowArray[]={
	{OSD,&osd_s},
	{CONTEXT,&context_s},
};
#endif
