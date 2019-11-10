#pragma once
#include <iostream>
#include <string>

using namespace std;

enum genre
{
	Blues = 0,
	Country,
	Electronic,
	Folk,
	Hip_hop,
	Jazz,
	Latin,
	Pop,
	Rock,
};

typedef struct Song   
{
	char title [64];
	char artist[32];
	char album_name[64];
	int track_number;
	int year_song_released;
	string genre;
} a_song;


