#! /bin/bash
#
# Build script for cuptane. Gets dependencies and then builds
# cuptane implementation and tests.


# Build Uptane source libs
cd src;

gcc -c -std=c89 -pedantic -Werror primary-full.c -o primary-full.o # Builds full primary


# Build tests
cd ../tests;

gcc -c -I../headers/ -std=c89 -pedantic -Werror full-client-updater.c -o full-client-updater.o 

gcc -o full-client-updater full-client-updater.o ../src/primary-full.o
