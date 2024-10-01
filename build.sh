#!/bin/bash
echo "Building..."
sudo arduino-cli compile -b arduino:avr:uno .
