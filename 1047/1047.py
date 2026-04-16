hi, mi, hf, mf = map(int, input().split())
total = abs((hi * 60 + mi) - (hf * 60 + mf))

if hi == hf and mi == mf:
    horas = 24
    minutos = 0
elif hi >= hf and mi >= mf:
    horas = int((1440 - total) / 60)
    minutos = (1440 - total) % 60
else:
    horas = int(total / 60)
    minutos = total % 60

print(f"O JOGO DUROU {horas} HORA(S) E {minutos} MINUTO(S)")
