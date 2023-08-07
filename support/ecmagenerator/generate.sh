#!/bin/bash

if [ ! -z $1 ]; then
    scope="$1"
fi

echo "Generating script bindings for the QCAD Application Framework..."

if [ $? -ne 0 ]; then exit $?; fi

VER=`uname -r`
if [ $VER = "20.6.0" ]
then
    # src2srcml binary not compatible with macOS 11
    echo "src2srcml binary not compatible"
else
    sh ./cpp2srcml.sh $scope
    if [ $? -ne 0 ]; then exit $?; fi
fi

sh ./srcml2xml.sh $scope
if [ $? -ne 0 ]; then exit $?; fi
sh ./xml2shell.sh $scope
if [ $? -ne 0 ]; then exit $?; fi
sh ./xml2sharedpointersupport.sh $scope
if [ $? -ne 0 ]; then exit $?; fi
sh ./xml2cpp.sh $scope
if [ $? -ne 0 ]; then exit $?; fi

echo "done"
