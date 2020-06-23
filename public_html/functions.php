<?php
//Initialitations and configurations
require_once('init.php');
function setLanguage()
{
	if(isset($_GET['language']))
	{
		if($_GET['language']=='gr')
		{
	      require_once('Languages/gr.php');
	    }
		else
		{
		require_once('Languages/en.php');
		}
	}
	else 
	{
	 require_once('Languages/en.php');
	}
 }
setLanguage();
?>	