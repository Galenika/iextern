#pragma once

#include <Windows.h>
#include <TlHelp32.h>
#include <stdint.h>

#include <chrono>
#include <iostream>
#include <istream>


//#define m_dwLocalPlayer 0xC648AC // already sig scanning this shit
//#define m_dwEntityList 0x4C41704 //
DWORD m_hViewModel = 0x32DC;
DWORD m_iViewModelIndex = 0x3210;
DWORD m_flFallbackWear = 0x31B0;
DWORD m_nFallbackPaintKit = 0x31A8;
DWORD m_iItemIDHigh = 0x2FB0; // these offsets are not updating frequently.
DWORD m_iEntityQuality = 0x2F9C;
DWORD m_iItemDefinitionIndex = 0x2F9A;
DWORD m_hActiveWeapon = 0x2EE8;
DWORD m_hMyWeapons = 0x2DE8;
DWORD m_nModelIndex = 0x254;

/*
* offsets between viewmodel indexes located in the sv_precacheinfo list
* these usually change after new knives are introduced to the game
*/
#define precache_bayonet_ct 67 // 64 - 67 //= v_knife_bayonet.mdl - v_knife_default_ct.mdl
#define precache_bayonet_t 43 // 40 - 43 // = v_knife_bayonet.mdl - v_knife_default_t.mdl

enum CS_WeaponID               // id
{
	WEAPON_KNIFE = 42,                  // -2
	WEAPON_KNIFE_T = 59,                // -1
	WEAPON_KNIFE_BAYONET = 500,         // 0
	WEAPON_KNIFE_FLIP = 505,            // 1
	WEAPON_KNIFE_GUT = 506,             // 2
	WEAPON_KNIFE_KARAMBIT = 507,        // 3
	WEAPON_KNIFE_M9_BAYONET = 508,      // 4
	WEAPON_KNIFE_TACTICAL = 509,        // 5 HUNTSMAN
	WEAPON_KNIFE_FALCHION = 512,        // 6
	WEAPON_KNIFE_SURVIVAL_BOWIE = 514,  // 7
	WEAPON_KNIFE_BUTTERFLY = 515,       // 8
	WEAPON_KNIFE_PUSH = 516,            // 9 SHADDOW DAGGERS
	WEAPON_KNIFE_URSUS = 519,           // 10
	WEAPON_KNIFE_GYPSY_JACKKNIFE = 520, // 11 NAVAJA
	WEAPON_KNIFE_STILETTO = 522,        // 12
	WEAPON_KNIFE_WIDOWMAKER = 523       // 13 TALON
};

extern void skinsX( HANDLE csgo, DWORD client, short itemDef, DWORD paintKit );