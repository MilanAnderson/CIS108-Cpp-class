#include <iostream>
#include <vector>
#include "MusicDB.h"
#include "pch.h"
#include <fstream>
#include <conio.h>
#include <string>
#include "Song.h"

using namespace std;

namespace MusicBox
{
	int song_index = 0;
	const int total_songs = 8;
	vector<a_song> songs;
	void load_music()
	{ 
		a_song new_song;


//clearing the songs
		song_index = 0;
//Inporting songs
		ifstream file("saved_music.txt");
		
		int spot = 0;
//End of file
		if (file.peek() == std::ifstream::traits_type::eof())
		{
			// file is empty
			return;
		}
		while(!file.eof())
		{
			for (int index = 0; index < 64; index++)
			{
				new_song.title[index] = '\0';
				new_song.album_name[index] = '\0';
				if (index < 32)
				{
					new_song.artist[index] = '\0';
				}
			}

			file >> new_song.title;
			file >> new_song.artist;
			file >> new_song.album_name;
			file >> new_song.track_number;
			file >> new_song.year_song_released;
			file >> new_song.genre;
			spot++;

			songs.push_back(new_song);
//file is empty
			if (file.peek() == std::ifstream::traits_type::eof())
			{
				break;
			}
		}
		song_index = spot - 1;
		file.close();
	}
	void save_music()
	{
//Exporting songs
		ofstream file("saved_music.txt");
		for (int spot = 0; spot < song_index; spot++)
		{
			file << songs[spot].title;
			file << "\r";
			file << songs[spot].artist;
			file << "\r";
			file << songs[spot].album_name;
			file << "\r";
			file << songs[spot].track_number;
			file << "\r";
			file << songs[spot].year_song_released;
			file << "\r";
			file << songs[spot].genre;
			file << "\r";
		}
		file.close();
	}
	void addnew_song()
	{
		a_song new_song;

		for (int index = 0; index < 64; index++)
		{
			new_song.title[index] = '\0';
			new_song.album_name[index] = '\0';
			if (index < 32)
			{
				new_song.artist[index] = '\0';
			}
		}
		int spot = 0;
		char input = '\0';

// Entering the song title
		cout << "\nPlease enter the title of the song: ";
		while (input != '\r')
		{
// Check to make sure smaller 64
			if (spot > 63)
			{
				cout << "ERROR! Song title is too long. \n";
				cout << "Clearing song information and command \n";
				for (int index = 0; index < 64; index++)
				{
					new_song.title[index] = '\0';
					
				}
				return;
			}
			input = _getch();
// print so we can see it
			cout << input;

			if (input == '\r')
			{
				continue;
			}
			new_song.title[spot] = input;
			spot++;
		}

		spot = 0;
		input = '\0';
		cout << "\nPlease enter the Artist of the song: ";
		while (input != '\r')
		{
			if (spot > 31)
			{
				cout << "ERROR! Song artist is too long. \n";
				cout << "Clearing song information and command \n";
				for (int index = 0; index < 31; index++)
				{
					new_song.artist[index] = '\0';

				}
				return;
			}
			input = _getch();
			cout << input;

			if (input == '\r')
			{
				continue;
			}
			new_song.artist[spot] = input;
			spot++;
		}

		spot = 0;
		input = '\0';
		cout << "\nPlease enter the album_name of the song: ";
		while (input != '\r')
		{
			if (spot > 63)
			{
				cout << "ERROR! album_name is too long. \n";
				cout << "Clearing song information and command \n";
				for (int index = 0; index < 64; index++)
				{
					new_song.album_name[index] = '\0';

				}
				return;
			}
			input = _getch();
			cout << input;

			if (input == '\r')
			{
				continue;
			}
			new_song.album_name[spot] = input;
			spot++;
		}

		cout << "\nPlease enter the track number: ";
		cin >> new_song.track_number;

		cout << "Please enter the year_song_released: ";
		cin >> new_song.year_song_released;

		cout << "Please enter the genre: ";
		cin >> new_song.genre;
	
		song_index++;

		cout << new_song.title << endl;
		cout << new_song.artist << endl;
		cout << new_song.album_name << endl;
		cout << new_song.genre << endl;
		cout << new_song.track_number << endl;
		cout << new_song.year_song_released << endl;

		songs.push_back(new_song);

	} 
// end addnew_song()
	void total_numberofsongs()
	{
		cout << "The music box has " << song_index << " songs.\n";
	}
	void song_information()
	{
		for (int spot = 0; spot < song_index; spot++)
		{
			cout << "Title: " << songs[spot].title << endl;
			cout << "Artist: " << songs[spot].artist << endl;
			cout << "Album name: " << songs[spot].album_name << endl;
			cout << "Track number: " << songs[spot].track_number << endl;
			cout << "Year song released: " << songs[spot].year_song_released << endl;
			cout << "Genre: " << songs[spot].genre << endl;
		}
	}
}

 genre convertStringToGenre (std::string givenGenre)
 {
 //Convert here to lower case
 //Convert genre to lowercase
 //std::transform(genre.begin(), genre.end(), genre.begin(),
	//[] (unsigned char c) 
 //{
 //return std::tolower(c); });

	genre return_value;

 if (givenGenre == "Blues")
 {
 return_value = Blues;
 }
 else if (givenGenre == "Country")
 {
 return_value = Country;
 }
 else if (givenGenre == "Electronic")
 { 
 return_value = Electronic;
 }
 else if (givenGenre == "Folk")
 {
	 return_value = Folk;
 }
 else if (givenGenre == "Hip hop")
 {
	 return_value = Hip_hop;
 }
 else if (givenGenre == "Jazz")
 {
 return_value = Jazz;
 }
 else if (givenGenre == "Latin")
 {
 return_value = Latin;
 }
 else if (givenGenre == "Pop")
 {
 return_value = Pop;
 }
 else if (givenGenre == "Rock")
 {
 return_value = Rock;
 }

 return return_value;

}

 string convertGenreToString(genre givenGenre)
 {
	 std::string return_value;

	 switch (givenGenre)
	 {
		 case Blues:
			 return_value = "Blues";
			 break;
		 case Country:
			 return_value = "Country";
			 break;
		 case Electronic:
			 return_value = "Electronic";
			 break;
		 case Folk:
			 return_value = "Folk";
			 break;
		 case Hip_hop:
			 return_value = "Hip Hop";
			 break;
		 case Jazz:
			 return_value = "Jazz";
			 break;
		 case Latin:
			 return_value = "Latin";
			 break;
		 case Pop:
			 return_value = "Pop";
			 break;
		 case Rock:
			 return_value = "Rock";
			 break;
	 }

	 return return_value;
 }





