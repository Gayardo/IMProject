#ifndef __Tools.h__
#define __Tools.h__

#include <iostream>
#include <set>
#include <list>
#include <sstream>
#include <cmath>
#include <queue>
#include <fstream>
#include <string>
#include <cstdio>
#include <functional>
#include <algorithm>
#include <climits>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <map>
#include <deque>
#include <dirent.h>

/**
  * Set of practical helper functions for other classes
  */

/**
  * Function to print a string to the command line in color
  */
  void printInColor(std::string color, std::string txt);


/**
  * Function to convert a timestamp into a readable format
  */
  std::string cleanTime(double t, std::string type="ms");


/**
  * Function to clear lines in the command line
  */
  void clearLines(int l);


/**
  * Function to print the current local time in color
  */
  void printLocalTime(std::string color, std::string name, std::string status);


/**
  * Function to get the local Datetime
  */
  std::string getLocalDatetime();

/**
  * Function to convert a double value into a proper readable string
  */
  std::string properStringDouble(double value);

/**
  * Function to list all the folders in a file
  */
  void listFolderFiles(std::string folder);

#endif
