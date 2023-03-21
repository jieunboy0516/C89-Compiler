#include <map>
#include <string>

/* Token kinds.  */
#ifndef DATATYPES
# define DATATYPES
  enum DataType
  {
    INT,
    DOUBLE,
    CHAR,
    AUTO

  };

// std::ostream& operator<<(std::ostream& os, DataType token){
//     static std::map<DataType, std::string> stringRep;
//     //Map to string representation
//     if(stringRep.size() == 0){
//         stringRep[INT] = "int";
//         stringRep[DOUBLE] = "double";
//         stringRep[CHAR] = "char";
//         stringRep[AUTO] = "auto";
//     }
//     return os << stringRep[token];
// }
#endif