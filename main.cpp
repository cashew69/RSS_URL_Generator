#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	cout <<"Paste The Channel Link: " << endl;
	// Take any string
	string url;
	cin >> url ;

	// Copy three characters of url (starting
	// from position 33 to x=32+24)
	string r = url.substr(32, 24);

	// prints the result
	cout << "RSS link: " <<"https://www.youtube.com/feeds/videos.xml?channel_id="<< r << endl;

	return 0;
}
