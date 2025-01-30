package calculadora;


import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class CalculadoraComInterface {

    private JFrame frame;
    private JTextField textField;
    private JFrame addFrame; // Janela auxiliar para a operação de adição

    public CalculadoraComInterface() {
        frame = new JFrame("Calculadora");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLayout(new BorderLayout());

        textField = new JTextField();
        frame.add(textField, BorderLayout.NORTH);

        JButton addButton = new JButton("+");
        addButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (addFrame == null || !addFrame.isVisible()) {
                    createAddFrame();
                }
            }
        });
        frame.add(addButton, BorderLayout.CENTER);

        JButton equalsButton = new JButton("=");
        equalsButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                if (addFrame != null && addFrame.isVisible()) {
                    String input = textField.getText();
                    double result = performAddition(input);
                    JOptionPane.showMessageDialog(addFrame, "Resultado: " + result);
                }
            }
        });
        frame.add(equalsButton, BorderLayout.SOUTH);

        frame.setVisible(true);
    }

    private void createAddFrame() {
        addFrame = new JFrame("Operação de Adição");
        addFrame.setDefaultCloseOperation(JFrame.HIDE_ON_CLOSE);
        addFrame.setSize(200, 100);
        addFrame.setLayout(new BorderLayout());

        JTextField addTextField = new JTextField();
        addFrame.add(addTextField, BorderLayout.NORTH);

        addFrame.setVisible(true);
    }

    private double performAddition(String input) {
        String[] numbers = input.split("\\+");
        double sum = 0;
        for (String number : numbers) {
            sum += Double.parseDouble(number);
        }
        return sum;
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new CalculadoraComInterface();
            }
        });
    }
}
