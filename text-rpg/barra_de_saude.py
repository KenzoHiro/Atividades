import os

os.system("")

class BarraDeSaude:
    simbolo_restante: str = "█"
    simbolo_perdido: str = "_"
    barreira: str = "|"
    cores: dict = {"vermelho": "\033[91m",
                   "roxo": "\33[95m",
                   "verde": "\033[32m",
                   "amarelo": "\33[93m",
                   "padrao": "\033[0m"
                   }

    def __init__(self,
                 entidade,
                 comprimento: int = 20,
                 esta_colorido: bool = True,
                 cor: str = "") -> None:
        self.entidade = entidade
        self.comprimento = comprimento
        self.valor_maximo = entidade.saude_max
        self.valor_atual = entidade.saude

        self.esta_colorido = esta_colorido
        self.cor = self.cores.get(cor) or self.cores["padrao"]

    def atualizar(self) -> None:
        self.valor_atual = self.entidade.saude

    def desenhar(self) -> None:
        barras_restantes = round(self.valor_atual / self.valor_maximo * self.comprimento)
        barras_perdidas = self.comprimento - barras_restantes
        print(f"Saúde de {self.entidade.nome}: {self.entidade.saude}/{self.entidade.saude_max}")
        print(f"{self.barreira}"
              f"{self.cor if self.esta_colorido else ''}"
              f"{barras_restantes * self.simbolo_restante}"
              f"{barras_perdidas * self.simbolo_perdido}"
              f"{self.cores['padrao'] if self.esta_colorido else ''}"
              f"{self.barreira}")