#!/bin/bash
echo "Uploading to the arduino-uno..."
sudo arduino-cli upload -b arduino:avr:uno -p /dev/tty0
