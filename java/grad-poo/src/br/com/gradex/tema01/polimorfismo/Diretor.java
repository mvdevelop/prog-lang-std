// package

 public class Diretor extends Empregado {
   //Métodos   
   public Diretor(String nome, Calendar data_nascimento, long CPF, Endereco endereco) {
        super(nome, data_nascimento, CPF, endereco);    
   }    
   protected void gerarMatricula(){
        matricula = "E-" + UUID.randomUUID( ).toString( );  
   }
}
