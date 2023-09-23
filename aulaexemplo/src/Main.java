public class Main {
    public static void main(String[] args) throws Exception {
        alunoEi aluno2 = new alunoEi("Maria", "sdhasudh", 4, "Janielson");
        aluno aluno1 = new aluno("kenzo", "asduashduash", 4);

        System.out.println(aluno1.getnome());
        System.out.println(aluno1.getidade());
        System.out.println(aluno1.getmatricula());
        System.out.println(aluno2.getnome());
        System.out.println(aluno2.getidade());
        System.out.println(aluno2.getmatricula());
        System.out.println(aluno2.getresponsavel());
    }
}
