package interfac;

import javax.swing.JFrame;
import javax.swing.JLabel;

import javax.swing.JButton;
import javax.swing.ImageIcon;

import java.awt.FlowLayout;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Contrutor_janela extends JFrame {
    /**
     * 
     */
    private static final long serialVersionUID = 1L;

    private JLabel label;
    private JLabel imagemLabel;
    private JButton button;

    public Contrutor_janela() {
        setTitle("teste janela");
        setSize(400, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        label = new JLabel("Ola mundo");
        add(label);

        ImageIcon icone = new ImageIcon("C:\\Users\\matheus.brito\\eclipse-workspace\\interfac\\src\\interfac\\images.png");
        setIconImage(icone.getImage());

        imagemLabel = new JLabel(icone);
        add(imagemLabel);

        setLayout(new FlowLayout());

        button = new JButton("Clique aqui!");

        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.out.println("Botão clicado!");
                atualizarTextoBotao("Botão clicado!");
                atualizarTextoRotulo("Texto do rótulo atualizado!");
                atualizarImagem("C:\\\\Users\\\\matheus.brito\\\\eclipse-workspace\\\\interfac\\\\src\\\\interfac\\\\transferir.png");
            }
        });

        add(button);
    }

    
    public void atualizarTextoBotao(String novoTexto) {
        button.setText(novoTexto);
    }

   
    public void atualizarTextoRotulo(String novoTexto) {
        label.setText(novoTexto);
    }

   
    public void atualizarImagem(String caminhoNovaImagem) {
        ImageIcon novaImagem = new ImageIcon(caminhoNovaImagem);
        imagemLabel.setIcon(novaImagem);
    }

}

