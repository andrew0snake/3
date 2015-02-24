#!/bin/tcsh
echo "git push git@github.com:andrew0snake/3.git"
`cat git_link |awk '{if (NR==3) print}'`

