#!bin/bash

apt update && apt upgarde -y
pkg install build-essential

g++ main.cpp -o timer 

./timer 
