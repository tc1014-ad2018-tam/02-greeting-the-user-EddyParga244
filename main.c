 /* Este programa fue realizado como la tarea#2 el 27 de agosto de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es preguntarle al usuario la hora, dada a hora, mostrar un mensaje saludando
 * al usuario correspondiente a la hora, si no se escribe un número, el programa mandara un mensaje
 * de error y se cerrara.
 *
 * Fecha: 27 de agosto de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

 int main() {
     //Declaración de variables.
     int hour;

     //El usuario escribe la hora.
     printf("¿Cuál es la hora?");
     scanf("%i", &hour);

     //Dependiendo del valor de la hora entre 0 y 23, muestra un mensaje.
     if(hour<0||hour>23){
         printf("Invalid input.");
     }else{
         if (hour<12&&hour>=2){
             printf("Good morning!");
         } else if (hour>=12&&hour<19){
             printf("Good afternoon!");
         } else if (hour>=19&&hour<22){
             printf("Good evening!");
         } else {
             printf("Good night!");
         }
     }
     return 0;
 }