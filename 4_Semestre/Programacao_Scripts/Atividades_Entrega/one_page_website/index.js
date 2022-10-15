function toggleMenu() {
  let element = document.querySelector('.menu');
  element.style.display = element.style.display === 'none' ? 'block' : 'none';
}

function subscribe() {
  var email = document.querySelector('.txtEmail');
  alert('Obrigado por se inscrever! ' + email.value);
}
