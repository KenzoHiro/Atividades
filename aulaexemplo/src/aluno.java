public class aluno {
    private String nome;
    private String matricula;
    private int idade;

    public aluno(String nome, String matricula, int idade) {
        this.nome = nome;
        this.matricula = matricula;
        setidade(idade);
    }

    public String getnome() {
        return nome;
    }

    public void setnome(String nome) {
        this.nome = nome;
    }

    public String getmatricula() {
        return matricula;
    }

    public void setmatricula(String matricula) {
        this.matricula = matricula;
    }

    public int getidade() {
        return idade;
    }

    public void setidade(int idade) {
        if (idade > 0) {
            this.idade = idade;
        } else {
            System.out.println("Insira outra idade");
        }
    }

    public String toString() {
        return "Nome: " + nome + "\n" +
                "matricula: " + matricula +
                "idade" + idade;
    }
}
