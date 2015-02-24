#!/bin/tcsh
echo "git pull git@github.com:andrew0snake/3.git"
`cat git_link |awk '{if (NR==2) print}'`

