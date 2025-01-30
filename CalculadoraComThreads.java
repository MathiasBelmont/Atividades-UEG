package Calculadora;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class CalculadoraComThreads {

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            JFrame frame = new CalculadoraFrame();
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setVisible(true);
        });
    }
}

class CalculadoraFrame extends JFrame {
    private JTextField display;
    private JButton[] numberButtons;
    private JButton addButton, subtractButton, multiplyButton, divideButton, equalsButton;
    private JButton startThreadsButton; // Botão para iniciar threads
    private JButton stopThreadsButton; // Botão para encerrar threads
    private double currentResult;
    private char currentOperation;
    private boolean startNewInput;
    private JComboBox<Integer> threadComboBox;
    private ExecutorService executorService;
    private List<ThreadStatusFrame> threadStatusFrames;

    public CalculadoraFrame() {
        setTitle("Calculadora");
        setSize(500, 400);
        setLayout(new BorderLayout());

        display = new JTextField();
        display.setEditable(false);
        add(display, BorderLayout.NORTH);

        JPanel buttonPanel = new JPanel();
        buttonPanel.setLayout(new GridLayout(4, 4));

        numberButtons = new JButton[10];
        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new JButton(String.valueOf(i));
            buttonPanel.add(numberButtons[i]);
            final int digit = i;
            numberButtons[i].addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    appendDigit(digit);
                }
            });
        }

        addButton = createOperatorButton("+");
        subtractButton = createOperatorButton("-");
        multiplyButton = createOperatorButton("*");
        divideButton = createOperatorButton("/");
        equalsButton = createOperatorButton("=");

        buttonPanel.add(addButton);
        buttonPanel.add(subtractButton);
        buttonPanel.add(multiplyButton);
        buttonPanel.add(divideButton);
        buttonPanel.add(equalsButton);

        add(buttonPanel, BorderLayout.CENTER);

        JPanel controlPanel = new JPanel();
        controlPanel.setLayout(new FlowLayout());

        JLabel threadLabel = new JLabel("Threads:");
        threadComboBox = new JComboBox<>(new Integer[]{1, 2, 3, 4, 5});
        controlPanel.add(threadLabel);
        controlPanel.add(threadComboBox);

        startThreadsButton = new JButton("Iniciar Threads");
        startThreadsButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                startThreads();
            }
        });
        controlPanel.add(startThreadsButton);

        stopThreadsButton = new JButton("Encerrar Threads");
        stopThreadsButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                stopThreads();
            }
        });
        controlPanel.add(stopThreadsButton); // Adiciona o botão para encerrar threads

        add(controlPanel, BorderLayout.SOUTH);

        startNewInput = true;

        executorService = Executors.newCachedThreadPool();
        threadStatusFrames = new ArrayList<>();
    }

    private void stopThreads() {
        // Para todas as threads e remove as janelas de status
        for (ThreadStatusFrame statusFrame : threadStatusFrames) {
            statusFrame.dispose(); // Fecha a janela de status
        }
        threadStatusFrames.clear(); // Limpa a lista de janelas de status
        executorService.shutdownNow(); // Encerra todas as threads

        // Verifica se existem threads ativas
        if (!executorService.isTerminated()) {
            JOptionPane.showMessageDialog(this, "Existem threads ativas que foram encerradas.", "Erro",
                    JOptionPane.ERROR_MESSAGE);
        } else {
            JOptionPane.showMessageDialog(this, "Todas as threads foram encerradas.", "Informação",
                    JOptionPane.INFORMATION_MESSAGE);
        }

        // Recria o ExecutorService após encerrar
        executorService = Executors.newCachedThreadPool();
    }

    private JButton createOperatorButton(String label) {
        JButton button = new JButton(label);
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (e.getActionCommand().equals("=")) {
                    performOperation();
                } else {
                    currentOperation = e.getActionCommand().charAt(0);
                    currentResult = Double.parseDouble(display.getText());
                    startNewInput = true;
                }
            }
        });
        return button;
    }

    private void appendDigit(int digit) {
        if (startNewInput) {
            display.setText(String.valueOf(digit));
            startNewInput = false;
        } else {
            display.setText(display.getText() + digit);
        }
    }

    private void performOperation() {
        double operand = Double.parseDouble(display.getText());
        double result = 0.0;

        switch (currentOperation) {
            case '+':
                result = currentResult + operand;
                break;
            case '-':
                result = currentResult - operand;
                break;
            case '*':
                result = currentResult * operand;
                break;
            case '/':
                if (operand != 0) {
                    result = currentResult / operand;
                } else {
                    display.setText("Erro");
                    return;
                }
                break;
        }

        display.setText(String.valueOf(result));
        startNewInput = true;
    }

    private void startThreads() {
        int numThreads = (Integer) threadComboBox.getSelectedItem();

        for (int i = 0; i < numThreads; i++) {
            ThreadStatusFrame statusFrame = new ThreadStatusFrame("Thread " + (i + 1));
            threadStatusFrames.add(statusFrame);
            executorService.execute(new CalculationTask(statusFrame));
        }
    }

    private class CalculationTask implements Runnable {
        private ThreadStatusFrame statusFrame;

        public CalculationTask(ThreadStatusFrame statusFrame) {
            this.statusFrame = statusFrame;
        }

        @Override
        public void run() {
            statusFrame.setStatus("Executando");

            try {
               
                for (int i = 10; i >= 1; i--) {
                   
                    statusFrame.setStatus("Contagem regressiva: " + i);
                    System.out.println("Contagem regressiva: " + i);
                    
                    Thread.sleep(1000);
                }
            } catch (InterruptedException e) {
             
            }

           
            statusFrame.setStatus("Finalizada");
            System.out.println("Finalizada");
        }

    }
}

class ThreadStatusFrame extends JFrame {
    private JLabel statusLabel;

    public ThreadStatusFrame(String name) {
        setTitle(name);
        setSize(200, 100);
        setLayout(new FlowLayout());

        statusLabel = new JLabel("Aguardando");
        add(statusLabel);
    }

    public void setStatus(String status) {
        statusLabel.setText(status);
    }
}
