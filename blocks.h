//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/        /*Update Interval*/    /*Update Signal*/
//    {"", "cat ~/.pacupdate | sed /📦0/d",                                 0,        9},

      {"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",                                 20,         0},

      {"🌡", "sensors | awk '/^Core 0:/{printf \"%d\", $3} ; /^Core 1:/{printf \"/%d°C\\n\", $3};' ",    15,         0},
      {"", "mpstat 1 1 | awk '/Average/ { print 100 - $12\"\%\" }'",                                        15,         0},
//🌡
//
      {"", "~/.config/statusbar/volume",                                                                1,          0},

//    {"☀", "xbacklight | sed 's/\\..*//'",                                 0,        11},

      {"", "~/.config/statusbar/battery",                                                               5,          0},

      {"", "~/.config/statusbar/internet",                                                              10,         0},

      {"", "date +'%H:%M %d/%b/%Y'",                                                                    5,          0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 2;

