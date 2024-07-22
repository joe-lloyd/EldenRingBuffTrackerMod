# Elden Ring Buff Duration Tracker 🛡️🔥

Welcome to the **Elden Ring Buff Duration Tracker** mod! This mod helps you keep track of buff durations more effectively by displaying the remaining time centrally on your screen. Say goodbye to guessing when your buffs will run out!

## Features ✨

- **Central Buff Timer**: Displays the remaining time for buffs like the boiled crab and prawn consumables.
- **Easy Installation**: Simple setup process to get you up and running quickly.
- **Seamless Integration**: Works in offline mode to enhance your single-player experience.

## Screenshots 📸

*(Add some screenshots here to show off the mod in action)*

## Installation 🛠️

### Prerequisites

- **Elden Ring** (PC version)
- **CMake** (for building the project)
- **Visual Studio** or **CLion** (for development)
- **DLL Injector** (e.g., Extreme Injector, Cheat Engine)

### Steps

1. **Clone the Repository**:
   ```sh
   git clone https://github.com/your-username/elden-ring-buff-tracker.git
   cd elden-ring-buff-tracker
2. **Build the Project**:

   **Using Visual Studio**:
   1. Open the project in Visual Studio.
   2. Configure the project to build a DLL.
   3. Build the project (this will generate the DLL in the `build` directory).

   **Using CLion**:
   1. Open the project in CLion.
   2. Ensure `CMakeLists.txt` is configured to create a shared library.
   3. Build the project (this will generate the DLL in the `cmake-build-debug` or `cmake-build-release` directory).

3. **Inject the DLL**:
   - Use a DLL injector to inject the compiled DLL into the Elden Ring process.
   - For example, using **Extreme Injector**:
      1. Open Extreme Injector.
      2. Select the Elden Ring process.
      3. Add the compiled DLL.
      4. Inject the DLL.

## Usage 🎮

1. **Start Elden Ring** in offline mode.
2. **Inject the DLL** using your preferred injector.
3. **Enjoy** the game with real-time buff duration tracking displayed on your screen.

## Contributing 🤝

We welcome contributions! If you have ideas for new features or improvements, feel free to fork the repository and submit a pull request.

1. **Fork the Repository**:
   - Click the "Fork" button at the top right of this page.

2. **Create a Feature Branch**:
   ```sh
   git checkout -b feature/your-feature-name

3. **Commit Your Changes**:

   ```sh
   Copy code
   git commit -m "Add some feature"

4. **Push to the Branch**:

   ```sh
   Copy code
   git push origin feature/your-feature-name

5. **Open a Pull Request**:

Navigate to your forked repository and click the "New Pull Request" button.

## License 📄
This project is licensed under the MIT License. See the LICENSE file for details.

## Contact 📬
If you have any questions or need further assistance, feel free to reach out!
