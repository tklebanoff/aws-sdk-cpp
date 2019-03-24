#!/usr/bin/env python3
import re

with open("/etc/os-release", "r") as f:
    lines = [line for line in f.readlines() if line.startswith("NAME")]
    name = lines[0].split("=")[-1].strip("\n")
    name = re.sub(r'^"|"$', '', name)
    print(name)
