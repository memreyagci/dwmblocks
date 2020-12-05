//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		1},
	{"", "newsboat-status",		0,  	            11},
	{"", "internet",			5,		            4},
	{"", "volume",				0,		            10},
	{"", "brightness",			0,		            5},
	{"", "battery",				5,		            3},
	{"", "date-time",			5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
