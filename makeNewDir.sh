#! /usr/bin/bash

if [ -z $1 ]; then
	echo "Please input both a new directory and a source directory"
	exit 1
fi
if [ -z $2 ]; then
	echo "Please input both a new directory and a source directory"
	exit 1
fi

mkdir -p $2/.vscode
cp $1/.vscode/* $2/.vscode/

for file in "$2/.vscode/"*; do
	sed -i -e "s/$1/$2/g" $file
done


