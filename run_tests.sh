#/bin/sh
./a.out < test.txt > dummy.txt
sed '/Enter/d; /process/d' dummy.txt > results.txt
rm dummy.txt 