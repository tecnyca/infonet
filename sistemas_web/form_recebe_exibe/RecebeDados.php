<?php 
	if ($_POST){
	    $var1 = $_POST['informacao1'];
	    $var2 = $_POST['informacao2'];
		$var3 = $_POST['informacao3'];
	    $var4 = $_POST['infosite'];
		$var5 = $_POST['infonumero'];	
        $var6 = $_POST['campo10'];	
		$var7 = $_POST['opcao1'];
		$var8 = $_POST['aceite'];
		$var9 = $_POST['participacao']; 
		$var10 = $_POST['escolha'];
		$var11 = $_POST['escolha2'];

/*		if(isset($_POST['aceite'])){
		   $var8 = $_POST['aceite'];}
		else {
		   $var8 = "Não selecionado";
		};

		if(isset($_POST['participacao'])){
		   $var9 = $_POST['participacao'];}
		else {
		   $var9 = "Não selecionado";
		};
		
		if(isset($_POST["escolha2"])) {
          $var11= "O(s) instrumento(s) escolhido(s) foi(ram): ";
          foreach($_POST["escolha2"] as 
                   $instrumento)
           {
            $var11=$var11 . $instrumento . ", ";
           }
        }
           else  {
            $var11= "Você não escolheu 
                nenhum instrumento!";
           };
*/
		
		echo "Campo 1 = $var1 <br />";
		echo "Campo 2 = $var2 <br />";
		echo "Campo 3 = $var3 <br />";
		echo "Campo 4 = $var4 <br />";
		echo "Campo 5 = $var5 <br />";
		echo "Campo 6 = $var6 <br />";
		echo "Campo 7 = $var7 <br />";
		echo "Campo 8 = $var8 <br />";
		echo "Campo 9 = $var9 <br />";
		echo "Campo 10 = $var10 <br />";
		echo "Campo 11 = $var11 <br />";
	}
?>	
		