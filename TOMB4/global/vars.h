#pragma once
#include "types.h"
#include "math_tbls.h"

#define VAR_U_(address, type)			(*(type*)(address))
#define ARRAY_(address, type, length)	(*(type(*)length)(address))

#define lara	VAR_U_(0x0080DFE0, LARA_INFO)
#define lara_item	VAR_U_(0x0080E13C, ITEM_INFO*)
#define input	VAR_U_(0x00535704, long)
#define linput	VAR_U_(0x005358A8, long)
#define inputBusy	VAR_U_(0x00535600, long)
#define bTrackCamInit	VAR_U_(0x004BF6E4, long)
#define bUseSpotCam	VAR_U_(0x004BF6EC, long)
#define SetDebounce	VAR_U_(0x007FE160, long)
#define framecount	VAR_U_(0x004BF420, long)
#define GlobalCounter	VAR_U_(0x004BF3FA, short)
#define cdtrack	VAR_U_(0x004AEC00, short)
#define bDisableLaraControl	VAR_U_(0x004BF6F0, long)
#define gfCurrentLevel	VAR_U_(0x007FD290, char)
#define gfLevelComplete	VAR_U_(0x007FD2B0, char)
#define dbinput	VAR_U_(0x005358AC, long)
#define cutseq_trig	VAR_U_(0x004BFC7C, long)
#define cutseq_num	VAR_U_(0x004BFC78, long)
#define GLOBAL_enterinventory	VAR_U_(0x004AE068, long)
#define GLOBAL_inventoryitemchosen	VAR_U_(0x004AE06C, long)
#define GLOBAL_lastinvitem	VAR_U_(0x004AE064, long)
#define reset_flag	VAR_U_(0x004BF414, long)
#define Gameflow	VAR_U_(0x007FD278, GAMEFLOW*)
#define FadeScreenHeight	VAR_U_(0x004BF380, short)
#define gfGameMode	VAR_U_(0x004AF451, char)
#define thread_ended	VAR_U_(0x00533B10, long)
#define BinocularRange	VAR_U_(0x004BF3E4, long)
#define BinocularOldCamera	VAR_U_(0x004BF3EC, camera_type)
#define LaserSight	VAR_U_(0x004BF3F0, long)
#define camera	VAR_U_(0x007FE820, CAMERA_INFO)
#define BinocularOn	VAR_U_(0x004BF3E8, long)
#define items	VAR_U_(0x007FE28C, ITEM_INFO*)
#define objects	ARRAY_(0x0052B850, OBJECT_INFO, [465])
#define GotLaraSpheres	VAR_U_(0x007F6EDE, char)
#define InItemControlLoop	VAR_U_(0x004BF3F5, char)
#define next_item_active	VAR_U_(0x007FD20A, short)
#define KillEverythingFlag	VAR_U_(0x004BF364, long)
#define wibble	VAR_U_(0x004BF360, long)
#define SplashCount	VAR_U_(0x004BF36C, long)
#define WeaponDelay	VAR_U_(0x004BF3F4, long)
#define SmokeCountL	VAR_U_(0x00804E68, long)
#define SmokeCountR	VAR_U_(0x00804E6C, long)
#define XSoff1	VAR_U_(0x00753C6C, short)
#define XSoff2	VAR_U_(0x00753C68, short)
#define YSoff1	VAR_U_(0x00753C7C, short)
#define YSoff2	VAR_U_(0x00753C80, short)
#define	ZSoff1	VAR_U_(0x00753CAC, short)
#define ZSoff2	VAR_U_(0x00753CB0, short)
#define GLOBAL_playing_cutseq	VAR_U_(0x004BFC80, long)
#define PoisonFlag	VAR_U_(0x007FD214, char)
#define gfLevelFlags	VAR_U_(0x007FD260, short)
#define CamRot	VAR_U_(0x007E71C0, PHD_VECTOR)
#define health_bar_timer	VAR_U_(0x004BF680, long)
#define GameTimer	VAR_U_(0x007FD258, long)
#define next_fx_active	VAR_U_(0x008012F0, short)
#define effects	VAR_U_(0x008012E0, FX_INFO*)
#define trigger_index	VAR_U_(0x007FE248, short*)
#define SmashedMeshCount	VAR_U_(0x004BF3FE, short)
#define meshes	VAR_U_(0x00533A80, short**)
#define bones	VAR_U_(0x00533A88, long*)
#define anims	VAR_U_(0x00533A68, ANIM_STRUCT*)
#define cheat_hit_points	VAR_U_(0x0080DEB8, short)
#define savegame	VAR_U_(0x007F76C0, SAVEGAME_INFO)
#define ForcedFixedCamera	VAR_U_(0x007FE890, GAME_VECTOR)
#define UseForcedFixedCamera	VAR_U_(0x007FE8C0, char)
#define room	VAR_U_(0x00533A64, ROOM_INFO*)
#define GlobalBikeItem	VAR_U_(0x007F504C, ITEM_INFO*)
#define phd_winwidth	VAR_U_(0x00753CF8, long)
#define phd_winheight	VAR_U_(0x00753C48, long)
#define bLaraTorch	VAR_U_(0x00536F10, long)
#define phd_mxptr	VAR_U_(0x007E71D8, long*)
#define GlobalAmbient	VAR_U_(0x005C047C, long)
#define spark	ARRAY_(0x00801400, SPARKS, [256])
#define height_type	VAR_U_(0x007FE290, long)
#define bikefspeed	VAR_U_(0x004BFC08, long)
#define dont_exit_bike	VAR_U_(0x004BFC24, char)
#define DashTimer	VAR_U_(0x0080E13A, short)
#define font_height	VAR_U_(0x007F5050, long)
#define small_font	VAR_U_(0x007F5054, long)
#define App	VAR_U_(0x00753980, WINAPP)
#define spriteinfo	VAR_U_(0x00533AC4, SPRITESTRUCT*)
#define current_item    VAR_U_(0x005B74B0, ITEM_INFO*)
#define DestVB  VAR_U_(0x00753910, LPDIRECT3DVERTEXBUFFER)
#define f_left   VAR_U_(0x00753CB8, float)
#define f_top   VAR_U_(0x00753CFC, float)
#define f_right   VAR_U_(0x00753C44, float)
#define f_bottom   VAR_U_(0x007540C8, float)
#define clip_left   VAR_U_(0x0052AA38, float)
#define clip_top   VAR_U_(0x0052AA34, float)
#define clip_right   VAR_U_(0x0052AA30, float)
#define clip_bottom   VAR_U_(0x0052A34C, float)
#define bWaterEffect    VAR_U_(0x0052AA3C, long)
#define clipflags   VAR_U_(0x0075397C, short*)
#define textinfo	VAR_U_(0x00533AC0, TEXTURESTRUCT*)
#define D3DMView	VAR_U_(0x00753B90, D3DMATRIX)
#define GlobalAlpha	VAR_U_(0x004AD7D4, long)
#define level_items	VAR_U_(0x004BF68C, long)
#define FlashFadeR	VAR_U_(0x004BF386, short)
#define FlashFadeG	VAR_U_(0x004BF388, short)
#define FlashFadeB	VAR_U_(0x004BF38A, short)
#define FlashFader	VAR_U_(0x004BF38C, short)
#define aranges	VAR_U_(0x00753BDC, short*)
#define f_mznear	VAR_U_(0x00753C3C, float)
#define f_mpersp	VAR_U_(0x00753C40, float)
#define f_zfar	VAR_U_(0x00753C90, float)
#define f_centerx	VAR_U_(0x00753C94, float)
#define f_centery	VAR_U_(0x00753C98, float)
#define f_moneopersp	VAR_U_(0x00753CBC, float)
#define FogStart	VAR_U_(0x004B4670, float)
#define FogEnd	VAR_U_(0x004B4674, float)
#define StaticMeshShade	VAR_U_(0x00536EF4, long)
#define water_color_R	VAR_U_(0x004B25D0, long)
#define water_color_G	VAR_U_(0x004B25D4, long)
#define water_color_B	VAR_U_(0x004B25D8, long)
#define current_room	VAR_U_(0x007FDF6C, long)
#define StaticMeshLightItem	VAR_U_(0x005358F0, ITEM_INFO)
#define D3DLights	VAR_U_(0x00536F08, D3DLIGHT_STRUCT*)
#define D3DDynamics	VAR_U_(0x00536F0C, D3DLIGHT_STRUCT*)
#define MaxRoomLights	VAR_U_(0x00536F04, long)
#define LaraTorchStart	VAR_U_(0x00536EF8, PHD_VECTOR)
#define LaraTorchEnd	VAR_U_(0x005358D0, PHD_VECTOR)
#define LaraTorchIntensity	VAR_U_(0x00536EE8, long)
#define SetupLight_thing	VAR_U_(0x00536EF0, long)
#define gfUVRotate	VAR_U_(0x007FD2E9, char)
#define TrainObjPos	VAR_U_(0x007FD2F0, long)
#define gfStringOffset	VAR_U_(0x007FD274, ushort*)
#define gfStringWad	VAR_U_(0x007FD2B8, char*)
#define gfMirrorRoom	VAR_U_(0x007FD250, uchar)
#define gfMirrorZPlane	VAR_U_(0x007FDF64, long)
#define ScreenFading	VAR_U_(0x004BF37C, short)
#define bDoCredits	VAR_U_(0x004BF669, char)
#define last_target	VAR_U_(0x007FE8A0, GAME_VECTOR)
#define CurrentFog	VAR_U_(0x00533AEC, long)
#define bLaraInWater	VAR_U_(0x0080ECD0, char)
#define bLaraUnderWater	VAR_U_(0x00536F14, long)
#define MusicVolume	VAR_U_(0x004B38AC, long)
#define SFXVolume	VAR_U_(0x004B38B0, long)
#define SoundQuality	VAR_U_(0x004B38B4, long)
#define phd_centerx	VAR_U_(0x00753C4C, long)
#define phd_centery	VAR_U_(0x00753C50, long)
#define ControlMethod	VAR_U_(0x005B7494, long)
#define num_fmvs	VAR_U_(0x004BF65D, char)
#define gfScriptOffset	VAR_U_(0x004BF64C, ushort*)
#define gfScriptWad	VAR_U_(0x004BF658, uchar*)
#define gfStatus	VAR_U_(0x004BF650, long)
#define gfLegendTime	VAR_U_(0x004BF668, uchar)
#define gfNumMips	VAR_U_(0x004BF66B, char)
#define gfFog	VAR_U_(0x004BF664, CVECTOR)
#define gfInitialiseGame	VAR_U_(0x004AF452, char)
#define gfResetHubDest	VAR_U_(0x007FD288, uchar)
#define skipped_level	VAR_U_(0x004BF3CE, char)
#define gfCutNumber	VAR_U_(0x004BF66A, char)
#define	gfLayer1Vel	VAR_U_(0x007FD252, char)
#define	gfLayer2Vel	VAR_U_(0x007FD251, char)
#define gfLayer1Col	VAR_U_(0x007FD264, CVECTOR)
#define gfLayer2Col	VAR_U_(0x007FD25C, CVECTOR)
#define gfLegend	VAR_U_(0x007FD2E8, char)
#define gfLensFlare	VAR_U_(0x007FD2A0, PHD_VECTOR)
#define gfLensFlareColour	VAR_U_(0x007FD2B4, CVECTOR)
#define load_cam	VAR_U_(0x00533AA8, PHD_VECTOR)
#define load_target	VAR_U_(0x00533AB4, PHD_VECTOR)
#define load_roomnum	VAR_U_(0x004B27A5, char)
#define phd_top	VAR_U_(0x00753C30, long)
#define phd_left	VAR_U_(0x00753C78, long)
#define phd_bottom	VAR_U_(0x00753C70, long)
#define phd_right	VAR_U_(0x007540D0, long)
#define phd_winymax	VAR_U_(0x00753CA8, long)
#define phd_winxmax	VAR_U_(0x00753C84, long)
#define GLaraShadowframe	VAR_U_(0x0080E710, short*)
#define CamPos	VAR_U_(0x007E71B0, PHD_VECTOR)
#define in_joints	VAR_U_(0x0080E500, long)
#define cutseq_busy_timeout	VAR_U_(0x004BFC84, char)
#define	ScreenFadedOut	VAR_U_(0x004BF37A, short)
#define numnailed	VAR_U_(0x007E71E8, long)
#define GLOBAL_oldcamtype	VAR_U_(0x007E722C, camera_type)
#define GLOBAL_cutme	VAR_U_(0x007E7230, NEW_CUTSCENE*)
#define CurrentAtmosphere	VAR_U_(0x007FE21C, uchar)
#define IsAtmospherePlaying	VAR_U_(0x007FE2E4, uchar)
#define gfRequiredStartPos	VAR_U_(0x007FD270, uchar)
#define ScreenFade	VAR_U_(0x004BF374, short)
#define dScreenFade	VAR_U_(0x004BF376, short)
#define ScreenFadeBack	VAR_U_(0x004BF378, short)
#define ScreenFadeSpeed	VAR_U_(0x004ADF58, short)
#define camera_pnodes	VAR_U_(0x007F4F20, PACKNODE*)
#define GLOBAL_cutseq_frame	VAR_U_(0x007F4FD4, long)
#define IsRoomOutsideNo	VAR_U_(0x007FE7E2, short)
#define GLOBAL_numcutseq_frames	VAR_U_(0x007F4FD0, long)
#define LightningCount	VAR_U_(0x007FDF68, short)
#define dLightningRand	VAR_U_(0x007FE14C, short)
#define old_lara_holster	VAR_U_(0x007F4FB0, short)
#define lara_chat_cnt	VAR_U_(0x004BFC85, char)
#define actor_chat_cnt	VAR_U_(0x004BFC86, char)
#define SmokeWindZ	VAR_U_(0x00804E64, long)
#define SmokeWindX	VAR_U_(0x00804E60, long)
#define hair_wind	VAR_U_(0x004BF33C, long)
#define hair_dwind_angle	VAR_U_(0x004AD7F8, long)
#define hair_wind_angle	VAR_U_(0x004AD7F4, long)
#define loadbar_pos	VAR_U_(0x00577488, float)
#define loadbar_maxpos	VAR_U_(0x00577458, long)
#define SortCount	VAR_U_(0x00660C88, long)
#define FPCW	VAR_U_(0x0053551C, short)
#define nPolyType	VAR_U_(0x007E71E0, long)
#define f_moneoznear	VAR_U_(0x00753CC0, float)
#define IM_rate	VAR_U_(0x007FE120, long)
#define IM_frac	VAR_U_(0x007FDF54, long)
#define IMptr	VAR_U_(0x007FE124, long*)
#define NumLevelFogBulbs	VAR_U_(0x0052A348, long)
#define StatueItem	VAR_U_(0x007F4FA8, ITEM_INFO*)
#define compass_needle_rot	VAR_U_(0x007FEA50, long)
#define examine_mode	VAR_U_(0x004BF3CC, short)
#define stats_mode	VAR_U_(0x007FEA18, short)
#define left_debounce	VAR_U_(0x007FE9C9, char)
#define right_debounce	VAR_U_(0x007FEA38, char)
#define up_debounce	VAR_U_(0x007FEA4C, char)
#define down_debounce	VAR_U_(0x007FE9F8, char)
#define go_left	VAR_U_(0x007FE9C1, uchar)
#define go_right	VAR_U_(0x007FE9CA, uchar)
#define go_up	VAR_U_(0x007FEA45, uchar)
#define go_down	VAR_U_(0x007FEA4B, uchar)
#define select_debounce	VAR_U_(0x007FEA43, uchar)
#define deselect_debounce	VAR_U_(0x007FEA12, uchar)
#define go_select	VAR_U_(0x007FF022, uchar)
#define go_deselect	VAR_U_(0x007FEA54, uchar)
#define left_repeat	VAR_U_(0x007FF021, uchar)
#define right_repeat	VAR_U_(0x007FEA39, uchar)
#define loading_or_saving	VAR_U_(0x007FE9CB, char)
#define use_the_bitch	VAR_U_(0x007FEA44, char)
#define AmountPistolsAmmo	VAR_U_(0x004BF3C0, short)
#define AmountRevolverAmmo	VAR_U_(0x004BF3BE, short)
#define AmountCrossBowAmmo1	VAR_U_(0x004BF3B6, short)
#define AmountCrossBowAmmo2	VAR_U_(0x004BF3B4, short)
#define AmountCrossBowAmmo3	VAR_U_(0x004BF3B8, short)
#define AmountGrenadeAmmo1	VAR_U_(0x004BF3AA, short)
#define AmountGrenadeAmmo2	VAR_U_(0x004BF3A6, short)
#define AmountGrenadeAmmo3	VAR_U_(0x004BF3A8, short)
#define AmountShotGunAmmo1	VAR_U_(0x004BF3AE, short)
#define AmountShotGunAmmo2	VAR_U_(0x004BF3AC, short)
#define AmountUziAmmo	VAR_U_(0x004BF3C4, short)
#define ammo_selector_flag	VAR_U_(0x007FEA4A, char)
#define ammo_selector_fade_val	VAR_U_(0x007FEA2A, short)
#define ammo_selector_fade_dir	VAR_U_(0x007FEA48, short)
#define combine_ring_fade_val	VAR_U_(0x007FEA16, short)
#define combine_ring_fade_dir	VAR_U_(0x007FEA40, short)
#define normal_ring_fade_val	VAR_U_(0x007FEA28, short)
#define normal_ring_fade_dir	VAR_U_(0x007FEA46, short)
#define combine_type_flag	VAR_U_(0x007FF020, char)
#define seperate_type_flag	VAR_U_(0x007FEA1A, char)
#define combine_obj1	VAR_U_(0x007FEA34, long)
#define combine_obj2	VAR_U_(0x007FEA30, long)
#define friggrimmer	VAR_U_(0x007FEA14, char)
#define friggrimmer2	VAR_U_(0x007FEA13, char)
#define pcbright	VAR_U_(0x004AE060, long)
#define xoffset	VAR_U_(0x007FE9CC, long)
#define yoffset	VAR_U_(0x007FEA2C, long)
#define current_ammo_type	VAR_U_(0x007FEA3C, char*)
#define CurrentPistolsAmmoType	VAR_U_(0x004BF3B0, char)
#define CurrentUziAmmoType	VAR_U_(0x004BF3BB, char)
#define CurrentRevolverAmmoType	VAR_U_(0x004BF3B1, char)
#define CurrentShotGunAmmoType	VAR_U_(0x004BF3B2, char)
#define CurrentGrenadeGunAmmoType	VAR_U_(0x004BF3A4, char)
#define CurrentCrossBowAmmoType	VAR_U_(0x004BF3C6, char)
#define current_selected_option	VAR_U_(0x007FEA1B, uchar)
#define StashedCurrentPistolsAmmoType	VAR_U_(0x004BF3BC, char)
#define StashedCurrentUziAmmoType	VAR_U_(0x004BF3A5, char)
#define StashedCurrentRevolverAmmoType	VAR_U_(0x004BF3C7, char)
#define StashedCurrentShotGunAmmoType	VAR_U_(0x004BF3C2, char)
#define StashedCurrentGrenadeGunAmmoType	VAR_U_(0x004BF3BA, char)
#define StashedCurrentCrossBowAmmoType	VAR_U_(0x004BF3BD, char)
#define Stashedcurrent_selected_option	VAR_U_(0x007FEA4D, char)
#define menu_active	VAR_U_(0x007FE9C8, char)
#define ammo_active	VAR_U_(0x007FEA42, char)
#define num_ammo_slots	VAR_U_(0x007FE9D0, char)
#define oldLaraBusy	VAR_U_(0x007FE9C0, char)
#define OBJLIST_SPACING	VAR_U_(0x007FE9BC, long)
#define inventry_xpos	VAR_U_(0x004BF3D0, short)
#define inventry_ypos	VAR_U_(0x004BF3D2, short)
#define InventoryActive	VAR_U_(0x004BF3C8, long)
#define GnFrameCounter	VAR_U_(0x007E71DC, long)
#define VC_InCut	VAR_U_(0x007FE288, char)
#define FXType	VAR_U_(0x007FE7E0, short)
#define OnObject	VAR_U_(0x007FE200, long)
#define FootPrintNum	VAR_U_(0x008010C0, long)
#define PickupY	VAR_U_(0x007FD20C, short)
#define PickupX	VAR_U_(0x007FD20E, short)
#define PickupVel	VAR_U_(0x007FD210, short)
#define CurrentPickup	VAR_U_(0x007FD212, short)


