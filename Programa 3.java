import java.io.BufferedReader;

import java.io.BufferedWriter;

import java.io.FileReader;

import java.io.FileWriter;

import java.io.IOException;

public class LecturaEscrituraArchivoTexto {

   public static void main(String[] args) {
      // Lectura de archivo de texto
      try (BufferedReader br = new BufferedReader(new FileReader("ruta/al/archivo.txt"))) {

         String linea;

         while ((linea = br.readLine()) != null) {

            System.out.println(linea);

         }

      } catch (IOException e) {

         e.printStackTrace();

      }     
      // Escritura de archivo de texto
      try (BufferedWriter bw = new BufferedWriter(new FileWriter("ruta/al/nuevo-archivo.txt"))) {

         bw.write("Hola mundo!");

         bw.newLine();

         bw.write("Este es un ejemplo de cómo escribir en un archivo de texto en Java.");

      } catch (IOException e) {

         e.printStac

kTrace();

      }

   }

}
