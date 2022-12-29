var num1, num2, res, tmp, operator;
tmp = '';

function operation(arg) {
	num1 = tmp;
	num1 -= 0;
	operator = arg;
	tmp = '';
	document.getElementById('display').innerHTML = operator;
	document.getElementById("answer").disabled = false;
}
function ans() {
	num2 = tmp;
	num2 -= 0;
	switch (operator) {
		case '+':
			res = num1 + num2;
		break;
	
		case '-':
			res = num1 - num2;
		break;

		case 'x':
			res = num1 * num2;
		break;

		case '÷':
			res = num1 / num2;
		break;

		default:
			break;
	}
	if (res == 69) {
		window.open("https://youtu.be/dQw4w9WgXcQ");
	}
	
	document.getElementById('display').innerHTML = '= ' + res;
	document.getElementById("opButton+").disabled = true;
	document.getElementById("opButton-").disabled = true;
	document.getElementById("opButtonx").disabled = true;
	document.getElementById("opButton÷").disabled = true;
	document.getElementById("numButton0").disabled = true;
	document.getElementById("numButton1").disabled = true;
	document.getElementById("numButton2").disabled = true;
	document.getElementById("numButton3").disabled = true;
	document.getElementById("numButton4").disabled = true;
	document.getElementById("numButton5").disabled = true;
	document.getElementById("numButton6").disabled = true;
	document.getElementById("numButton7").disabled = true;
	document.getElementById("numButton8").disabled = true;
	document.getElementById("numButton9").disabled = true;
	document.getElementById("answer").disabled = true;
}

function onPressNum(arg) {
	tmp += arg;
	document.getElementById('display').innerHTML = tmp;
	document.getElementById("opButton+").disabled = false;
	document.getElementById("opButton-").disabled = false;
	document.getElementById("opButtonx").disabled = false;
	document.getElementById("opButton÷").disabled = false;
	document.getElementById("numButton0").disabled = false;

}
function allClear() {
	tmp = '';
	num1 = num2 = res = operator = null;
	document.getElementById('display').innerHTML = '0';
	document.getElementById("opButton+").disabled = true;
	document.getElementById("opButton-").disabled = true;
	document.getElementById("opButtonx").disabled = true;
	document.getElementById("opButton÷").disabled = true;
	document.getElementById("numButton0").disabled = true;
	document.getElementById("numButton1").disabled = false;
	document.getElementById("numButton2").disabled = false;
	document.getElementById("numButton3").disabled = false;
	document.getElementById("numButton4").disabled = false;
	document.getElementById("numButton5").disabled = false;
	document.getElementById("numButton6").disabled = false;
	document.getElementById("numButton7").disabled = false;
	document.getElementById("numButton8").disabled = false;
	document.getElementById("numButton9").disabled = false;
	document.getElementById("answer").disabled = true;
}