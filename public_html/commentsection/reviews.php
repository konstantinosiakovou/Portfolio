<?php require('functions.php');?>

<!DOCTYPE html>

<html>

<head>

<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />

<title><?php echo title; ?></title>

<link href="style.css" rel="stylesheet" type="text/css" media="all" />

<meta link href="index.php"</>

<meta link href="About.php"</>

<meta link href="Gallery.php"</>

<meta link href="Links.php"</>

<meta href="Amenities.php"</>

<meta href="Rules.php"</>

<meta href="Availability.php"</>

<meta href="Contact.php"</>

<meta name="viewport" content="width=device-width, initial-scale=1">

<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">

<link href="fonts.css" rel="stylesheet" type="text/css" media="all" />

</head>

<body>

<a href="?language=en"><img src="images/en_language.ico" alt="English" style="width:40px;height:40px;"></a>

<a href="?language=gr"><img src="images/gr_language.png" alt="Greek" style="width:50px;height:50px;"></a>	

				<h1><a><?php echo title; ?></a></h1>				

			<div id="social">

				<ul class="contact">					

					<a href="https://www.facebook.com/Vitalas-traditional-stone-build-house-485010072327557/" class="fa fa-facebook"><?php echo facebook; ?></a>					

				</ul>

			</div>	

		</div>

			<!-- The overlay -->

			<div id="myNav" class="overlay">

			  <!-- Button to close the overlay navigation -->

			  <a href="javascript:void(0)" class="closebtn" onclick="closeNav()">&times;</a>

			  <!-- Overlay content -->

			  <div class="overlay-content">

				<a href="index.php"><?php echo menunav1 ?></a>

				<a href="About.php"><?php echo menunav2 ?></a>

				<a href="Gallery.php"><?php echo menunav3 ?></a>

				<a href="Shop_points.php"><?php echo menunav4 ?></a>

				<a href="Amenities.php"><?php echo menunav5 ?></a>

				<a href="Rules.php"><?php echo menunav6 ?></a>

				<a href="Availability.php"><?php echo menunav7 ?></a>

				<a href="Contact.php"><?php echo menunav8 ?></a>

						<script>/* Open when someone clicks on the span element */

					function openNav() {

					  document.getElementById("myNav").style.width = "100%";

					}



					/* Close when someone clicks on the "x" symbol inside the overlay */

					function closeNav() {

					  document.getElementById("myNav").style.width = "0%";

					}

				</script>

			  </div>			

			</div>

			<!-- Use any element to open/show the overlay navigation menu -->

			<span style="font-size:30px;cursor:pointer" onclick="openNav()">&#9776; <?php echo menu ?></span>

	</div>

	</div>

	

				<h2><?php echo rules?>:</h2>

				



		<div class="footer">			

				<p><?php echo footer; ?><p>					

			</div>					

</body>

</html>

