#!/bin/bash

sudo apt-get update
sudo apt-get install git
cd ./dont_ivs_yourself/src || exit
sudo apt-get install qt6-base-dev
sudo apt --fix-broken install
sudo apt-get install qt6-base-dev
sudo dpkg -i calculator-1.0-Alpha-Linux.deb