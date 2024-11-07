#!/bin/bash

# Prompt the user for a number
echo -e "Enter a non-negative integer:\c"
read number

# Validate input: check if the input is a non-negative integer
if ! [[ "$number" =~ ^[0-9]+$ ]]; then
    echo "Please enter a valid non-negative integer."
    exit 1
fi

# Initialize sum to 0
sum=0

# Loop through each digit in the number
while [ "$number" -gt 0 ]; do
    # Get the last digit
    digit=$((number % 10))
    # Add the last digit to the sum
    sum=$((sum + digit))
    # Remove the last digit from the number
    number=$((number / 10))
done

# Output the result
echo "The sum of the digits is: $sum"

