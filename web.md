# Web notes

## FYI
- CSA: Client server architecture
- A web can be two tier, three tier, n tier having different applets for different purposes
- HTML: Hypertext markup lang, CSS: Cascading stylesheet, JS: Javascript

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

### Adding a hyperlink
A hyperlink is a gateway to another website or can be a local file. A hyperlink can be enclosed withing a string of text, a button or an image. \
In this example we have two files one is index.html and the another is child.html the hyperlink in the file is bidirectional. \
* Contents of index.html
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
* Contents of child.html
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

* By using internal hyperlink
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