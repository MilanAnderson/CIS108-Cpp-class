#pragma once
#include <string>
#include "Song.h"

namespace MusicBox
{
	void load_music();
	void save_music();
	void addnew_song();
	void total_numberofsongs();
	void song_information();

	std::string convertGenreToString(genre );
}
