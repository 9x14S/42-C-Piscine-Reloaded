#!/bin/sh

ip addr | grep ether | cut -d' ' -f6
