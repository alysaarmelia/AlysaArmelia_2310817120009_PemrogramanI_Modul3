hari = 0
jam = 0
menit = 0
detik = 0

input_dimasukkan = int(input())

if input_dimasukkan >= 86400:
    hari = input_dimasukkan // 86400
    input_dimasukkan %= 86400

if input_dimasukkan >= 3600:
    jam = input_dimasukkan // 3600
    input_dimasukkan %= 3600

if input_dimasukkan >= 60:
    menit = input_dimasukkan // 60
    input_dimasukkan %= 60

detik = input_dimasukkan
if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")