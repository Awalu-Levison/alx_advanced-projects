#!/usr/bin/python3


def find_peak(list_of_integers):
    """Find the peak of unsorted integers"""
    if list_of_integers == []:
        return None

    size = len(list_of_integers)
    if size == 0:
        return None
    elif size == 1:
        return list_of_integers[0]
    elif size == 2:
        return max(list_of_integers)

    mid = int(size/2)
    peak = list_of_integers[mid]
    newlist = list_of_integers
    if peak > newlist[mid - 1] and peak > newlist[mid + 1]:
        return peak
    elif peak < newlist[mid - 1]:
        return find_peak(newlist[:mid])
    else:
        return find_peak(newlist[mid + 1:])
