while True:
    try:
        vol, ret = input().split()
        vol = int(vol)
        ret = int(ret)

        numeros = list(map(int, input().split()))

        if vol != ret:
            for n in range(1, vol + 1):
                if n in numeros:
                    continue
                else:
                    print(f"{n}", end=" ")
            print()

        else:
            print("*")

    except EOFError:
        break
