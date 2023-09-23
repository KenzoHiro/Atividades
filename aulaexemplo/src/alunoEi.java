public class alunoEi extends aluno {
    public String responsavel;

    public alunoEi(String nome, String matricula, int idade, String responsavel) {
        super(nome,matricula,idade);
        this.responsavel = responsavel;
        setidade(idade);
    }

    public String getresponsavel() {
        return responsavel;
    }

    public void setresponsavel(String responsavel) {
        this.responsavel = responsavel;
    }

    @Override
    public void setidade(int idade) {
        if (idade >= 4 && idade < 7) {
            super.setidade(idade);
        } else {
            System.out.println("Insira outra idade");
        }
    }

    @Override
    public String toString() {
        return super.toString() + "\n" +
                "Responsável: " + responsavel;
    }
}
