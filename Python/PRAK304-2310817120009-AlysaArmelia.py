bilangan = int(input())

if 1 <= bilangan <= 10:
    print("Satuan")

elif bilangan == 0:
    print("Nol")

elif bilangan >= 100:
    print("Anda mengimput Melebihi Limit Bilangan")
    
elif 20 <= bilangan <= 99:
    print("Puluhan")
    
else:
    print("Belasan")