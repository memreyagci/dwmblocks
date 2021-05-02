//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		    /*Update Interval*/	/*Update Signal*/
	{"",        "sb-memory",	    10,		            1},
	{"",        "sb-mail",	        0,  	            2},
	{"",        "sb-rss",           0,  	            11},
	{"",        "sb-internet",	    5,		            4},
	{"",        "sb-volume",	    0,		            10},
	{"",        "sb-brightness",    0,		            5},
	{"",        "sb-battery",	    20,		            3},
	{"",        "sb-date",	        5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
