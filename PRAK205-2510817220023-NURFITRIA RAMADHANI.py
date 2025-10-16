import math

def alas(a,b):
    c = math.sqrt((b**2)-(a**2))
    return c
    
def keliling(a,b,c):
    k = a+b+c
    return k
    
def luas(a,c):
    l = (a*c)/2
    return l
    
a,b = map(float,input().split())
c = alas(a,b)  
print(f"Alas = {alas(a,b):.0f} cm")
print(f"Tinggi {a:.0f} cm")
print(f"Keliling = {keliling(a,b,c):.0f} cm")
print(f"Luas = {luas(a,c):.0f} cm^2")
print()
a = float(input())
b = float(input())
c = alas(a,b)  
print(f"Alas = {alas(a,b):.0f} cm")
print(f"Tinggi {a:.0f} cm")
print(f"Keliling = {keliling(a,b,c):.0f} cm")
print(f"Luas = {luas(a,c):.0f} cm^2")