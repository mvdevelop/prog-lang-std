
# Singleton.r 

library(R6)

GerenciadorConfig <- R6Class("GerenciadorConfig",
  private = list(
    instancia = NULL,
    config_data = "Configuração Padrão"
  ),
  public = list(
    initialize = function() {
      stop("Use GerenciadorConfig$get_instancia() para acessar esta classe.")
    },
    exibir_config = function() {
      print(private$config_data)
    }
  )
)

# Criando a lógica de instância única fora da classe
GerenciadorConfig$get_instancia <- function() {
  if (is.null(private$instancia)) {
    private$instancia <- GerenciadorConfig$new()
  }
  return(private$instancia)
}

# Uso:
# c1 <- GerenciadorConfig$get_instancia()
# c1$exibir_config()
