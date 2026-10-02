n = int(input())
alvo = int(input())
lista = [int(num) for num in input().split()]

pon_esq = 0
pon_dir = n - 1
meio = (pon_dir - pon_esq) // 2
oper = 0

while lista[meio] != alvo:
    if lista[meio] > alvo:
        pon_dir = meio - 1
    else:
        pon_esq = meio + 1

    meio = (pon_dir - pon_esq) // 2 + pon_esq
    oper += 1

print(meio)
print(oper)

# [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]