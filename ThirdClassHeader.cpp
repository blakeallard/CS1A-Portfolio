#include "header.h"

/*****************************************************************
* FUNCTION OutputClassHeader
*----------------------------------------------------------------
* This function receives an assignment name, type
* and number then outputs the appropriate class header -
* returns nothing.
*
*----------------------------------------------------------------
* PRE-CONDITIONS
* The following parameters need to have a defined value
* prior to calling the function:
* asName: Assignment Name
* asNum : Assignment Number
* asType: Assignment Type ==> THIS SHOULD CONTAIN:
* 'L' for Labs
* 'A' for Assignments
*
* POST-CONDITIONS
* This function will output the class heading.
* <Post-conditions are the changed outputs either
* passed by value or by reference OR anything affected
* by the function>
******************************************************************/

string OutputClassHeader(string asName,        // IN - assignment Name
                         int    asNum,         // IN - assignment number
                         char   asType)        // IN - assignment type
                                               // 'L' = Lab
                                               // 'A' = Assignment
{

	/**************************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------------
	 * FORMATTING - used for setw
	 * -----------------------------------------------------------------------
	 * TITLE_COL : the first column that displays headings for the data
	 **************************************************************************/

	 const short TITLE_COL = 13;

	 /**************************************************************************
	 * VARIABLES
	 **************************************************************************/

	 ostringstream outOss;
	 string asStr;       // PROC & OUT  - type of assignment (LAB, ASSIGN, etc.)
	 short  asNumCol;    // CALC & FORM - column width for the assignment number
	                     //               specific to the type of assignment

	 /**************************************************************************
	 * PROCESSING: 1. Assigns the asStr( assignment string) based on the
	 * AS_TYPE (assignment type).
	 * 2. Assigns the asNumCol(assignment column width for the
	 * assignment number). The setw will format appropriately
	 * based on if this is a lab 'L' or assignment 'A’.
	 **************************************************************************/

	 asStr = "ASSIGNMENT";

	 if (toupper(asType) == 'L')
	 {
		 asStr = "LAB";
	 }

	 asStr += " #";

	 asNumCol = TITLE_COL - asStr.length();

	 /**************************************************************************
	 * OUTPUT - the class heading table
	 *
	 * ********************************************************************
	 * * PROGRAMMED BY : Blake Allard & Jacob Espinosa
	 * * CLASS         : CS1A
	 * * SECTION       : MW - 8am
	 * * LAB #14       : Rock, Paper, Scissors
	 * ********************************************************************
	 *
	 **************************************************************************/

	 outOss << left;
	 outOss << "**************************************************\n";
	 outOss << "* PROGRAMMED BY : Blake Allard & Jacob Espinosa\n";
	 outOss << "* "   << setw(TITLE_COL) << "CLASS"   << " : CS1A\n";
	 outOss << "* "   << setw(TITLE_COL) << "SECTION" << " : MW - 8am\n" ;
	 outOss << "* "   << asStr << setw(asNumCol) << asNum << " : ";
	 outOss << asName << endl;
	 outOss << "**************************************************\n\n";
	 outOss << right;

	 return outOss.str();

}
