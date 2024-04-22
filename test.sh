#!/bin/bash
ARG="                              1            -1            12     -12   ";
 ./push_swap $ARG
./push_swap $ARG |  wc -l
./push_swap $ARG | ./checker_Mac $ARG
./push_swap $ARG | ./checker $ARG


