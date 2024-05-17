import os
import random
from personagem import Heroi, Inimigo, InimigoVoador, Dragao
from arma import arco_curto, espada_de_ferro, espada_encantada, arco_longo

MAX_FUGAS = 3
EVENTOS_PARA_DRAGAO = 15

def imprimir_cabecalho():
    os.system("cls" if os.name == "nt" else "clear")
    print("=" * 30)
    print(" TEXT RPG GAME ")
    print("=" * 30)

def main():
    while True:
        imprimir_cabecalho()
        print("Nas asas do destino, o herói se lança,\nCoragem e esperança, na jornada avança.\nAo dragão desafiar, seu valor será testado,\nE nas chamas da luta, seu nome será celebrado.")
        nome = input("É seu nome é ")
        input("\nPressione Enter para começar...")

        os.system("cls" if os.name == "nt" else "clear")
        heroi = Heroi(nome, saude=100)
        heroi.equipar(espada_de_ferro)
        heroi.arma_padrao = espada_de_ferro  

        item_raro_encontrado = False  
        fugas_realizadas = 0
        eventos_realizados = 0
        loop_jogo(heroi, item_raro_encontrado, fugas_realizadas, eventos_realizados)

def loop_jogo(heroi, item_raro_encontrado, fugas_realizadas, eventos_realizados):
    while heroi.saude > 0:
        imprimir_cabecalho()
        print(f"\nVida do herói {heroi.nome}: {heroi.saude}/{heroi.saude_max}")
        print(f"Fugas restantes: {MAX_FUGAS - fugas_realizadas}")
        print(f"Eventos realizados: {eventos_realizados}/{EVENTOS_PARA_DRAGAO}")
        print("Opções:")
        print("1. Avançar na jornada")
        print("2. Sair do jogo")

        escolha = input("Escolha uma opção: ")

        if escolha == "1":
            item_raro_encontrado, fugas_realizadas, eventos_realizados = avancar_jornada(heroi, item_raro_encontrado, fugas_realizadas, eventos_realizados)
        elif escolha == "2":
            print("Obrigado por jogar. Até logo!")
            break
        else:
            print("Opção inválida. Tente novamente.")

    if heroi.saude <= 0:
        imprimir_cabecalho()
        print("Este é o fim da jornada deste herói. O próximo herdeiro de seu legado continuará.")
        input("Pressione Enter para voltar ao menu principal...\n")

def avancar_jornada(heroi, item_raro_encontrado, fugas_realizadas, eventos_realizados):
    print(f"{heroi.nome} avança em sua jornada...\n")
    input("Pressione Enter para continuar...\n")

    eventos_realizados += 1

    if eventos_realizados >= EVENTOS_PARA_DRAGAO:
        dragao = Dragao(nome="Dragão")
        imprimir_cabecalho()
        print(f"após uma jornada árdua, {heroi.nome} finalmente enfrenta seu maior desafio: o Dragão.\nPrepare-se para uma batalha para definir o destino destas terras!\n")
        input("Pressione Enter para enfrentar a batalha contra o Dragão...\n")
        fugas_realizadas = iniciar_batalha(heroi, dragao, fugas_realizadas, pode_fugir=False)
        if heroi.saude > 0:
            tela_vitoria()
        return item_raro_encontrado, fugas_realizadas, eventos_realizados

    chance_evento = random.randint(1, 100)

    if item_raro_encontrado:
        if chance_evento <= 50:
            tipo_inimigo = random.choice(["terrestre", "voador"])
            if tipo_inimigo == "terrestre":
                inimigo = Inimigo(nome="Goblin", saude=100, arma=arco_curto)
                print(f"{heroi.nome} encontrou um {inimigo.nome}!")
            else:
                inimigo = InimigoVoador(nome="Grifo", saude=100, arma=arco_curto)
                print(f"{heroi.nome} encontrou um {inimigo.nome} voador!")
            fugas_realizadas = iniciar_batalha(heroi, inimigo, fugas_realizadas, pode_fugir=True)
        elif chance_evento <= 75:
            os.system("cls" if os.name == "nt" else "clear")
            imprimir_cabecalho()
            print(f"{heroi.nome} encontrou um oásis! Sua saúde foi restaurada.")
            heroi.saude = heroi.saude_max
            heroi.barra_de_saude.atualizar()
            input("Pressione Enter para continuar...\n")
        elif chance_evento <= 90:
            print(f"{heroi.nome} não encontrou nada de interessante.")
    else:
        if chance_evento <= 50:
            tipo_inimigo = random.choice(["terrestre", "voador"])
            if tipo_inimigo == "terrestre":
                inimigo = Inimigo(nome="Goblin", saude=100, arma=arco_curto)
                print(f"{heroi.nome} encontrou um {inimigo.nome}!")
            else:
                inimigo = InimigoVoador(nome="Grifo", saude=100, arma=arco_curto)
                print(f"{heroi.nome} encontrou um {inimigo.nome}!")
            fugas_realizadas = iniciar_batalha(heroi, inimigo, fugas_realizadas, pode_fugir=True)
        elif chance_evento <= 75:
            os.system("cls" if os.name == "nt" else "clear")
            imprimir_cabecalho()
            print(f"{heroi.nome} encontrou um oásis! Sua saúde foi restaurada.")
            heroi.saude = heroi.saude_max
            heroi.barra_de_saude.atualizar()
            input("Pressione Enter para continuar...\n")
        elif chance_evento <= 90:
            print(f"{heroi.nome} não encontrou nada de interessante.")
        elif chance_evento <= 100:
            os.system("cls" if os.name == "nt" else "clear")
            imprimir_cabecalho()
            print(f"{heroi.nome} encontrou um tesouro! {heroi.nome} ganhou uma espada encantada e um arco longo.")
            heroi.equipar(espada_encantada)
            heroi.arma_padrao = espada_encantada
            item_raro_encontrado = True
            input("Pressione Enter para continuar...\n")

    return item_raro_encontrado, fugas_realizadas, eventos_realizados

