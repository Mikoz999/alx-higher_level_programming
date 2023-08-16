#!/usr/bin/python3
if __name__ == "__main__":
    import sys

    args = sys.argv[1:]
    sum_result = 0

    for arg in args:
        sum_result += int(arg)

    print(sum_result)
