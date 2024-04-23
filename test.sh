#!/bin/bash
ARG="0 01 001";
./push_swap $ARG | ./checker_Mac $ARG
./push_swap $ARG | ./checker $ARG


