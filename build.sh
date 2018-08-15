#! /bin/bash
#
# Build script for cuptane. Gets dependencies, builds tuf, and then builds
# cuptane implementation and tests.

# Build TUF.

function buildtuf {
  cd rust-tuf;
  cargo build;
  cd ..;
}


# Ask to build TUF
echo "Do you want to build TUF?"
select yn in "Yes" "No"; do
    case $yn in
        Yes ) buildtuf; break;;
        No ) break;;
    esac
done

# Build Uptane source libs
cd src;

gcc -c -ansi primary-full.c -o primary-full.o # Builds full primary
