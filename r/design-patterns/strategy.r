
# Strategy.r

library(R6)

# Interface/Classe Base
Normalizacao <- R6Class("Normalizacao",
  public = list(
    executar = function(dados) { stop("Método não implementado") }
  )
)

# Estratégia 1: Min-Max
MinMax <- R6Class("MinMax", inherit = Normalizacao,
  public = list(
    executar = function(dados) {
      return((dados - min(dados)) / (max(dados) - min(dados)))
    }
  )
)

# Estratégia 2: Z-Score
ZScore <- R6Class("ZScore", inherit = Normalizacao,
  public = list(
    executar = function(dados) {
      return((dados - mean(dados)) / sd(dados))
    }
  )
)

# Contexto
ProcessadorDados <- R6Class("ProcessadorDados",
  public = list(
    estrategia = NULL,
    set_estrategia = function(e) { self$estrategia <- e },
    processar = function(d) { self$estrategia$executar(d) }
  )
)

# Uso:
# proc <- ProcessadorDados$new()
# proc$set_estrategia(MinMax$new())
# proc$processar(c(10, 20, 30))
