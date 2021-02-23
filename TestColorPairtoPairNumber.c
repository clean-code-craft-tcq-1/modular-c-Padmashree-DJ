#include "ColorPair.h"


/**
 ***************************************************************************************************
 * Function Name: GetPairNumberFromColor. 
 * 
 * Function Description: Function to extract the Pair Number from passed Major and Minor colour Pair.
 *
 * \param  colorPair:colorPair which comprises of majorColor and minorColor.
 *         
 * \return  int
 * \retval  PairNumber
 ***************************************************************************************************
 */
int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

/**
 ***************************************************************************************************
 * Function Name: testPairToNumber. 
 * 
 * Function Description: Pair Number Calculated in GetPairNumberFromColor() is checked against the expected Pair number.
 *
 * \param  major: majorColor.
 *         minor: minorColor.
 *         expectedPairNumber: Expected Color Pair number which is derived from 25-Pair color code used in Telecommunications.
 *         
 * \return  void
 * \retval  None
 ***************************************************************************************************
 */
 
void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
