import subprocess
import socket

def ping_ip(ip):
    try:
        # Executa o comando ping e verifica se o IP responde
        output = subprocess.check_output(["ping", "-c", "1", ip])
        return True
    except subprocess.CalledProcessError:
        return False

def main():
    ip_start = "192.168."
    ip_end = "192.168."

    with open("ips_nao_respondendo.txt", "w") as file:
        for i in range(4):
            for j in range(256):
                ip = ip_start + str(i) + "." + str(j)
                if not ping_ip(ip):
                    data = f"IP {ip} (Sem resposta ao ping)"
                    print(data)
                    file.write(data + "\n")

if __name__ == "__main__":
    main()
