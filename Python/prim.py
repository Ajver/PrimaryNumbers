import math
import time

# 400,039,777
last_prim = 3

if last_prim < 3:
    last_prim = 3
else:
    if last_prim % 2 == 0:
        last_prim += 1


num = last_prim
is_running = True
timer = time.perf_counter()
while is_running:
    num += 2
    is_prim = True
    for idx in range(3, int(math.sqrt(num) + 1)):
        if num % idx == 0:
            is_prim = False
            break

    if is_prim:
        last_prim = num

    if time.perf_counter() - timer >= 30:
        print(last_prim)
        is_running = False


    #if time.perf_counter() - timer >= 5:
    #    timer += 5
    #    print("Last primary number: " + str(last_prim))


