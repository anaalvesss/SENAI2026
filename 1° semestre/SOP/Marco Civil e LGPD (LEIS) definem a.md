Marco Civil e LGPD (LEIS) definem a arquitetura da internet e carreira em TI



Todo código funciona sob regras(leis) de negócios globais



**código** = impacto social = não é apenas lógica matemática;

**leis digitais brasileiras** = requisitos de sistemas obrigatórios;

bugs legais e críticos surgem após ignorar os frameworks;



**Git Log -  Marco Civil:** histórico de commits da internet brasileira. Por ex: Commit a1b2 = \[Bug Report] Abusos e vazamentos, usuários relatando violação de privacidade... 







* Quando o Marco Civil é aplicado, todos funcionam da mesma forma, sem dados vazados;
* **Arq. do Art.19: O shield de responsabilidade civil =** se o usuário posta conteúdo ofensivo, o provedor não é responsável pelo dano responsável imediatamente, portanto, se a diretriz solicitar para a remoção do conteúdo, se remover, o escudo é mantido, se não, o escudo quebra e a aplicação se torna solidariamente responsável pelo dano.





* **Database Schema: Prazos Obrigatórios de retenção de logs**; Em provadores de conexão = 1 ano obrigatório; Em aplicações = 6 meses obrigatório.



**LGPD** 

* **Framework base:** GPDR Europeia;
* **Versão BR:** Lei n° 13.709/2018;
* **Objetivo**: Proteger os direitos de liberdade e de privacidade no tratamento de dados pessoais;
* **Mudança de Paradigma:** O dado no banco de dados não é propriedade da sua empresa. Apenas emprestado.



**Root =**   o processo de obter privilégios de superusuário (administrador) em dispositivos Android, liberando o acesso a arquivos e configurações do sistema que normalmente são bloqueados pelo fabricante.



**Fluxo de Dados =** 

* Transparência: O usuário foi informado?
* Finalidade: A coleta tem propósito justificado?



**Dados pessoais padrão:** ex=Nome, e-mail, IP...

* **Regra do Negócio**: Requer consentimento padrão e transparência, mas o processamento é comum na maioria das aplicações.

**Dados pessoais sensíveis**: ex=Registros de saúde, religião, orientação sexual..

* **Regra de Negócio:** Proteção rigorosa, usados para discriminação = vazamento causa danos críticos e requer camadas extras de segurança lógica.



**ANPD = Autoridade Nacional de Proteção de Dados**

* Órgão fiscalizador e regulador da LGPD
* Pode emitir advertências e bloquear acesso da empresa ao banco de dados infrator;
* Aplicar multas severas (até 2% do faturamento da empresa)





**Front-End Dev = Foco**: UX da LGPD;

**Tasks**: Desenhar fluxos de consentimento claros;

Garantir que os termos sejam legíveis e não caixas pré-marcadas.



**Back-End Dev =** **Foco**: Arq. Marco Civil \& Validação;

**Tasks**: Criar rotinas automáticas de retenção e deleção de logs de acesso (6 meses);



**DBA (Database Admin) =** **Foco**: Segurança e Classificação;

**Tasks**: Isolar e criptografar pesadamente Dados Sensíveis. 

