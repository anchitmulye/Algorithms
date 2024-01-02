#!/usr/bin/bash

PROJECT_HOME=`git rev-parse --show-toplevel`    #project dir
PROJECT_NAME="Algorithms"                       #project name
FILE_NAME=Main.cpp                              #default file path
FLAGS="-Wall -Weffc++ -std=c++23 -save-temps"   #g++ flags

build()
{
    cd $PROJECT_HOME
    mkdir -p Build
    g++ $FLAGS $PROJECT_NAME/$FILE_NAME -o Build/Main
}

run()
{
    cd $PROJECT_HOME
    ./Build/Main
}

if [ $# == 0 ] ; then
    echo "Give file to compile in src dir as args!"
else
    FILE_NAME=$1
    build
    run
fi
