#pragma once

#define		strcasecmp	_stricmp
#define		strncasecmp	_strnicmp
#define		snprintf(buf,len, format,...) _snprintf_s(buf, len,len, format, __VA_ARGS__)
#define		__func__	__FUNCTION__

#define eInputUp		0
#define eInputDown		1
#define eInputLeft		2
#define eInputRight		3
#define eInputB			4
#define eInputC			5
#define eInputA			6
#define eInputStart		7
#define eInputZ			8
#define eInputY			9
#define eInputX			10
#define eInputMode		11
#define eInput_COUNT	12

extern int		InitDGen(int windowWidth, int windowHeight);
extern int		LoadRom(const char* path);
extern int		Reset();
extern int		Shutdown();

extern void		ShowSDLWindow();
extern void		HideSDLWindow();

extern int		AddBreakpoint(int addr);
extern void		ClearBreakpoints();

extern int		StepInto();
extern int		Resume();
extern int		Break();
extern int		IsDebugging();

extern int		UpdateDGen();

extern int		GetDReg(int index);
extern int		GetAReg(int index);
extern int		GetSR();
extern int		GetCurrentPC();

extern void		SetInputMapping(int input, int mapping);
extern int		GetInputMapping(int input);
