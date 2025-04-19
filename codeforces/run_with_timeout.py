import subprocess
import sys
import os

if len(sys.argv) < 3:
    print("Usage: python run_with_timeout.py <timeout> <command>")
    sys.exit(1)

timeout = int(sys.argv[1])
command = sys.argv[2:]

# Open input and output files
input_file = open("input.txt", "r")
output_file = open("output.txt", "w")

try:
    # Run the command with the specified timeout and redirect input/output
    result = subprocess.run(
        command,
        timeout=timeout,
        stdin=input_file,
        stdout=output_file,
        stderr=subprocess.PIPE
    )
    print("Program finished successfully.")
except subprocess.TimeoutExpired:
    print(f"Program exceeded {timeout} seconds and was terminated.")
    sys.exit(1)
finally:
    input_file.close()
    output_file.close()
