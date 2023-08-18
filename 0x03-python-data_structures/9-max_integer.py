#!/usr/bin/python3
def max_integer(my_list=[]):
    if not my_list:
        return None
    numbers = sorted(my_list)
    max_value = numbers[-1]
    return max_value
