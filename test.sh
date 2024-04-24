#!/bin/bash
ARG="9487 -2147483648 0 2147483647 -2147483647";
./push_swap $ARG | ./checker_Mac $ARG
./push_swap $ARG | ./checker $ARG


