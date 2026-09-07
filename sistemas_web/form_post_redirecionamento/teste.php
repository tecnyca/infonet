<!DOCTYPE html>

<html lang="pt-BR">

<head>
  <meta charset="utf-8" />
  <title>Página 1</title>
</head>

<body>
  <h1>Exemplo de redirecionamento de 
	  página em PHP</h1>
  <form action="" method="post">
    <label for="destino">Digite destino desejado</label>
    <input id="destino" name="info_destino"
           type="text" size="40" />
    <input id="bt1" name="bt_redireciona"
           type="submit" 
		   value="Buscar destino" />
  </form>
  <br /><br />
  <form action="" method="post">
    <label>Qual site de rádio deseja visitar?</label>
	<fieldset>
	   <input id="rdo1" name="info_destino2"
           type="radio" value="https://jovempan.com.br/" />
       <label id="rdo1">Jovem PAN</label>		   
 	   <input id="rdo2" name="info_destino2"
           type="radio" value="https://transamericafm.com.br/" />
	   <label id="rdo2">Transamérica FM</label>
	   <input id="rdo3" name="info_destino2"
           type="radio" value="https://www.97fm.com.br/" /> 		   
	   <label id="rdo3">Energia 97 FM</label> 
	   <input id="rdo4" name="info_destino2"
			type="radio" value="https://metropolitana.com.br/" />
	   <label id="rdo4">Metropolitana 98.5 FM</label>
	   &emsp;
       <input id="bt2" name="bt_redireciona2"
           type="submit" 
		   value="Visitar" />	   
   </fieldset>	   
  </form>
</body>
</html>

<?php
 if ($_POST){
	if(isset($_POST['bt_redireciona'])){
    if(empty($_POST['info_destino'])){
	   echo "<br><br>Obrigatório digitar informação de destino";
	   echo "<br /><br /><a href='teste.php'>Limpar</a>";
       } else {
		 $destino = $_POST["info_destino"];
		 header("location: ". $destino);
	     exit;
	   };
	};
 };

 if ($_POST){
	if(isset($_POST['bt_redireciona2'])){
    if(isset($_POST['info_destino2'])){
		 $endereco = $_POST["info_destino2"];
		 header("location: ". $endereco);
	     exit;
       } else {
	   echo "<br><br>Obrigatório selecionar uma das opções disponibilizadas";
	   echo "<br /><br /><a href='teste.php'>Limpar</a>";
	   };
	};
 }
?>  