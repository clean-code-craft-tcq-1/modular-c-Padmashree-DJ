#ifndef COLORCODE_H
#define COLORCODE_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
int numberOfMajorColors;
extern const char* MinorColorNames[];
const int MAX_COLORPAIR_NAME_CHARS;
int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#endif
