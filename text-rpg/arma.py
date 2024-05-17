class Arma:
    def __init__(self,
                 nome: str,
                 tipo_arma: str,
                 dano: int,
                 ) -> None:
        self.nome = nome
        self.tipo_arma = tipo_arma
        self.dano = dano

espada_de_ferro = Arma(nome="Espada de Ferro",
                       tipo_arma="corte",
                       dano=20,)

arco_curto = Arma(nome="Arco Curto",
                  tipo_arma="longo alcance",
                  dano=10)

punhos = Arma(nome="Punhos",
              tipo_arma="contusão",
              dano=2,)

espada_encantada = Arma(nome="Espada Encantada",
                        tipo_arma="corte",
                        dano=50)

arco_longo = Arma(nome="Arco Longo",
                  tipo_arma="longo alcance",
                  dano=40)