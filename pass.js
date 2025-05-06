document.addEventListener('DOMContentLoaded', function () { // Wait for the DOM to load before executing the script
  const passwordEl = document.getElementById('password'); // Select the element to display the generated password
  const lengthEl = document.getElementById('length'); // Select the slider input for password length
  const lengthValueEl = document.getElementById('length-value'); // Select the element to display the password length
  const generateBtn = document.getElementById('generate-btn'); // Select the button to generate a password
  const copyBtn = document.getElementById('copy-btn'); // Select the button to copy the password to the clipboard
  const toastEl = document.getElementById('toast'); // Select the element to show a toast notification
  const strengthText = document.getElementById('strength-text'); // Select the element to display password strength

  const includeUppercase = document.getElementById('include-uppercase'); // Checkbox for including uppercase letters
  const includeLowercase = document.getElementById('include-lowercase'); // Checkbox for including lowercase letters
  const includeNumbers = document.getElementById('include-numbers'); // Checkbox for including numbers
  const includeSymbols = document.getElementById('include-symbols'); // Checkbox for including symbols

  const UPPERCASE = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // String containing uppercase characters
  const LOWERCASE = "abcdefghijklmnopqrstuvwxyz"; // String containing lowercase characters
  const NUMBERS = "0123456789"; // String containing numeric characters
  const SYMBOLS = "!@#$%^&*()_+-=[]{}|;:,.<>?"; // String containing symbol characters

  lengthEl.addEventListener('input', () => { // Add an event listener to update the length display on slider input
    lengthValueEl.textContent = `${lengthEl.value} characters`; // Update the displayed length value
  });

  generateBtn.addEventListener('click', generatePassword); // Add an event listener to generate a password when the button is clicked

  copyBtn.addEventListener('click', function () { // Add an event listener to copy the password to the clipboard
    const password = passwordEl.textContent.trim(); // Get the password text and trim whitespace
    if (!password || password.startsWith("⚠")) return; // Do nothing if no valid password is present
    navigator.clipboard.writeText(password).then(() => { // Copy the password to the clipboard
      toastEl.classList.add('show'); // Show the toast notification
      setTimeout(() => toastEl.classList.remove('show'), 2000); // Hide the toast after 2 seconds
    });
  });

  function generatePassword() { // Function to generate a random password
    const length = parseInt(lengthEl.value); // Get the selected password length
    const charTypes = []; // Initialize an array to hold selected character types
    if (includeUppercase.checked) charTypes.push(UPPERCASE); // Add uppercase characters if selected
    if (includeLowercase.checked) charTypes.push(LOWERCASE); // Add lowercase characters if selected
    if (includeNumbers.checked) charTypes.push(NUMBERS); // Add numbers if selected
    if (includeSymbols.checked) charTypes.push(SYMBOLS); // Add symbols if selected

    if (charTypes.length === 0) { // Check if no character types are selected
      passwordEl.textContent = "⚠ Select at least one option!"; // Display a warning message
      strengthText.textContent = "Strength: N/A"; // Indicate no password strength
      strengthText.style.color = "gray"; // Set the color to gray
      return; // Exit the function
    }

    let allChars = charTypes.join(''); // Combine all selected character sets into one string
    let password = ''; // Initialize the password variable

    // Add one character from each selected type
    charTypes.forEach(set => {
      password += set[Math.floor(Math.random() * set.length)]; // Add a random character from the set
    });

    // Fill the rest of the password
    for (let i = charTypes.length; i < length; i++) {
      password += allChars[Math.floor(Math.random() * allChars.length)]; // Add random characters to meet the required length
    }

    // Shuffle to remove predictable pattern
    password = shuffleString(password); // Shuffle the password for better randomness

    passwordEl.textContent = password; // Display the generated password
    checkStrength(password); // Check and display the strength of the password
  }

  function checkStrength(password) { // Function to check the strength of the password
    let strength = 0; // Initialize the strength score
    if (password.length >= 8) strength++; // Increment strength for sufficient length
    if (/[A-Z]/.test(password)) strength++; // Increment strength for uppercase characters
    if (/[0-9]/.test(password)) strength++; // Increment strength for numeric characters
    if (/[^A-Za-z0-9]/.test(password)) strength++; // Increment strength for special characters

    if (strength <= 1) { // Check if the password is weak
      strengthText.textContent = "Strength: Weak"; // Display "Weak" strength
      strengthText.style.color = "red"; // Set the text color to red
    } else if (strength === 2 || strength === 3) { // Check if the password is medium
      strengthText.textContent = "Strength: Medium"; // Display "Medium" strength
      strengthText.style.color = "orange"; // Set the text color to orange
    } else { // If strength is strong
      strengthText.textContent = "Strength: Strong"; // Display "Strong" strength
      strengthText.style.color = "green"; // Set the text color to green
    }
  }

  function shuffleString(str) { // Function to shuffle a string
    const arr = [...str]; // Convert the string to an array of characters
    for (let i = arr.length - 1; i > 0; i--) { // Loop through the array in reverse
      const j = Math.floor(Math.random() * (i + 1)); // Generate a random index
      [arr[i], arr[j]] = [arr[j], arr[i]]; // Swap the elements at indices i and j
    }
    return arr.join(''); // Convert the array back to a string
  }

  // Set initial slider value
  lengthValueEl.textContent = `${lengthEl.value} characters`; // Display the initial slider value
});

