#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Definir os tipos de tokens
#define TOKEN_LOOP "LOOP"
#define TOKEN_VEZES "VEZES"
#define TOKEN_SEQUENCIA "SEQUENCIA"
#define TOKEN_FASES_EPIC "FASES_EPIC"
#define TOKEN_EXPLORE "EXPLORE"
#define TOKEN_PRESENT "PRESENT"
#define TOKEN_INTERACT "INTERACT"
#define TOKEN_CRITIQUE "CRITIQUE"
#define TOKEN_TEMPO "TEMPO"
#define TOKEN_NAVEGAR "NAVEGAR"
#define TOKEN_VISUALIZAR_PDF "VISUALIZAR_PDF"
#define TOKEN_VISUALIZAR_VIDEO "VISUALIZAR_VIDEO"
#define TOKEN_VIDEOCONFERENCIA "VIDEOCONFERENCIA"
#define TOKEN_WHATSAPP_WEB "WHATSAPP_WEB"
#define TOKEN_EMAIL "EMAIL"
#define TOKEN_BROWSER "BROWSER"
#define TOKEN_LINK_PDF "LINK_PDF"
#define TOKEN_LINK_VIDEO "LINK_VIDEO"
#define TOKEN_LINK_VIDEOCONFERENCIA "LINK_VIDEOCONFERENCIA"
#define TOKEN_LINK_WHATSAPP_WEB "LINK_WHATSAPP_WEB"
#define TOKEN_LINK_EMAIL "LINK_EMAIL"
#define TOKEN_WS "WS"  // Espaços em branco (ignorados)

// Função para verificar se um caractere é um espaço em branco
bool is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

// Função para fazer a análise léxica
void lex(char *text) {
    char *token;
    char *delimiter = " ";
    token = strtok(text, delimiter);

    while (token != NULL) {
        if (strcmp(token, "loop") == 0)
        {
            printf("Token: %s\n", TOKEN_LOOP);
        }
        else if (strcmp(token, "vezes") == 0)
        {
            printf("Token: %s\n", TOKEN_VEZES);
        }
        else if (strcmp(token, "sequência") == 0)
        {
            printf("Token: %s\n", TOKEN_SEQUENCIA);
        }
        else if (strcmp(token, "fases_EPIC") == 0)
        {
            printf("Token: %s\n", TOKEN_FASES_EPIC);
        }
        else if (strcmp(token, "Explore") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Present") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Interact") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Critique") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Tempo") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Navegar") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Vizualir PDF") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Vizualir Video") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "videoconferência") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Whatsapp Web") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Email") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Browser") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Link PDF") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Link Video") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Link VideoConferencia") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Link WhatsappWeb") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        else if (strcmp(token, "Link Email") == 0)
        {
            printf("Token: %s\n", TOKEN_EXPLORE);
        }
        // Ignorar espaços em branco
        else if (is_whitespace(token[0])) {
            // Não faz nada, apenas ignora
        } else {
            printf("Token desconhecido: %s\n", token);
        }

        token = strtok(NULL, delimiter);
    }
}

int main() {
    char input_text[] = "loop 2 vezes Explore videoconferência 20_min;";
    lex(input_text);
    return 0;
}
