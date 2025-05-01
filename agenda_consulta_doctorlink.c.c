/*
-- Doctor link -- 
- Esse programa será utilizado para agendamento de consultas médicas especializadas;
- O usuário terá 4 opções diferentes para escolher as especialidades, os médicos, as datas e os horarios;
- Será utilizado operadores relacionais (==) e estruturas condicionais (if/else/switch) para validar as escolhas;
- Mostrará um resumo do agendamento e solicitação de confirmação antes de finalizar.
*/

#include <stdio.h>

int main(){
    char nome[50], sobrenome[50], telefone[11]; // armazenamento dos dados do usuário.
    int especialidade, medico, data, horario; //armazenamento das variáveis médicas.
    int consulta, confirmaDados, confirmaConsulta, tentarNovamente = 1; //armazenamento das variáveis para a confirmação inicial, final e tentar novamente.

// Apresentação inicial:
        printf("****Olá, bem vindo a Doctor Link - Especialidades Médicas****\n\n");

// loop para a entrada válida:
    do{
        printf("Gostaria de marcar uma consulta com um de nossos especialistas?\n");
        printf("Digite 1 para SIM ou 2 para NÃO.\n");
        scanf("%d", &consulta);

    if (consulta != 1 && consulta != 2) {
        printf("Entrada inválida. Por favor, digite 1 ou 2.\n\n");
}
    } while (consulta != 1 && consulta != 2);

// Confirmação se o usuário aceita realizar o agendamento ou não.
    if (consulta == 1) {
        printf("\nÓtimo! Vamos precisar de alguns dados pessoais para continuar.\n");
    } else {
        printf("Tudo bem! Estaremos sempre disponíveis caso queira agendar em um outro momento!"); 
        printf("\nA Doctor Link agradece.\n");
    return 0;
    }

// Coleta dos dados do usuário. 
    do {
        printf("\nDigite seu primeiro nome:\n");
        scanf("%s", nome);

        printf("Digite seu sobrenome:\n");
        scanf("%s", sobrenome);

        printf("Digite seu telefone com DDD (somente números):\n");
        scanf("%s", telefone);

// Confirmação se os dados estão corretos.
        do {
         printf("\nOs seus dados estão corretos?\n");
         printf("Nome completo: %s %s\n", nome, sobrenome);
         printf("Telefone: %s\n", telefone);
 
        printf("\nDigite 1 para SIM ou 2 para NÃO.\n");
        scanf("%d", &confirmaDados);
        if (confirmaDados != 1 && confirmaDados != 2) {
            printf("Entrada inválida. Digite apenas 1 ou 2.\n");
        }
        } while (confirmaDados != 1 && confirmaDados != 2);

        if (confirmaDados == 2) {
        printf("\nInsira seu dados novamente:\n");
    }
        } while (confirmaDados != 1);
        
// Laço principal de agendamento
    while (tentarNovamente == 1) {

// Escolha da especialidade.
    do {
        printf("\nVamos começar!\n");
        printf("Digite uma opção para especialidade desejada:\n");
        printf("1 - Cardiologia\n");
        printf("2 - Endócrinologia\n");
        printf("3 - Neurologia\n");
        printf("4 - Ginecologia\n");
            scanf("%d", &especialidade);
            
    if (especialidade < 1 || especialidade > 4) {
            printf("Opção inválida. Tente novamente digitando um número de 1 a 5.\n");
     }
        
    } while (especialidade < 1 || especialidade > 4);
        
// Escolha do médico.
    do {
        printf("\nDigite a opção do médico especialista desejado:\n");
        printf("1 - Dr. Vinicius Meneghel\n");
        printf("2 - Dra. Amanda Rodrigues\n");
        printf("3 - Dra. Angelica Muniz\n");
        printf("4 - Dra. Larissa Lima\n");
            scanf("%d", &medico);

    if (medico < 1 || medico > 4) {
         printf("Opção inválida. Tente novamente.\n");
    }

    } while (medico < 1 || medico > 4);

    // Escolha da data.
    do {
        printf("\nEscolha o melhor data para a consulta:\n");
        printf("1 - 10/05/2025 - Quinta-feira\n");
        printf("2 - 13/05/2025 - Terça-feira\n");
        printf("3 - 17/05/2025 - Sábado\n");
        printf("4 - 19/05/2025 - Segunda-feira\n");
            scanf("%d", &data);
        
    if (data < 1 || data > 4) {
        printf("Opção inválida. Tente novamente.\n");
     }
        
    } while (data < 1 || data > 4);
        
//Escolha do horário.
    do {
        printf("\nAgora, escolha o melhor horário para a sua consulta:\n");
        printf("1 - 09:00\n");
        printf("2 - 10:30\n");
        printf("3 - 12:00\n");
        printf("4 - 14:30\n");
            scanf("%d", &horario);
        
    if (horario < 1 || horario > 4) {
        printf("Opção inválida. Tente novamente.\n");
    }
    
    } while (horario < 1 || horario > 4);

    // Resumo do seu agendamento:
        printf("\n====================================");
        printf("\nResumo do seu agendamento:\n\n");   

    // Mostrar a especialidade escolhida.
    switch (especialidade) {
        case 1: printf("Especialidade: Cardiologia\n"); break;
        case 2: printf("Especialidade: Endócrinologia\n"); break;
        case 3: printf("Especialidade: Neurologia\n"); break;
        case 4: printf("Especialidade: Ginecologia\n"); break;
    } 

// Mostrar o médico escolhido:
    switch (medico) {
        case 1: printf("Médico: Dr. Vinicius Meneghel\n"); break;
        case 2: printf("Médico: Dra. Amanda Rodrigues\n"); break;
        case 3: printf("Médico: Dra. Angelica Muniz\n"); break;
        case 4: printf("Médico: Dra. Larissa Lima\n"); break;
    }

    // Mostrar o dia escolhido:
    switch (data) {
        case 1: printf("Data: 10/05/2025 - Quinta-feira\n"); break;
        case 2: printf("Data: 13/05/2025 - Terça-feira\n"); break;
        case 3: printf("Data: 17/05/2025 - Sábado\n"); break;
        case 4: printf("Data: 19/05/2025 - Segunda-feira\n"); break;
    }
        
// Mostrar o horário escolhido:
    switch (horario) {
        case 1: printf("Horário: 09:00\n"); break;
        case 2: printf("Horário: 10:30\n"); break;
        case 3: printf("Horário: 12:00\n"); break;
        case 4: printf("Horário: 14:30\n"); break;
    }

// Mostrar os dados do paciente:
        printf("\nDados do paciente:\n");
        printf("Nome completo: %s %s\n", nome, sobrenome);
        printf("Telefone: %s\n", telefone);

//Confirmação da consulta:
    do {
        printf ("\nVocê confirma este agendamento?\n");
        printf("Digite 1 para SIM ou 2 para NÃO\n");
            scanf("%d", &confirmaConsulta);
        
    if (confirmaConsulta != 1 && confirmaConsulta != 2) {
        printf("Entrada inválida. Digite 1 ou 2.\n");
        }
    } while (confirmaConsulta != 1 && confirmaConsulta != 2);

        if (confirmaConsulta == 1) {
        printf("\nConsulta agendada com sucesso!\n");
        printf("A Doctor Link agradece a preferência!\n");
        tentarNovamente = 0; // Encerra o laço.
    } else {
    // Mantém a verificação para tentar novamente ou não
        do {
        printf("\nAgendamento não confirmado.\n");
        printf("Gostaria de voltar ao menu?\n\nDigite 1 para SIM ou 2 para NÃO:\n");
        scanf("%d", &tentarNovamente);

    if (tentarNovamente != 1 && tentarNovamente != 2) {
        printf("Entrada inválida. Digite 1 ou 2.\n");
        }
    } while (tentarNovamente != 1 && tentarNovamente != 2);
    
    if (tentarNovamente != 1) {
        printf("\nTudo bem! Caso queira agendar em outro momento, estaremos à disposição!\n");
        }
    }
}
    return 0;
}
