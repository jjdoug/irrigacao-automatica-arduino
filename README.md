# Sistema de Irrigação Automática com Arduino



Projeto prático da disciplina de Sistemas Embarcados — IFPE Campus Palmares.



## Descrição

Sistema que monitora a umidade do solo e aciona uma bomba d'água automaticamente quando o solo está seco. Quando a umidade atinge o nível adequado, a bomba é desligada sem intervenção manual.



## Componentes

- Arduino UNO

- Sensor de umidade do solo (módulo HL-01)

- Módulo Relé 5V 1 canal com optoacoplador

- Mini Bomba d'água DC

- Fonte de alimentação por pilhas

- Jumpers e mangueira



## Como funciona

O sensor lê continuamente a umidade do solo e converte o valor para porcentagem.

Quando a umidade é menor ou igual a 45%, o relé é acionado e a bomba liga.

Quando a umidade sobe acima de 45%, a bomba desliga automaticamente.



