# a script to import all headers to ast_all.h

HEADER=ast_all.h
echo $'#include <iomanip> 
#include <vector>
#include <memory>
#include <string>
#include <cstdlib>
#include <string>
#include <sstream>
#include <list>
#include <map>' >> $HEADER

echo "#ifndef __ALL_HEADERS__" > $HEADER
echo "#define __ALL_HEADERS__" >> $HEADER
for file in ./*.h
do
    echo "#include \"$file\"" >> $HEADER
done
echo "#endif" >> $HEADER



cat $HEADER