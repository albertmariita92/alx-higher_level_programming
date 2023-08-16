#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    multiplelist = my_list[:]
    for count, i in enumerate(my_list):
        if i % 2 == 0:
            multiplelist[count] = True
        else:
            multiplelist[count] = False
    return(multiplelist)
