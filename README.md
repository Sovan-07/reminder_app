# ⏰ Reminder Application (C++ Builder / FireMonkey)

A simple desktop-based reminder application built using **C++ Builder (FireMonkey Framework)**. This app allows users to set a specific date and time for a reminder and displays a message when the scheduled time is reached.

---

## 🚀 Features

* 📅 Select a **custom date**
* ⏱️ Set a **specific time**
* 📝 Enter a **personalized reminder message**
* 🔔 Automatic popup notification at the scheduled time
* ⚡ Lightweight and easy-to-use interface

---

## 🛠️ Tech Stack

* **Language:** C++
* **Framework:** FireMonkey (FMX)
* **IDE:** Embarcadero C++ Builder

---

## 📂 Project Structure

```
.
├── Unit1.cpp     # Main application logic
├── Unit1.h       # Component declarations
├── Project File  # C++ Builder project configuration
```

---

## ⚙️ How It Works

1. User selects a **date** and **time** for the reminder.
2. Enters a **message** to be displayed.
3. Clicks the **Set Reminder** button.
4. The app:

   * Calculates the remaining time from the current moment.
   * Converts it into milliseconds.
   * Starts a timer for that duration.
5. Once the timer completes:

   * A popup message is displayed with the reminder text.

---

## 🧩 Core Logic Overview

* Combines selected date and time into a single `TDateTime` value.
* Computes the time difference from the current system time.
* Uses a timer (`TTimer`) to trigger the reminder.
* Displays the message using a dialog box.

---

## ⚠️ Limitations

* Does not handle reminders set in the **past**.
* Very long-duration timers may not be fully reliable.
* No persistence (reminders are lost after app closes).

---

## 🔮 Future Improvements

* ✅ Add validation for past date/time inputs
* 💾 Save reminders (local storage or database)
* 🔁 Support multiple reminders
* 🔔 System tray notifications
* 🎨 Improved UI/UX design

---

## ▶️ How to Run

1. Open the project in **Embarcadero C++ Builder**
2. Build the project (`Ctrl + F9`)
3. Run the application (`F9`)
4. Set your reminder and test 🎉

---

## 📌 Use Case

This project is ideal for:

* Learning **event-driven programming**
* Understanding **timers in GUI applications**
* Beginners exploring **C++ desktop development**

---

## 📄 License

This project is open-source and available for learning and educational purposes.
