#include "ColorPair.h"

/**
 ***************************************************************************************************
 * Function Name: ColorPairToString. 
 * 
 * Function Description: Function to map the colorPair derived pairNumber via GetColorFromPairNumber() to colorPairNames.
 *
 * \param  colorPair:colorPair which comprises of majorColor and minorColor.
 *         buffer: buffer to hold the colorPairNames.
 *         
 * \return  void
 * \retval  None
 ***************************************************************************************************
 */

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

/**
 ***************************************************************************************************
 * Function Name: GetColorFromPairNumber. 
 * 
 * Function Description: Calculate majorColor and minorColor from pairNumber.
 *
 * \param  pairNumber: pairNumber.
 *                  
 * \return  ColorPair stucture
 * \retval  colorPair
 ***************************************************************************************************
 */
ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMajorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

/**
 ***************************************************************************************************
 * Function Name: testNumberToPair. 
 * 
 * Function Description: Pair Number Calculated in GetPairNumberFromColor() is checked against the expected majorColor and expectedMinor.
 *
 * \param  pairNumber: pairNumber.
 *         expectedMajor: Expected majorColor which is derived from 25-Pair color code used in Telecommunications..
 *         expectedMinor: Expected minorColor which is derived from 25-Pair color code used in Telecommunications.
 *         
 * \return  void
 * \retval  None
 ***************************************************************************************************
 */
void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
