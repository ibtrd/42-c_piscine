#!/bin/sh
ifconfig | grep -w ether | cut -c 15-31
