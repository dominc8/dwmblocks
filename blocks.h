//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/        /*Update Interval*/    /*Update Signal*/
//    {"", "cat ~/.pacupdate | sed /📦0/d",                                 0,        9},

      {"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",    30,        0},

      {"", "~/.config/statusbar/volume",                                    1,        0},

//    {"☀", "xbacklight | sed 's/\\..*//'",                                 0,        11},

      {"", "~/.config/statusbar/battery",                                   5,        0},

//    {"🌡", "sensors | awk '/^temp1:/{print $2}'"                           5,        0},

      {"", "date +%H:%M",                                                   5,        0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

