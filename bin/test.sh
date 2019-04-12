#!/bin/sh
execDir=`pwd`
cd $execDir
echo $execDir
demo=./demo.sh
if [ "$2" != "" ]
then
    logfile=$2
else
    logfile=../test/test.log
fi

csvfile=../test/test.csv
echo "File;CompExitCode;GccExitCode" > $csvfile

echo "*************************" $(date -u) "*************************\n" > $logfile
list=`find ../test -name "*.c"`
for i in $list
do 
    echo "Testing $i"
    ./demo.sh $i >> $logfile
done

rm -rf a.out
find . -type f -name '*.o' -delete
cd `pwd`/../test
find . -type f -name '*.o' -delete