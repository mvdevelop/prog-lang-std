
# Composite.r

library(R6)

# Componente Base
ElementoGrafico <- R6Class("ElementoGrafico",
  public = list(
    renderizar = function() { stop("Subclasse deve implementar") }
  )
)

# Folha (Objeto Simples)
Ponto <- R6Class("Ponto", inherit = ElementoGrafico,
  public = list(
    renderizar = function() { cat("Desenhando um Ponto\n") }
  )
)

# Composite (Objeto que contém outros objetos)
Grupo <- R6Class("Grupo", inherit = ElementoGrafico,
  public = list(
    filhos = list(),
    adicionar = function(item) { self$filhos <- c(self$filhos, item) },
    renderizar = function() {
      cat("Iniciando Grupo---\n")
      lapply(self$filhos, function(f) f$renderizar())
      cat("---Fim do Grupo\n")
    }
  )
)

# Uso:
# g1 <- Grupo$new()
# g1$adicionar(Ponto$new())
# g1$adicionar(Ponto$new())
# g2 <- Grupo$new()
# g2$adicionar(g1) # Um grupo dentro de outro (Árvore)
# g2$renderizar()

