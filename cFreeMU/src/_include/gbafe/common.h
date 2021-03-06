#ifndef GBAFE_COMMON_H
#define GBAFE_COMMON_H

#include <stddef.h>
#include <stdint.h>

enum {
	WEATHER_NONE = 0,
	WEATHER_SNOW = 1,
	WEATHER_SNOWSTORM = 2,
	WEATHER_3 = 3,
	WEATHER_RAIN = 4,
	WEATHER_FLAMES = 5,
	WEATHER_SANDSTORM = 6,
	WEATHER_CLOUDS = 7
};

s32 __divsi3(s32, s32); // 0x80D18FD

#endif // GBAFE_COMMON_H
