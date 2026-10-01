# Calculadora de Minutos para Console
Uma simples Calculadora de Minutos, que pode ser rodada localmente através do terminal

## Instalação
#### Pré-requisitos: 
* Ter instalado o C, versão C17
* Ter instalado o VS Code ou outro editor de código que seja compatível com C

#### Passo a Passo:
1. Vá em "Code" na pasta do repositório no GitHub e clique em "Download ZIP"
2. Após baixar o arquivo ZIP do projeto, vá em seu Gerenciador de Arquivos e extraia "calculadora_min_console.zip"
3. Com o arquivo extraído, abra-o em seu editor de código
4. Abra o arquivo [main.c](main.c)
5. Divirta-se!

Obs.: É necessário que você tenha um editor de código, como o VS Code, instalado para isso.

### Estrutura do Projeto
```
    calculadora_min_console/  
    ├── img/
    │   └── img1.png
    ├── .gitignore 
    ├── LICENSE.md
    ├── README.md
    └── main.c 
```

## Como utilizar?
Ao iniciar o programa com o comando Ctrl+Alt+N, será impresso na tela
```
--------------------------------------
        Calculadora de Minutos
--------------------------------------

Digite 
* Horas: 
```
    
Agora, você deverá inserir o valor das horas no terminal.

Em seguida, será requisitado o valor dos minutos.
```
* Minutos: 
```

ATENÇÃO: o valor dos minutos NÃO pode chegar a 60, pois será gerado um erro!
```
ERRO: Valor de minutos incorreto!
```

Por fim, o programa digitará na tela o valor total de tempo em minutos.
```
Valor Total (em minutos): 
```
### Exemplo
A seguir, trazemos um exemplo do funcionamento da calculadora.
![imagem de exemplo](/img/img1.png)

## Licença
Este projeto está licenciado sob a MIT License - veja o arquivo [LICENSE](/LICENSE) para mais detalhes.  