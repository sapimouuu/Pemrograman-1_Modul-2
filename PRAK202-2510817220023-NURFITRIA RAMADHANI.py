def angka(x):
    if x.is_integer():
        return int(x)
    else:
        return x

nilai1 = float(input("Masukkan Nilai Pertama : "))
nilai2 = float(input("Masukkan Nilai Kedua : "))
hasil = nilai1 + nilai2
print(f"Hasil dari penjumlahan nilai pertama \"{angka(nilai1)}\" dan nilai kedua \"{angka(nilai2)}\" adalah \"{hasil:.2f}\"")

print()

nilai1 = float(input("Masukkan Nilai Pertama : "))
nilai2 = float(input("Masukkan Nilai Kedua : "))
hasil = nilai1 + nilai2
print(f"Hasil dari penjumlahan nilai pertama \"{angka(nilai1)}\" dan nilai kedua \"{angka(nilai2)}\" adalah \"{hasil:.2f}\"")