# Aula 2 – Sistemas Operativos (2025)

Este repositório contém exemplos e exercícios práticos usados na Aula 2 de Sistemas Operativos na ULHT.  
Cada pasta mostra código que ilustra conceitos fundamentais como `fork`, `exec`, `wait` e *threads*.

---

## Conteúdo

| Pasta   | Descrição |
|---------|-----------|
| `exec`  | Exemplo básico de uso da família de funções `exec` (como `execl`, `execvp`). Mostra como um processo pode substituir a sua imagem por outro programa. |
| `exec2` | Variante/complemento do exemplo `exec`. Demonstra execução de programas externos com argumentos diferentes ou tratamento de erro em `exec`. |
| `fork`  | Demonstra a criação de processos-filho com `fork()`. Mostra a distinção entre pai e filho e a execução concorrente. |
| `threads` | Exemplo de utilização de *POSIX threads*: criação, execução em paralelo e sincronização com `pthread_join`. |
| `wait`  | Demonstra como o processo pai pode esperar pelos filhos (`wait()`, `waitpid()`) e recolher o código de saída. |
| `basicExample`  | Exemplo simples, um contador temporal até dar time out. |

---

## Como usar

### 1. Fazer **fork** do repositório
1. No GitHub, abre a página do repositório original:  
   [ULHT-SistemasOperativos/Aula2-2025](https://github.com/ULHT-SistemasOperativos/Aula2-2025)  
2. Clica em **Fork** (canto superior direito) para criar uma cópia no teu GitHub pessoal.

### 2. Clonar o fork
Na tua máquina (ou no host remoto), clona o repositório **a partir do teu GitHub**:

```bash
git clone https://github.com/<o_teu_utilizador>/Aula2-2025.git
cd Aula2-2025
Compilar e correr
Cada pasta contém ficheiros .c com exemplos independentes.
Para compilar diretamente com gcc:

bash
Copy code
gcc fork/exemplo_fork.c -o fork/exemplo_fork
./fork/exemplo_fork
Ou, se preferires usar CMake (já existe CMakeLists.txt na raiz):

bash
Copy code
mkdir build && cd build
cmake ..
make
Depois executa o binário gerado em build/.

Notas
Em exec/exec2, garante que o programa alvo existe no sistema ou ajusta o caminho.

Em wait, experimenta lançar múltiplos filhos para ver como o pai os vai recolher.

Nos exemplos de threads, garante que todas as threads são sincronizadas com pthread_join para evitar terminação prematura.
