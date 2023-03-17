#!/bin/bash
## Check if the user provided a filename
if [ -z "$1" ]; then
    echo "Please provide a filename as the first argument."
        exit 1
  fi
        # Check if the file exists
        if [ ! -f "$1" ]; then
echo "File not found: $1"
exit 1
 fi
                # Run indent with Betty-style options
  indent -kr -nut -i8 -ts8 -sob -l80 -ss -ncs -cp1 "$1"
