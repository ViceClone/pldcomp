#!/bin/sh
execDir=`pwd`
cd $execDir

tempfile=tmp.txt
csvfile=../test/test.csv
file=$1
filename=${file%.*}
fileextension=${file#*.}
echo "**********************************************************************************" > $tempfile
echo "FILE '${file}':\n" >> $tempfile
cat $file >> $tempfile

echo "\n\n*--------------------->gcc Compilation Of ${file}<--------------------*\n">> $tempfile
gcc -c -Wall $file >> $tempfile 2>&1 
returncodegcc=$?
echo "\n\n*--------------------->Compilation Of ${file} To ${filename}.asm<--------------------*\n">> $tempfile
./comp $file>> $tempfile 2>&1
returncode=$?
returncodecomp=$returncode
if [ $returncode -ne 0 ]
then
    echo "$(cat $tempfile)"
    $returncodecomp
    echo "${file};${returncodecomp};${returncodegcc}" >> $csvfile
    rm $tempfile
    exit 1
fi

echo "\nCompilation Successful!\n">> $tempfile
echo "Assembly code is generated to ${filename}.s\n">> $tempfile
echo "*--------------------->Compilation Of ${filename}.asm To ${filename}.o<--------------------*\n">> $tempfile
as -o ${filename}.o ${filename}.asm>> $tempfile 2>&1
returncode=$?
if [ $returncode -ne 0 ]
then
    echo "\nCompilation Failed!">> $tempfile
    echo "$(cat $tempfile)"
    $returncodecomp=1
    echo "${file};${returncodecomp};${returncodegcc}" >> $csvfile
    rm $tempfile
    exit 1
fi
echo "${file};${returncodecomp};${returncodegcc}" >> $csvfile
echo "Compilation Successful!\n">> $tempfile
echo "*--------------------->Compilation Of ${filename}.o To Binary Code a.out<--------------------*\n">> $tempfile
gcc ${filename}.o>> $tempfile 2>&1
returncode=$?
if [ $returncode -ne 0 ]
then
    echo "\nCompilation Failed!">> $tempfile
    echo "$(cat $tempfile)"
    rm $tempfile
    exit 1
fi

echo "Compilation Successful!\n">> $tempfile
echo "*--------------------->Execute a.out<--------------------*\n">> $tempfile
echo "OUTPUT \n-----">> $tempfile
./a.out >> $tempfile
returncode=$?
echo "\n-----\nReturn code of 'a.out': $returncode">> $tempfile
echo "$(cat $tempfile)"
rm $tempfile

