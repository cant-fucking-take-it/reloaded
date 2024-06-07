#!/bin/sh
ip link | grep -Po "link/ether [0-9a-f]{2}(:[0-9a-f]{2}){5}" | grep -Po "[0-9a-f]{2}(:[0-9a-f]{2}){5}"
