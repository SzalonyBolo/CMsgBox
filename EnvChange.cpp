#include <stdlib.h>
#include <iostream>
#include <fstream>

extern "C" int MakeSomeNoise() {
  //set new shell environmental variable using putenv
  const char Varname[]="TMP";
  const char VarValue[]="Hello World";
  
  setenv(Varname, VarValue, true);

  std::cout << VarValue << std::endl;

  std::ofstream outfile (Varname);
  outfile << VarValue << std::endl;
  outfile.close();

  return 0;
}