#define SmashedMeshRoom	ARRAY_(0x007FE360, short, [16])
#define SmashedMesh	ARRAY_(0x007FE7A0, MESH_INFO*, [16])
#define keymap	ARRAY_(0x007542EC, char, [256])
#define lara_control_routines (*(void(__cdecl*(*)[118])(ITEM_INFO*, COLL_INFO*)) 0x004AD9C8)
#define lara_collision_routines (*(void(__cdecl*(*)[118])(ITEM_INFO*, COLL_INFO*)) 0x004ADBA0)
#define static_objects	ARRAY_(0x005333C0, STATIC_INFO, [60])
#define flip_stats	ARRAY_(0x007FE300, long, [10])
#define Lightning	ARRAY_(0x007FFB20, LIGHTNING_STRUCT, [16])
#define dynamics	ARRAY_(0x00804860, DYNAMIC, [32])
#define w2v_matrix	ARRAY_(0x00753CC8, long, [12])
#define TrainObjTable	ARRAY_(0x004AFF9C, short, [512])
#define LaraNodeAmbient	ARRAY_(0x0080E9F0, long, [2])
#define sfx_frequencies	ARRAY_(0x004B38A0, long, [3])
#define GermanKeyboard	ARRAY_(0x004B2BF4, char*, [272])
#define KeyboardButtons	ARRAY_(0x004B3034, char*, [272])
#define layout	ARRAY_(0x004B2BAC, short, [2][18])
#define fmv_to_play	ARRAY_(0x004BF660, char, [2])
#define gfResidentCut	ARRAY_(0x007FD254, char, [4])
#define	LightningRGBs	ARRAY_(0x007FE130, ushort, [3])
#define LightningRGB	ARRAY_(0x007FD2F8, ushort, [3])
#define gfMips	ARRAY_(0x007FD280, char, [8])
#define inventry_objects_list	ARRAY_(0x004AE070, INVOBJ, [119])
#define lara_matrices	ARRAY_(0x0080E720, long, [180])
#define lara_joint_matrices	ARRAY_(0x0080EA00, long, [180])
#define LaraNodeUnderwater	ARRAY_(0x0080E700, uchar, [15])
#define cutseq_meshswapbits	ARRAY_(0x007F4F80, ulong, [10])
#define cutseq_meshbits	ARRAY_(0x007F4F40, ulong, [10])
#define cutseq_control_routines	ARRAY_(0x004B01B0, CUTSEQ_ROUTINES, [31])
#define actor_pnodes	ARRAY_(0x007E7200, PACKNODE*, [10])
#define temp_rotation_buffer	ARRAY_(0x007E7240, short, [160])
#define duff_item	ARRAY_(0x007E7380, ITEM_INFO, [10])
#define old_status_flags	ARRAY_(0x007F4FC0, char, [16])
#define hairs	ARRAY_(0x0080E160, HAIR_STRUCT, [2][7])
#define first_hair	ARRAY_(0x0080E140, long, [2])
#define SortList	ARRAY_(0x00660C94, SORTLIST*, [16384])
#define ScratchVertNums	ARRAY_(0x0080E320, char, [40][12])
#define HairRotScratchVertNums	ARRAY_(0x004AD6D4, char, [5][12])
#define IMstack	ARRAY_(0x007FD320, long, [768])
#define vert_wibble_table	ARRAY_(0x00535520, float, [32])
#define WaterTable	ARRAY_(0x00533B1C, WATERTAB, [22][64])
#define FogBulbs	ARRAY_(0x0052A350, FOGBULB_STRUCT, [20])
#define no_rotation	ARRAY_(0x004BF630, short, [12])
#define rings	ARRAY_(0x007FEA20, RINGME*, [2])
#define options_table	ARRAY_(0x004AE9BC, short, [120])
#define ammo_object_list	ARRAY_(0x007FEA00, AMMOLIST, [3])
#define current_options	ARRAY_(0x007FE9E0, MENUTHANG, [3])
#define FootPrint	ARRAY_(0x008010E0, FOOTPRINT, [32])
#define CollidedItems	ARRAY_(0x00804F80, ITEM_INFO*, [256])
#define CollidedStatics	ARRAY_(0x00805380, MESH_INFO*, [128])	//not sure about the size here
#define RopeList	ARRAY_(0x007FB4C0, ROPE_STRUCT, [5])
#define pickups	ARRAY_(0x007FD220, DISPLAYPU, [8])

#define NO_HEIGHT -32512
#define NO_ITEM	-1