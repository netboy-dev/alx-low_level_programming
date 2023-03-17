#!/bin/bash
if [ -z "$1" ]; then
    echo "Please provide a filename as the first argument."
    exit 1
fi

if [ ! -f "$1" ]; then
    echo "File not found: $1"
    exit 1
fi

# Run betty to check style and indentation
betty_output=$(betty "$1")

# Check if there are any errors or warnings
if echo "$betty_output" | grep -q "ERROR\|WARNING"; then
    # Output the errors and warnings
    echo "$betty_output"

    # Fix the formatting errors
    sed -i 's/^[[:space:]]*//' "$1" # Remove leading whitespace
    sed -i 's/[[:space:]]*$//' "$1" # Remove trailing whitespace
    sed -i 's/[[:space:]]\+$//' "$1" # Remove trailing tabs
    sed -i 's/\t/    /g' "$1" # Replace tabs with spaces
    sed -i '/^{/{s//\n&/;:a;n;s/^/    /;ba}' "$1" # Add new line before opening brace and indent
    sed -i '/^}$/s/^/    /' "$1" # Indent closing brace

    echo "Code formatting has been updated."
else
    echo "Code is already formatted correctly."
fi