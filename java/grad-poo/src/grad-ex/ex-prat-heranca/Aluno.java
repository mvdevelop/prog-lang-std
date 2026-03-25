// package

public class Aluno extends Pessoa {
    //Atributos    
    private String matricula;
    //Métodos
    public Aluno(String nome, Calendar data_nascimento, long CPF, Endereco endereco){
        super (nome, data_nascimento, CPF, endereco);
    }
}
