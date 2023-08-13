# Roteiro de estudos para a primeira semana

Atividades avaliativas (Provas, na nomenclatura do LoP) serão disponibilizadas no LoP de acordo com o assunto sendo abordado, os prazos de cada atividade serão acordados a medida que as atividades são executadas. Para tal, é importante a troca de ideias e discussões no servidor do Discord e Sigaa, bem como consultar o material de apoio à disciplina.

Como na primeira semana você ainda está conhecendo o ambiente, a atividade será apenas em caráter de teste e experimentação. A partir da semana seguinte, as provas no LoP passarão a contar como nota da avaliação. Por isso, procure se familiarizar logo com o sistema. Para isso, use o tutorial do aluno para entender como usar o básico do sistema: [https://juliocpmelo.github.io/lop_tutorial_2020/](https://juliocpmelo.github.io/lop_tutorial_2020/)

## Configuração inicial

1. Entre no servidor do Discord da Turma ITP através do link disponibilizado pelo professor
2. Altere seu apelido no Discord para um nome que possamos te reconhecer. Por exemplo, ao invés de “tatchindobarato”, use seu nome verdadeiro.
3. Faça seu cadastro no Sistema LoP (o LoP é um sistema de correção automática de questões de programação desenvolvido por pesquisadores da UFRN): [https://lop.natalnet.br/](https://lop.natalnet.br/)
4. Entre no LoP e solicite a participação em turma a partir de um código que o professor de sua turma fornecerá.

## Material da primeira semana

### Aulas para assistir

- Como começar a programar em C: set-up básico (5 min)

	Neste vídeo apresento um pouco sobre o ambiente de programação. Não costumo programar no Windows, mas aparentemente muitos gostam do VS Code ou Sublime (orientações para esses constam no final deste documento). São várias as opções, experimentem outras ao longo do curso para ver com qual se sentem mais confortáveis de programar.

	[https://www.youtube.com/watch?v=f6B4TguVwgg](https://www.youtube.com/watch?v=f6B4TguVwgg)

- O que são algoritmos (4 min)

	[https://www.youtube.com/watch?v=RoIY_vEYglo](https://www.youtube.com/watch?v=RoIY_vEYglo)

- Como os dados e os programas são representados no compuador (15 min)

	[https://www.youtube.com/watch?v=U07IS2Sn60g](https://www.youtube.com/watch?v=U07IS2Sn60g)

- Começando a programar em C (8 min)

	[https://www.youtube.com/watch?v=U5U4rVlNIT0](https://www.youtube.com/watch?v=U5U4rVlNIT0)

- Declaração de variáveis em C (16 min)

	[https://www.youtube.com/watch?v=thYMjKMvSCM](https://www.youtube.com/watch?v=thYMjKMvSCM)

- Entrada e saída de dados em C (16 min)

	[https://www.youtube.com/watch?v=FnPYq49JBX4](https://www.youtube.com/watch?v=FnPYq49JBX4)

- Expressões em C: operadores e chamadas de funções (32 min)

	[https://www.youtube.com/watch?v=l59rm4-SA40](https://www.youtube.com/watch?v=l59rm4-SA40)

### Leitura complementar:

- Aula 01 do material de André Brito:

	[https://bolder-beret-049.notion.site/Aula-01-Programas-Simples-b8c21e4ce75c4118b4a1ced682037b7f](https://bolder-beret-049.notion.site/Aula-01-Programas-Simples-b8c21e4ce75c4118b4a1ced682037b7f)

- [https://pt.wikibooks.org/wiki/Programar_em_C/Um_programa_em_C](https://pt.wikibooks.org/wiki/Programar_em_C/Um_programa_em_C)
- [https://pt.wikibooks.org/wiki/Programar_em_C/Vari%C3%A1veis](https://pt.wikibooks.org/wiki/Programar_em_C/Vari%C3%A1veis)
- [https://pt.wikibooks.org/wiki/Programar_em_C/Tipos_de_dados](https://pt.wikibooks.org/wiki/Programar_em_C/Tipos_de_dados)

## Configuração do ambiente de programação

Esses materiais adicionais vão ajudar a conhecer e configurar os principais ambientes de desenvolvimento que podem ser utilizados ao longo do curso. É uma excelente maneira de aprender um pouco mais sobre como montar uma estação de trabalho para o desenvolvimento de programas.

Embora o ambiente de submissão das questões seja por sistemas online como o LoP, é importante que você escolha e configure um ambiente de desenvolvimento que melhor se adeque às suas necessidades. Abaixo segue uma lista com algumas possibilidades. Fique à vontade para explorar outras ferramentas (se possível, compartilhe com a turma no Discord).

Como sugestão de editor de código, destacamos o uso do VS Code ou o Sublime. Para aqueles que usam Windows, uma boa sugestão de ambiente de desenvolvimento é usar o Windows Linux Subsystem [https://learn.microsoft.com/pt-br/windows/wsl/install](https://learn.microsoft.com/pt-br/windows/wsl/install) . Nele, você poderá trabalhar com o Linux, mesmo estando no Windows.

Segue abaixo links para configuração de algumas dos ambientes de desenvolvimento no seu computador:

### VS Code

1. No Windows:

	- [https://code.visualstudio.com/docs/cpp/config-wsl](https://code.visualstudio.com/docs/cpp/config-wsl)

	Esse tutorial é de C++ mas a execução em C é similar. Você só precisa executar o tutorial até o passo Executando no WSL e Instalar a extensão Microsoft C/C++ extension [https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) . Depois você pode compilar usando o terminal através do comando gcc <arquivo>.c (ex: gcc main.c, ou gcc ./src/main.c se estiver na pasta src) e executar com o comando ./a.out. Use o wsl para programar/indentar/autocompletar e o terminal para compilar e executar.

2. No Linux (apos instalar o gcc) 

	- [https://www.youtube.com/watch?v=QbWe-qHEOfc](https://www.youtube.com/watch?v=QbWe-qHEOfc)

### Sublime

Configurando Sublime Text para compilação de programas em C

1. No windows:

	- [https://www.youtube.com/watch?v=bACxGtkzpX0](https://www.youtube.com/watch?v=bACxGtkzpX0). Veja que essa opção não usa WSL, assim ela é realmente não recomendada!

2. No Linux:

	- [https://www.youtube.com/watch?v=RQNd9wwARMI](https://www.youtube.com/watch?v=RQNd9wwARMI)

### Plataformas de desenvolvimento online

- Online gdb: https://www.onlinegdb.com/about
- Repl.it: https://www.youtube.com/watch?v=b_Qp21HV02U
- gitpod.io (freeware): https://www.gitpod.io/ 

## Terminal Linux

Sugerimos fortemente que você utilize o Linux como sistema de trabalho durante a disciplina. O uso do Linux em disciplinas iniciais do curso do BTI / BCC / BES irá te ajudar a se familiarizar com o ambiente, quando este for necessário em disciplinas mais avançadas.

Porém, o uso do Linux na disciplina de ITP não requer que você remova o Windows de seu computador. Além da opção de dual-boot, há a possibilidade de instalar o Windows Linux Subsystem (recomendada). Para instalá-lo, junto com o compilador GCC, você pode consultar também o link (em inglês):

- [https://www.pragimtech.com/blog/c-programming/install-c-compiler-in-linux-windows-subsystem-for-linux/](https://www.pragimtech.com/blog/c-programming/install-c-compiler-in-linux-windows-subsystem-for-linux/)

Segue algumas dicas do uso do terminal Linux:

- Instalando e usando gcc no terminal: [https://www.mundodoshackers.com.br/como-instalar-o-gcc-no-linux-ubuntu](https://www.mundodoshackers.com.br/como-instalar-o-gcc-no-linux-ubuntu#:~:text=Aguarde%20o%20fim%20da%20instala%C3%A7%C3%A3o,apt%2Dget%20install%20g%2B%2B%20.)

- Vídeo aula do prof. Leonardo Bezerra (IMD/UFRN): [https://leobezerra.github.io/minicurso-unix/html/](https://leobezerra.github.io/minicurso-unix/html/)

- Básico (em português): [https://marquesfernandes.com/self/como-comecar-a-usar-a-linha-de-comando-terminal-no-linux-tutorial-para-iniciantes/](https://marquesfernandes.com/self/como-comecar-a-usar-a-linha-de-comando-terminal-no-linux-tutorial-para-iniciantes/)

- Um pouco mais do que o básico (em inglês): [https://linuxconfig.org/linux-command-line-tutorial](https://linuxconfig.org/linux-command-line-tutorial)
