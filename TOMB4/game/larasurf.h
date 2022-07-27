#pragma once
#include "../global/vars.h"

void inject_larasurf(bool replace);

void lara_as_surfswim(ITEM_INFO* item, COLL_INFO* coll);
void lara_as_surfback(ITEM_INFO* item, COLL_INFO* coll);
void lara_as_surfleft(ITEM_INFO* item, COLL_INFO* coll);
void lara_as_surfright(ITEM_INFO* item, COLL_INFO* coll);
void lara_as_surftread(ITEM_INFO* item, COLL_INFO* coll);
void lara_col_surfswim(ITEM_INFO* item, COLL_INFO* coll);
void lara_col_surfback(ITEM_INFO* item, COLL_INFO* coll);
void lara_col_surfleft(ITEM_INFO* item, COLL_INFO* coll);
void lara_col_surfright(ITEM_INFO* item, COLL_INFO* coll);
void lara_col_surftread(ITEM_INFO* item, COLL_INFO* coll);
void LaraSurface(ITEM_INFO* item, COLL_INFO* coll);
long LaraTestWaterClimbOut(ITEM_INFO* item, COLL_INFO* coll);
long LaraTestWaterStepOut(ITEM_INFO* item, COLL_INFO* coll);

#define LaraSurfaceCollision	( (void(__cdecl*)(ITEM_INFO*, COLL_INFO*)) 0x004320B0 )
