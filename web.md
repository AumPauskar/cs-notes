# Web notes

## FYI
- CSA: Client server architecture
- A web can be two tier, three tier, n tier having different applets for different purposes
- HTML: Hypertext markup lang, CSS: Cascading stylesheet, JS: Javascript

## Misc
- &npsp: singlewhitespace

## Basics
### Structure of a HTML document
A HTML document contents many tags called as elements. These elements are crutial in making a HTML document. This is the common structure of an HTML document.
```
<!DOCTYPE html>
<head>
	<!-- your head details -->
</head>
<body>
	<!-- your body details -->
</body>
</html>
```
HTML is completely independent to indentations for standard webpages.

### Comments
A comment is a non executable piece of code that can be added to the code to make it more readable for the devloper. A comment in HTML can be made like this
```
<!--  -->
```
### Adding simple text
This section contains the following
1. Adding headings
2. Adding paragraph
3. Simple text formatting - bold, italic, underline
```
<!DOCTYPE html>
<html lang="en">
<head>
</head>
<body>
	<!-- Adding heading to the code -->
	<h1>Hello world</h1>
	<!-- Text formatting -->
	<!-- b: bold; i: italics; u: underline -->
	<p> <b>This </b>is <i>a </i>simply simply <u>lovleh </u>paragraph</p>
	<p>Example for the<br>use of linebreak</p>
</body>
</html>
```

### Adding heading detais
1. Adding title
2. Adding icons to tabs
3. Adding CSS extention to main document
```
<!DOCTYPE html>
<html lang="en">
<head>
	<!-- Tab title -->
	<title>First webpage</title>
	<!-- Link to CSS -->
	<link rel="stylesheet" href="style.css">
	<!-- Web icon -->
	<link rel="icon" href="icon.png">
</head>
<body>
</body>
</html>
```

### Styling in another way
There are two methods of using CSS in HTML 5. One method is to use a seperate CSS document that contents all the styling attributes, another method is to include a style tag and include all the styling attributes inside the styling tab.

- Within HTML
```
<!DOCTYPE html>
<html lang="en">
	<style>
		body {
			background: #e71515;
		}
		h1 {
			color: #ffffff;
		}
	</style>
<head>
	<title>Styling guide</title>
</head>
<body>
	<h1>This is a document</h1>
</body>
</html>
```

- Using HTML and CSS \
Contents of HTML document
```
<!DOCTYPE html>
<html lang="en">
<head>
	<link rel="stylesheet" href="style.css">
	<title>Styling guide</title>
</head>
<body>
	<h1>This is a document</h1>
</body>
</html>
```
Contents of CSS document
```
body {
	background: #e71515;
}
h1 {
	color: #ffffff;
}
```
### Adding a hyperlink
A hyperlink is a gateway to another website or can be a local file. A hyperlink can be enclosed withing a string of text, a button or an image. \
In this example we have two files one is index.html and the another is child.html the hyperlink in the file is bidirectional. \
- Contents of index.html
```
<!DOCTYPE html>
<html lang="en">
<head>
	<title>First webpage</title>
</head>
<body>
	<h1>Hello world</h1>
	<p> <b>This </b>is <i>a </i>simply simply <u>lovleh </u>paragraph</p>
	<a href = "child1.html">Child link</a>
</body>
</html>
```
- Contents of child.html
```
<!DOCTYPE html>
<html lang="en">
<head>
	<title>Child</title>
</head>
<body>
	<h1>This is the child app</h1>
	<!-- this is a standard hyprlink -->
	<!-- this is an relative url -->
	<a href="index.html">Click on this</a>
</body>
</html>
```
There are two types of urls. Absolute urls and relative urls. Absolute urls give the complete location of the file but may change from system to system but using relative urls promises that the program will work on any system with the same OS. \
This is an example of an external hyperlink where the link navigates to anoter file or webpage.

