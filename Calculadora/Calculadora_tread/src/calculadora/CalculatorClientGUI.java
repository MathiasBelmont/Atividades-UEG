package calculadora;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;
import java.net.Socket;

public class CalculatorClientGUI {
    public static void main(String[] args) {
        JFrame clientFrame = new JFrame("Calculadora");
        clientFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        clientFrame.setSize(300, 400);
        clientFrame.setLayout(new BorderLayout());

        JPanel buttonPanel = new JPanel(new GridLayout(4, 4));

        JTextField displayField = new JTextField();
        displayField.setEditable(false);
        displayField.setHorizontalAlignment(JTextField.RIGHT);

        JButton[] numberButtons = new JButton[10];
        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new JButton(String.valueOf(i));
            final int number = i;
            numberButtons[i].addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    displayField.setText(displayField.getText() + number);
                }
            });
        }

        JButton addButton = new JButton("+");
        JButton subtractButton = new JButton("-");
        JButton multiplyButton = new JButton("*");
        JButton divideButton = new JButton("/");
        JButton calculateButton = new JButton("=");
        JButton clearButton = new JButton("Limpar"); // Botão Limpar

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                displayField.setText(displayField.getText() + "+");
            }
        });

        subtractButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                displayField.setText(displayField.getText() + "-");
            }
        });

        multiplyButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                displayField.setText(displayField.getText() + "*");
            }
        });

        divideButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                displayField.setText(displayField.getText() + "/");
            }
        });

        calculateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    // Conecta-se ao servidor de adição
                    Socket socket = new Socket("localhost", 1234); // Conexão local, porta 12345

                    // Configura fluxos de entrada e saída para comunicação com o servidor
                    PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
                    BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));

                    // Envia a expressão para o servidor
                    out.println(displayField.getText());

                    // Recebe o resultado do servidor
                    String result = in.readLine();
                    displayField.setText(result);

                    // Fecha a conexão com o servidor
                    socket.close();
                } catch (IOException ex) {
                    ex.printStackTrace();
                }
            }
        });

        clearButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                displayField.setText(""); // Limpa o campo de texto
            }
        });

        buttonPanel.add(numberButtons[7]);
        buttonPanel.add(numberButtons[8]);
        buttonPanel.add(numberButtons[9]);
        buttonPanel.add(divideButton);
        buttonPanel.add(numberButtons[4]);
        buttonPanel.add(numberButtons[5]);
        buttonPanel.add(numberButtons[6]);
        buttonPanel.add(multiplyButton);
        buttonPanel.add(numberButtons[1]);
        buttonPanel.add(numberButtons[2]);
        buttonPanel.add(numberButtons[3]);
        buttonPanel.add(subtractButton);
        buttonPanel.add(numberButtons[0]);
        buttonPanel.add(addButton);
        buttonPanel.add(calculateButton);
        buttonPanel.add(clearButton); // Adiciona o botão Limpar

        clientFrame.add(displayField, BorderLayout.NORTH);
        clientFrame.add(buttonPanel, BorderLayout.CENTER);

        clientFrame.setVisible(true);
    }
}
