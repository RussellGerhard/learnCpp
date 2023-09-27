#! /usr/bin/bash

if [ -z $1 ]; then
	echo "Please input a source directory, a new directory, an old name, and a new name"
	exit 1
fi
if [ -z $2 ]; then
	echo "Please input a source directory, a new directory, an old name, and a new name"
	exit 1
fi
if [ -z $3 ]; then
	echo "Please input a source directory, a new directory, an old name, and a new name"
	exit 1
fi
if [ -z $4 ]; then
	echo "Please input a source directory, a new directory, an old name, and a new name"
	exit 1
fi

mkdir -p $2/.vscode
cp $1/.vscode/* $2/.vscode/

for file in "$2/.vscode/"*; do
	sed -i -e "s/$3/$4/g" $file
done