def iniciar_batalha(heroi, inimigo, fugas_realizadas, pode_fugir):
    print(f"{heroi.nome} entra em batalha contra {inimigo.nome}!")
    input("Pressione Enter para enfrentá-lo...\n")

    os.system("cls" if os.name == "nt" else "clear")
    while heroi.saude > 0 and inimigo.saude > 0:
        print(f"\nVida do Herói {heroi.nome}: {heroi.saude}/{heroi.saude_max}")
        print("\nOpções de Batalha:")
        print("1. Atacar")
        print("2. Trocar de arma")
        if pode_fugir and fugas_realizadas < MAX_FUGAS:
            print("3. Fugir da batalha")

        escolha = input("Escolha uma opção: ")

        if escolha == "1":
            if isinstance(inimigo, InimigoVoador) and heroi.arma.tipo_arma != "longo alcance":
                print(f"O {inimigo.nome} voador desviou do seu ataque!")
                inimigo.atacar(heroi)
            else:
                heroi.atacar(inimigo)
                if inimigo.saude > 0:
                    if isinstance(inimigo, Dragao):
                        escolha_ataque = random.choice(["garras", "baforada"])
                        if escolha_ataque == "garras":
                            inimigo.ataque_garras(heroi)
                        else:
                            inimigo.ataque_baforada(heroi)
                    else:
                        inimigo.atacar(heroi)
        elif escolha == "2":
            print("\nEscolha a arma:")
            if heroi.arma_padrao == espada_encantada:
                print("1. Espada Encantada")
                print("2. Arco Longo")
            else:
                print("1. Espada de Ferro")
                print("2. Arco Curto")

            escolha_arma = input("Escolha uma arma: ")

            if escolha_arma == "1":
                if heroi.arma_padrao == espada_encantada:
                    heroi.equipar(espada_encantada)
                else:
                    heroi.equipar(espada_de_ferro)
            elif escolha_arma == "2":
                if heroi.arma_padrao == espada_encantada:
                    heroi.equipar(arco_longo)
                else:
                    heroi.equipar(arco_curto)
            else:
                print("Opção inválida.")
        elif escolha == "3" and pode_fugir and fugas_realizadas < MAX_FUGAS:
            print(f"{heroi.nome} fugiu da batalha!")
            fugas_realizadas += 1
            input("Pressione Enter para continuar...\n")
            return fugas_realizadas
        else:
            print("Opção inválida.")

        heroi.barra_de_saude.desenhar()
        inimigo.barra_de_saude.desenhar()
        input("Pressione Enter para continuar...\n")

    if inimigo.saude <= 0:
        print(f"{heroi.nome} derrotou o {inimigo.nome}!")
    return fugas_realizadas

def tela_vitoria():
    os.system("cls" if os.name == "nt" else "clear")
    print("====================================")
    print("        VOCÊ DERROTOU O DRAGÃO       ")
    print("  PARABÉNS! VOCÊ COMPLETOU O JOGO!   ")
    print("====================================")
    input("Pressione Enter reiniciar sua jornada...\n")
    main()

if __name__ == "__main__":
    main()