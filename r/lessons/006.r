
# 006 - Tabuada

numero <- as.numeric(readline("Digite um número: "))

for (i in 1:10) {
  resultado <- numero * i
  cat(numero, "x", i, "=", resultado, "\n")
}
