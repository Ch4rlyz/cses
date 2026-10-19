# Leemos la cadena de ADN directamente con input()
s = input()
 
max_len = 1
curr_len = 1
 
# Recorremos la cadena carácter por carácter a partir del segundo
for i in range(1, len(s)):
    # Si el carácter actual es igual al anterior, aumentamos la racha
    if s[i] == s[i - 1]:
        curr_len += 1
    else:
        # Si cambió, guardamos el máximo alcanzado hasta ahora
        if curr_len > max_len:
            max_len = curr_len
        # Reiniciamos la racha actual
        curr_len = 1
 
# Comprobamos la última racha al terminar el ciclo
if curr_len > max_len:
    max_len = curr_len
 
print(max_len)
