pi = 22/7

def volume(pi,jari_jari,tinggi):
    v = pi*(jari_jari**2)*tinggi
    return v
    
def luas(pi,jari_jari,tinggi):
    l = 2*pi*jari_jari*(jari_jari+tinggi)
    return l
    
def keliling(pi,jari_jari):
    k = 2*pi*jari_jari
    return k

jari_jari = float(input())
tinggi = float(input())
print(f"Volume = {volume(pi,jari_jari,tinggi):.2f}")
print(f"Luas = {luas(pi,jari_jari,tinggi):.2f}")
print(f"Keliling = {keliling(pi,jari_jari):.2f}")

print()

jari_jari,tinggi = map(float,input().split())
print(f"Volume = {volume(pi,jari_jari,tinggi):.2f}")
print(f"Luas = {luas(pi,jari_jari,tinggi):.2f}")
print(f"Keliling = {keliling(pi,jari_jari):.2f}")