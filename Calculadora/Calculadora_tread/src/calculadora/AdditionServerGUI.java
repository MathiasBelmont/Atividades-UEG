package calculadora;

import javax.swing.*;
import java.awt.*;
import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;

public class AdditionServerGUI {
    public static void main(String[] args) {
        JFrame serverFrame = new JFrame("Servidor de Adição");
        serverFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        serverFrame.setSize(300, 200);
        serverFrame.setLayout(new BorderLayout());

        JTextArea logArea = new JTextArea();
        logArea.setEditable(false);
        JScrollPane scrollPane = new JScrollPane(logArea);

        serverFrame.add(scrollPane, BorderLayout.CENTER);

        try {
            ServerSocket serverSocket = new ServerSocket(1234); // Porta do servidor

            logArea.append("Servidor de Adição está em execução...\n");

            while (true) {
                Socket clientSocket = serverSocket.accept(); // Aguarda conexão do cliente
                logArea.append("Cliente conectado\n");

                // Configura fluxos de entrada e saída para comunicação com o cliente
                BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);

                // Lê a expressão matemática do cliente
                String expression = in.readLine();

                // Divide a expressão usando o operador '+'
                String[] parts = expression.split("\\+");
                
                if (parts.length != 2) {
                    out.println("Formato da expressão inválido. Use 'n1+n2'.");
                    logArea.append("Formato de expressão inválido: " + expression + "\n");
                } else {
                    try {
                        // Realiza a operação de adição
                        double operand1 = Double.parseDouble(parts[0]);
                        double operand2 = Double.parseDouble(parts[1]);
                        double result = operand1 + operand2;

                        // Envia o resultado de volta para o cliente
                        out.println(result);

                        logArea.append("Expressão avaliada: " + expression + "\n");
                        logArea.append("Resultado enviado ao cliente: " + result + "\n");
                    } catch (NumberFormatException e) {
                        out.println("Erro na expressão: Valores inválidos.");
                        logArea.append("Erro na expressão: Valores inválidos na expressão " + expression + "\n");
                    }
                }

                // Fecha a conexão com o cliente
                clientSocket.close();
                logArea.append("Cliente desconectado\n");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        serverFrame.setVisible(true); // Adicione esta linha para exibir a GUI
    }
}
