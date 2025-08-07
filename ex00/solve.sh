#!/bin/sh

# Create files, directories and the symlink
touch test1 test3 test4 test5
mkdir test0 test2
ln -s test0 test6

# Hardlinking (hardlinking directories doesn't work on my machine)
ln -d test0 ../test0-2
ln -d test2 ../test2-2
ln    test3 ../test3-2
ln    test5 ../test5-2

# file sizes
echo -ne 'aaaa' > test1
echo -ne 'a'    > test3
echo -ne 'aa'   > test4
echo -ne 'a'    > test5

# modification times
touch -t 06012047 test0
touch -t 06012146 test1
touch -t 06012245 test2
touch -t 06012344 test3
touch -t 06012343 test4
touch -t 06012344 test5
touch -t 06012220 test6

# permissions
chmod 'u=rwx,g=x,o=rx'  test0
chmod 'u=rwx,g=x,o=r'   test1
chmod 'u=rx,g=,o=r'     test2
chmod 'u=r,g=,o=r'      test3
chmod 'u=rw,g=r,o=x'    test4
chmod 'u=r,g=,o=r'      test5
chmod 'u=rwx,g=rx,o=rx' test6
