import functions as f
from random import randint
print("Input n")
n=int(input())
p=randint(0,n)+1
b=n-p
print("Number of parallelepipeds: ",p)
print("Number of balls: ",b)
s=f.square(p)
v=f.volume(b)
print("sum_of_parallelepipeds`_surface: {0:9.3f}".format(s))
print("volume_of_balls`: {0:9.3f}".format(v))

