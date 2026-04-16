while True:
    try:
        senha = input()
        # uso do any : Se algum item is TRUE, entao TRUE.
        # detalhe: isalnum valida acentos..
        if (
            any(c.isupper() for c in senha)
            and any(c.islower() for c in senha)
            and any(c.isdigit() for c in senha)
            and senha.isalnum()
            and 6 <= len(senha) <= 32
        ):
            print("Senha valida.")
        else:
            print("Senha invalida.")

    except EOFError:
        break

