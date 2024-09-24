#!/bin/bash
echo "Building..."
arduino-cli compile -b arduino:avr:uno .
