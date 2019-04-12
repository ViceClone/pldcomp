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

echo "*************************" $(date -u) "*************************\n" > $logfile
list=`find ../test -name "*.c"`
for i in $list
do 
    echo "Testing $i"
    ./demo.sh $i >> $logfile
done