document.addEventListener('DOMContentLoaded', function () {
    // DOM elements
    const passwordEl = document.getElementById('password');
    const lengthEl = document.getElementById('length');
    const lengthValueEl = document.getElementById('length-value');
    const specialCharsEl = document.getElementById('special-chars');
    const generateBtn = document.getElementById('generate-btn');
    const copyBtn = document.getElementById('copy-btn');
    const toastEl = document.getElementById('toast');

    // Update length value display
    lengthEl.addEventListener('input', function () {
        const length = validateLength(lengthEl.value);
        lengthValueEl.textContent = `${length} characters`;
        generatePassword();
    });

    // Toggle special characters
    specialCharsEl.addEventListener('change', generatePassword);

    // Generate button click
    generateBtn.addEventListener('click', generatePassword);

    // Copy button click
    copyBtn.addEventListener('click', copyToClipboard);

    // Generate password function
    function generatePassword() {
        const length = validateLength(lengthEl.value);
        const includeSpecialChars = specialCharsEl.checked;

        const lowerChars = "abcdefghijklmnopqrstuvwxyz";
        const upperChars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        const numbers = "0123456789";
        const specialChars = "!@#$%^&*()_-+=<>?/{}[]|";

        let chars = lowerChars + upperChars + numbers;
        if (includeSpecialChars) chars += specialChars;

        // Ensure at least one character type is selected
        if (!includeSpecialChars && chars === lowerChars + upperChars + numbers) {
            passwordEl.textContent = "⚠️ Select at least one option!";
            return;
        }

        let newPassword = "";
        for (let i = 0; i < length; i++) {
            const randomIndex = Math.floor(Math.random() * chars.length);
            newPassword += chars[randomIndex];
        }

        passwordEl.textContent = newPassword;
    }

    // Copy to clipboard function
    function copyToClipboard() {
        const password = passwordEl.textContent;

        if (!password || password.includes("⚠️")) return;

        navigator.clipboard.writeText(password).then(() => {
            showToast();
        }).catch(err => {
            console.error("Failed to copy: ", err);
        });
    }

    // Validate length input
    function validateLength(value) {
        let length = parseInt(value, 10);
        if (isNaN(length) || length < 1) length = 8; // Default length
        return Math.min(Math.max(length, 1), 128); // Clamp between 1 and 128
    }

    // Show toast notification
    function showToast() {
        toastEl.classList.add('show');
        setTimeout(() => {
            toastEl.classList.remove('show');
        }, 2000);
    }

    // Generate initial password
    generatePassword();
});
