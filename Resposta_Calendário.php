<!DOCTYPE html>
<html lang="pt">
<?php date_default_timezone_set('America/Sao_Paulo');
$hora = date('H:i');
$Nome = 0;
?>

<head>
    <title>Calendário Matheus</title>
</head>
<?php
function hora()
{
    $hora = date('H,i');
    echo "$hora";
    if ($hora <= 12 || $hora > 05) {
        echo " Bom Dia";
    } else {
        if ($hora <= 19 || $hora >= 13) {
            echo " Boa tarde";
        } else {
            if ($hora >= 19 || $hora < 05) {
                echo " Boa Noite";
            }
        }
    }
}
?>
<table>
    <tr><?php
        hora();
        ?></tr>
</table>
<?php




function linha($semana)
{
    $falta = 0;
    echo "
<tr>";
    for ($i = 0; $i <= 6; $i++) {
        if (isset($semana[$i])) {
            if ($semana[$i] != 0) {
                if ($i == 0) {
                    if ($semana[$i] == date('j') && $semana != 0) {
                        echo "<td><b><span style='color:red;'>{$semana[$i]}</span></b></td>";
                    } else {
                        echo "<td> <span style='color:red;'>{$semana[$i]}</span> </td>";
                    }
                } else {
                    if ($i == 6) {
                        echo "<td><b>{$semana[$i]}</b></td>";
                    } else {
                        if ($semana[$i] == date('j')) {
                            echo "<td><b>{$semana[$i]}</b></td>";
                        } else {
                            echo "<td>{$semana[$i]}</td>";
                        }
                    }
                }
            } else {
                $falta++;
                echo "<td></td>";
            }
        } else {
            $falta++;
            echo "<td></td>";
        }
    }
    echo "</tr>";
}
?>
<?php
function calendario($falta, $mes)
{
    $dia = 1;
    $semana = array();
    while ($dia <= $mes) {
        if ($falta == 0) {
            array_push($semana, $dia);
            if (count($semana) == 7) {
                linha($semana);
                $semana = array();
            }

            $dia++;
        } else {
            $falta--;
            array_push($semana, 0);
        }
    }
    linha($semana);
}
?>
<th>
    <table border="1">
        <tr>
            janeiro
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(0, 31);
        ?>
    </table>
</th>
<th>
    <table border="1">
        <tr>
            fevereiro
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(4, 28);
        ?>
    </table>
</th>
<th>
    <table border="1">
        <tr>
            março
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(3, 31);
        ?>
    </table>
</th>
<th>
    <table border="1">
        <tr>
            abril
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(1, 30);
        ?>
    </table>
</th>
<th>
    <table border="1">
        <tr>
            maio
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(4, 31);
        ?>
    </table>
</th>
<tr></tr>
<th>
    <table border="1">
        <tr>
            junho
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(4, 30);
        ?>
    </table>
</th>
<th>
    <table border="1">
        <tr>
            julho
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(1, 31);
        ?>
    </table>
</th>
<th>
    <table border="1">
        <tr>
            agosto
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(3, 30);
        ?>
    </table>
</th>
<th>
    <table border="1">
        <tr>
            setembro
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(2, 31);
        ?>
    </table>
</th>
<th>
    <table border="1">
        <tr>
            outubro
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(2, 30);
        ?>
    </table>
</th>
<tr></tr>
<th>
    <table border="1">
        <tr>
            novembro
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(3, 31);
        ?>
    </table>
</th>
<th>
    <table border="1">
        <tr>
            dezembro
        </tr>
        <tr>
            <th>Dom</th>
            <th>Seg</th>
            <th>Ter</th>
            <th>Qua</th>
            <th>Qui</th>
            <th>Sex</th>
            <th>Sáb</th>
        </tr>
        <?php calendario(1, 30);
        ?>
    </table>
</th>


</html>