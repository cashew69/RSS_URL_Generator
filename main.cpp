#include <string.h>
#include <iostream>
using namespace std;

int youtube_pl()
{
	cout <<"Paste the YouTube_Playlist Link: " << endl;
	
	// Take any string
	string url;
	cin >> url ;
	
	//Variable for knowing the exact char count of ID
	int count;

	count = url.length() ;
	count = count - 34;

	// Copy characters of url (starting
	// from position 33 to x=32+24)
	string r = url.substr(34, count);

	// prints the result
	cout << "RSS link: " <<"https://www.youtube.com/feeds/videos.xml?playlist_id="<<r << endl;

	return 0;
//copy

}

int youtube_ch()
{
	cout <<"Paste The Channel Link: " << endl;
	// Take any string
	string url;
	cin >> url ;

	
	//variable for knowing the exact char count of ID
	int count;

	count = url.length() ;
	count = count - 32;

	// Copy characters of url (starting
	// from position 33 to x=32+24)
	string r = url.substr(32, count);

	// prints the result
	cout << "RSS link: " <<"https://www.youtube.com/feeds/videos.xml?channel_id="<<r << endl;

	return 0;
}
int twitter()
{
	cout << "Enter username (without '@'): " << endl;
	
	string username;
	cin >> username;
	
	//count variable for if condition
	int count;

	string at = username.substr(0, 1); //puts first charachter in at.
	//Test to remove @.
	if (at != "@"){
		cout <<"RSS link: "<< "https://nitter.net/" <<username<<"/rss"<< endl;
	}else{ 	count = username.length();
		count = count - 1;
		username = username.substr(1, count);
		cout <<"RSS link: " <<"https://nitter.net/" <<username<<"/rss"<< endl;
	}
	return 0;
}

int main(){

	cout << "(1)YouTube Channel, (2)YouTube Playlist, (3)Twitter" << endl << "Enter the number" << endl;

	int choice;
	cin >> choice;

	/* puts number entered by user in 'choice' variabl */
	
	switch(choice){
		case 1:
			youtube_ch();
			break;
		case 2:
			youtube_pl();
			break;
		case 3:
			twitter();
			break;
		default:
			cout <<"Please Enter the number associated with your choice" << endl;
			main();
			break;
	}
	
	return 0;
}
