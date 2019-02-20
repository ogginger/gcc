//main.cpp: Entrypoint for the CS52 01 Assignment.

#include "lib/sGetString/sGetString.h"
#include "lib/xSplitString/xSplitString.h"
#include "lib/xConvertStringArrayToIntArray/xConvertStringArrayToIntArray.h"
#include "lib/VectorFloor/VectorFloor.h"
#include "lib/VectorPrint/VectorPrint.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	cout << "Please enter 5 interger values:" << endl;
	string sInput = sGetString();
	vector<string> xStringArray = xSplitString( sInput );
	vector<int> xIntArray = xConvertStringArrayToIntArray( xStringArray );
	int LowestInt = VectorFloor<int>( xIntArray );
	cout << "Lowest: " << LowestInt << endl;
}
