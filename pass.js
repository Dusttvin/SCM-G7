document.addEventListener('DOMContentLoaded', function () {
  const passwordEl = document.getElementById('password');
  const lengthEl = document.getElementById('length');
  const lengthValueEl = document.getElementById('length-value');
  const generateBtn = document.getElementById('generate-btn');
  const copyBtn = document.getElementById('copy-btn');
  const toastEl = document.getElementById('toast');
  const strengthText = document.getElementById('strength-text');

  const includeUppercase = document.getElementById('include-uppercase');
  const includeLowercase = document.getElementById('include-lowercase');
  const includeNumbers = document.getElementById('include-numbers');
  const includeSymbols = document.getElementById('include-symbols');

  const UPPERCASE = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const LOWERCASE = "abcdefghijklmnopqrstuvwxyz";
  const NUMBERS = "0123456789";
  const SYMBOLS = "!@#$%^&*()_+-=[]{}|;:,.<>?";

  // Update length value display when slider changes
  lengthEl.addEventListener('input', () => {
    lengthValueEl.textContent = `${lengthEl.value} characters`;
  });

  // Only generate password when button is clicked
  generateBtn.addEventListener('click', generatePassword);

  // Copy password to clipboard
  copyBtn.addEventListener('click', function () {
    const password = passwordEl.textContent.trim();
    if (!password || password.startsWith("⚠")) return;

    navigator.clipboard.writeText(password).then(() => {
      toastEl.classList.add('show');
      setTimeout(() => toastEl.classList.remove('show'), 2000);
    });
  });

  function generatePassword() {
    const length = parseInt(lengthEl.value);
    const charTypes = [];

    if (includeUppercase.checked) charTypes.push(UPPERCASE);
    if (includeLowercase.checked) charTypes.push(LOWERCASE);
    if (includeNumbers.checked) charTypes.push(NUMBERS);
    if (includeSymbols.checked) charTypes.push(SYMBOLS);

    if (charTypes.length === 0) {
      passwordEl.textContent = "⚠ Select at least one option!";
      strengthText.textContent = "Strength: N/A";
      strengthText.style.color = "gray";
      return;
    }

    let allChars = charTypes.join('');
    let password = '';

    // Ensure at least one character from each selected type
    charTypes.forEach(set => {
      password += set[Math.floor(Math.random() * set.length)];
    });

    // Fill the rest of the password length
    for (let i = charTypes.length; i < length; i++) {
      password += allChars[Math.floor(Math.random() * allChars.length)];
    }

    password = shuffleString(password);
    passwordEl.textContent = password;
    checkStrength(password);
  }

  function checkStrength(password) {
    let strength = 0;

    if (password.length >= 8) strength++;
    if (/[A-Z]/.test(password)) strength++;
    if (/[0-9]/.test(password)) strength++;
    if (/[^A-Za-z0-9]/.test(password)) strength++;

    if (strength <= 1) {
      strengthText.textContent = "Strength: Weak";
      strengthText.style.color = "red";
    } else if (strength === 2 || strength === 3) {
      strengthText.textContent = "Strength: Medium";
      strengthText.style.color = "orange";
    } else {
      strengthText.textContent = "Strength: Strong";
      strengthText.style.color = "green";
    }
  }

  function shuffleString(str) {
    const arr = [...str];
    for (let i = arr.length - 1; i > 0; i--) {
      const j = Math.floor(Math.random() * (i + 1));
      [arr[i], arr[j]] = [arr[j], arr[i]];
    }
    return arr.join('');
  }

  // Set initial slider value display (optional)
  lengthValueEl.textContent = `${lengthEl.value} characters`;
});


