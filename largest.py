import numpy
import random 
def largest_number_in_both_lists(a, b): 
    for t in a:
       if binary_search(b, t) >= 0:
          return t

def binary_search(seq, t):
    min = 0
    max = len(seq) - 1
    while True:
       if max < min:
          return -1
       m = (min + max) // 2
       if seq[m] > t:
          min = m + 1
       elif seq[m] < t:
          max = m - 1
       else:
          return m


a = [100, 99, 95]
b = [100, 99, 0]
print largest_number_in_both_lists(a, b)
