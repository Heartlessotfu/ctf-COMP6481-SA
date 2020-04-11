import random as random
random.seed()
message = ""
with open("0_text.txt") as f:
    message = f.readlines()
"".join(message)
for i in range(10000):
    string = "file"+str(i)
    a = random.randint(0, 300)
    b = random.randint(10000, 80000)
    with open(string, 'x') as f:
        if i != 9485:
            m = "".join(message[a:b])
            f.write(m)
        else:
            print("ADDING IN FLAG INTO FILE", i)
            m = "".join(message[a:b])
            f.write(m)
            f.write("FLAG{n3ddl3_1n_4_h4y$t4ck}")
            f.write(m)
    print("up to:", i)
