for i in range(8):
    print("its cool that you following your dreams, you should be proud kid")

pin = int(input("enter pin:"))
pin_tries = 0

while pin != 0000 and pin_tries < 3:
    pin=int(input("wrong try again:"))
if pin == 0000:
    print("thats it")

