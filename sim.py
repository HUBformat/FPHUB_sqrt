x = int("0" + "10000010" + "00100000000000000000000", 2)
x_mantissa = int("00100000000000000000000", 2)
x_HUB = (0b01 << 24) | (x_mantissa << 1) | 0b1  # 2 bits + 23 bits + 1 bit = 26 bits

s = 0b0001

F1 = [0] * 32
F_1 = [0] * 32

F1[0] = int("1111" + "0" * 22, 2)
F_1[0] = int("1111" + "0" * 22, 2)
F1[1] = int("11011" + "0" * 21, 2)
F_1[1] = int("00011" + "0" * 21, 2)


W[1] = (x_HUB << 1) + F1[0]

for i in range(1, 31):
    W_shifted = W[i] << 1
    W_MSB = (W_shifted >> 22) & 0b1111  # Extract the 4 most significant bits (bits 25-22)

    F1[i + 1] = (F1[i] << 1) + (F1[i - 1] >> 31)
    F_1[i + 1] = (F_1[i] << 1) + (F_1[i - 1] >> 31)
    M[i + 1] = (M[i] << 1) + F_1[i]