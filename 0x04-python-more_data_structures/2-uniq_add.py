#!/usr/bin/python3
def uniq_add(my_list=[]):
    uniq_num = set(my_list)
    sum_uniq_num = 0
    for numbers in uniq_num:
        sum_uniq_num += numbers
    return sum_uniq_num
