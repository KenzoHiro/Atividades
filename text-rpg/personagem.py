from arma import punhos, arco_curto
from barra_de_saude import BarraDeSaude

class Personagem:
    def __init__(self,
                 nome: str,
                 saude: int,
                 ) -> None:
        self.nome = nome
        self.saude = saude
        self.saude_max = saude

        self.arma = punhos

    def atacar(self, alvo) -> None:
        alvo.saude -= self.arma.dano
        alvo.saude = max(alvo.saude, 0)
        alvo.barra_de_saude.atualizar()
        print(f"\n{self.nome} causou {self.arma.dano} de dano a "
              f"{alvo.nome} com {self.arma.nome}")

class Heroi(Personagem):
    def __init__(self,
                 nome: str,
                 saude: int
                 ) -> None:
        super().__init__(nome=nome, saude=saude)

        self.arma_padrao = self.arma
        self.barra_de_saude = BarraDeSaude(self, cor="verde")

    def equipar(self, arma) -> None:
        self.arma = arma
        print(f"\n{self.nome} equipou uma {self.arma.nome}!")

class Inimigo(Personagem):
    def __init__(self,
                 nome: str,
                 saude: int,
                 arma,
                 ) -> None:
        super().__init__(nome=nome, saude=saude)
        self.arma = punhos

        self.barra_de_saude = BarraDeSaude(self, cor="vermelho")

class InimigoVoador(Inimigo):
    def __init__(self,
                 nome: str,
                 saude: int,
                 arma,
                 ) -> None:
        super().__init__(nome=nome, saude=saude, arma=arma)
        self.arma = arco_curto
        
        self.barra_de_saude = BarraDeSaude(self, cor="amarelo")

class Dragao(Personagem):
    def __init__(self,
                 nome: str,
                 saude: int = 200,
                 ) -> None:
        super().__init__(nome=nome, saude=saude)
        self.barra_de_saude = BarraDeSaude(self, cor="roxo")

    def ataque_garras(self, alvo) -> None:
        dano = 10
        alvo.saude -= dano
        alvo.saude = max(alvo.saude, 0)
        alvo.barra_de_saude.atualizar()
        print(f"\n{self.nome} causou {dano} de dano a {alvo.nome} com Ataque de Garras")

    def ataque_baforada(self, alvo) -> None:
        dano = 30
        alvo.saude -= dano
        alvo.saude = max(alvo.saude, 0)
        alvo.barra_de_saude.atualizar()
        print(f"\n{self.nome} causou {dano} de dano a {alvo.nome} com Ataque de Baforada")