- By using internal hyperlink
```
<!DOCTYPE html>
<html lang="en">
<head>
	<title>First webpage</title>
</head>
<body>
	<div id = "Top"></div>
	<a href="index.html#Bottom">Bottom</a>
	<h1>Lewis Hamilton</h1>
	<p>Sir Lewis Carl Davidson Hamilton MBE HonFREng (born 7 January 1985) is a British racing driver currently competing in Formula One for Mercedes. In Formula One, Hamilton has won a joint-record seven World Drivers' Championship titles (tied with Michael Schumacher), and holds the records for the most wins (103), pole positions (103), and podium finishes (191), among others.
	<div id="Bottom"></div>
	<h1>Max Verstappen</h1>
	<p>A speedy boi</p>
	<a href = "index.html#Top">Top</a>
</body>
</html>
```
image maps
background color, entire page, particular page, rgb and hex colors, alpha colors in html

## Styling
### Background color
Background color can be added in html webpage by two ways, first directly using the html format and adding colour int the html document. The second way is to use a CSS document to stylize individual element.

- Simple method
```
<!DOCTYPE html>
<html>
<body style="background-color:powderblue;">

<h1>This is a heading</h1>
<p>This is a paragraph.</p>

</body>
</html>
```
- Using CSS \
Contents of HTML document
```
<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" href="style.css">
</head>
<body>

<h1>This is a heading</h1>
<p>This is a paragraph.</p>

</body>
</html>
```
Contents of CSS document
```
body {background-color: powderblue;}
```
### Customising the font
The font can be customised in a lot of ways in html, that is the user can change the size, the weight and the type of font used

- Using HTML \
```
<!DOCTYPE html>
<html>
<head>
	<!-- <link rel="stylesheet" href="style.css"> -->
</head>
<body>

	
	<h1 "font-family:verdana;" style="font-size:300%;">This is a heading</h1>
	<p>This is a paragraph.</p>

</body>
</html>
```
- Using CSS \
Contents of html document
```
<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" href="style.css">
</head>
<body>

<h1>This is a heading</h1>
<p>This is a paragraph.</p>

</body>
</html>
```
Contents of CSS file
```
body {
	/* Changing the background color */
	background-color: rgb(255, 255, 255);
}
h1 {
	/* Changing the font size */
	font-size: 5em;
	/* Changing the font style */
	font-style: oblique;
	/* Changing the font family */
	font-family: 'Courier New', Courier, monospace;
	/* Changing the font weight */
	font-weight: normal;
}
```
A great practice in classifying the font type is to have multiple fonts. This makes sure that if any OS doesn't support the font that is asked to be rendered another placeholer font will replace it so the styling of the website is not inconsistant.

## Creating a table
There are three keywords in creating a table\
1. table - keyword for initiating a table
2. tr - creates a table row
3. th - creates a table heading
4. td - inserts new table data

Syntax of creating a table
```
<!DOCTYPE html>
<html>
<head>
	<!-- <link rel="stylesheet" href="style.css"> -->
</head>
<body>
	<!-- Initiating the table -->
	<table>
		<!-- Creates a table row -->
		<tr>
			<!-- Creates a table heading -->
			<th>Srno</th>
			<th>Name</th>
			<th>Qty</th>
		</tr>
		<tr>
			<!-- Inserta table data -->
			<td>1. </td>
			<td>Bruh</td>
			<td>69</td>
		</tr>
	</table>
</body>
</html>
```
Attributes can be modified within a table either using the prebuilt functions in HTML or in CSS.
- In HTML
```
...
<body>
	<table width="100%" cellspacing = "10" cellpadding = "10">
		<tr>
...
```

Other properties of tables can be changed with style attributes under the table tag. Some operations can be found [here](https://www.w3schools.com/html/html_table_sizes.asp).

## Images
Images can be created inside html with the img tag, the image can either be hosted locally or globally depending on the requirements. The syntax of inserting an image is as follows.

```
<!DOCTYPE html>
<html lang="en">

<head>
  <title>Document</title>
</head>

<body>
  <h1>Sussy baka</h1>
  <!-- Image 1 inserted -->
  <img src="tmp.jpg" alt="Sus">
  <h1>Waltuh</h1>
  <!-- Image 2 inserted -->
  <img src="waltuh.jpeg" alt="Waltuh">
</body>

</html>
```
Folder contents
1. index.html
2. tmp.jpg
3. waltuh.jpeg
