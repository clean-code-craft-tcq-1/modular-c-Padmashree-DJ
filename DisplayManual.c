#include "ColorPair.h"

/**
 ***************************************************************************************************
 * Function Name: ColorPairManual. 
 * 
 * Function Description: ColorPairManual for 25-pair color code used in Telecommunications.
 *
 * \param  void
 *         
 * \return  void
 * \retval  None
 ***************************************************************************************************
 */
void ColorPairManual(void)
{
    printf("25-PAIR COLOR CODE\n");
    
    for (int pairnumber_i=1; pairnumber_i<=25;pairnumber_i++)
    {
        printf("Pair Number: %d->\t",pairnumber_i);
        /* Get the Color Enums from PairNumber */
        ColorPair colorPair = GetColorFromPairNumber(pairnumber_i);
        printf("Major color: %s\t",MajorColorNames[colorPair.majorColor]);
        printf("Minor color: %s\n",MinorColorNames[colorPair.minorColor]);
    }
}