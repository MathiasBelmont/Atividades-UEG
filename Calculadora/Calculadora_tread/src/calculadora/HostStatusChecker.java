package calculadora;
import java.net.InetAddress;
import java.net.Socket;
import java.util.Scanner;

public class HostStatusChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Escolha uma opção:");
            System.out.println("1 - Verificar situação dos hosts");
            System.out.println("2 - Fechar o programa");
            int opcaoPrincipal = scanner.nextInt();

            if (opcaoPrincipal == 2) {
                System.out.println("Programa encerrado.");
                break; // Sai do loop e encerra o programa
            } else if (opcaoPrincipal == 1) {
                System.out.println("Escolha um host:");
                System.out.println("1 - Adição (+)");
                System.out.println("2 - Subtração (-)");
                System.out.println("3 - Multiplicação (*)");
                System.out.println("4 - Divisão (/)");
                int opcaoHost = scanner.nextInt();

                switch (opcaoHost) {
                    case 1:
                        verificarHost("+");
                        break;
                    case 2:
                        verificarHost("-");
                        break;
                    case 3:
                        verificarHost("*");
                        break;
                    case 4:
                        verificarHost("/");
                        break;
                    default:
                        System.out.println("Opção inválida.");
                }
            } else {
                System.out.println("Opção inválida.");
            }
        }

        scanner.close();
    }

    public static void verificarHost(String operador) {
        try {
            // Tente abrir uma conexão para o localhost na porta 1234 (ou a porta do seu servidor)
            Socket socket = new Socket(InetAddress.getByName("localhost"), 1234);

            // Se a conexão for bem-sucedida, o host está ativo
            System.out.println("O host " + operador + " está ativo.");

        } catch (Exception e) {
            // Se ocorrer uma exceção, o host não está ativo
            System.out.println("O host " + operador + " não está ativo.");
        }
    }
    
    public static void closeHost (String operador)
    {
    	try {
            // Tente abrir uma conexão para o localhost na porta 1234 (ou a porta do seu servidor)
            Socket socket = new Socket(InetAddress.getByName("localhost"), 1234);

            // Se a conexão for bem-sucedida, o host está ativo
            System.out.println("O host " + operador + " será fechado.");

            // Feche o socket
            socket.close();
        } catch (Exception e) {
            // Se ocorrer uma exceção, o host não está ativo
            System.out.println("O host " + operador + " não está ativo.");
        }
    }
}
