#!/bin/bash

ClassNameCpp=$1".cpp"
ClassNameHpp=$1".hpp"
Name=$1

#Creating File.cpp and File.hpp

touch $ClassNameCpp $ClassNameHpp

#Filling up File.cpp

echo "#include" '"'$ClassNameHpp'"' > $ClassNameCpp
echo "" >> $ClassNameCpp
echo $1"::"$1\(\) >> $ClassNameCpp
echo { >> $ClassNameCpp
echo "	std::cout << \"Constructor" $1 "called\" << std::endl;" >> $ClassNameCpp
echo } >> $ClassNameCpp
echo "" >> $ClassNameCpp
echo $1"::"$1\($1 "const &obj"\) >> $ClassNameCpp
echo { >> $ClassNameCpp
echo "	*this = obj;" >> $ClassNameCpp
echo "	return ;" >> $ClassNameCpp
echo } >> $ClassNameCpp
echo "" >> $ClassNameCpp
echo $1 "&	"$1"::"operator=\($1 "const &obj"\) >> $ClassNameCpp
echo { >> $ClassNameCpp
echo "	std::cout << \"Assignation operator useless for \" << &obj << std::endl;" >> $ClassNameCpp
echo "	return *this;" >> $ClassNameCpp
echo } >> $ClassNameCpp
echo "" >> $ClassNameCpp
echo $1"::~"$1\(\) >> $ClassNameCpp
echo { >> $ClassNameCpp
echo "	std::cout << \"Destructor" $1 "called\" << std::endl;" >> $ClassNameCpp
echo -n } >> $ClassNameCpp

#Filling up File.hpp

echo -n "#ifndef " > $ClassNameHpp
echo -n $1 | tr '[:lower:]' '[:upper:]' >> $ClassNameHpp
echo "_HPP" >> $ClassNameHpp
echo -n "# define " >> $ClassNameHpp
echo -n $1 | tr '[:lower:]' '[:upper:]' >> $ClassNameHpp
echo "_HPP" >> $ClassNameHpp
echo "" >> $ClassNameHpp
echo "class" $1 >> $ClassNameHpp
echo { >> $ClassNameHpp
echo	"	public :" >> $ClassNameHpp
echo "" >> $ClassNameHpp
echo "	"$1\(\)";" >> $ClassNameHpp
echo "	"$1\($1 "const &obj"\)";" >> $ClassNameHpp
echo "	~"$1\(\)";" >> $ClassNameHpp
echo "" >> $ClassNameHpp
echo "	"$1 "&	operator="\($1 "const &obj"\)";" >> $ClassNameHpp
echo "};" >> $ClassNameHpp
echo "" >> $ClassNameHpp
echo -n "#endif" >> $ClassNameHpp