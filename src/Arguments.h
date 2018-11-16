#ifndef __Arguments.h__
#define __Arguments.h__

#include <string>

class Arguments{
public:
  int k;
  string dataset;
  double epsilon;
  string model;
  double T;

  /**
    * Function to get arguments from command line
    *
    * @param argn
    * @param argv
    */
  void getArguments(int argn, char **argv);

  /**
    * Function to print arguments out to command line
    */
  void printArguments();

  /**
    * Print help menu to command line
    */
  void printHelp();

  /**
    Generate file_name from arguments
  */
  std::string generateFileName(std::string type, int param = 0);
};

#endif
