# Person Detection with ESP32Cam and Tensorflow

Person detection project for ESP32Cam (tested on AI Thinker version) using [ESP-IDF](https://github.com/espressif/esp-idf) and [TensorFlow Lite](https://github.com/tensorflow/tensorflow).

### Prerequisites

-   [Install ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html)
-   Set the `IDF_PATH` environment variable. [Help](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html#step-4-set-up-the-environment-variables)
-   `idf.py` and Xtensa-esp32 tools (e.g., `xtensa-esp32-elf-gcc`) must be in $PATH

### Installation

To build, simply run:

```
idf.py build
```

To flash (use the corresponding USB port):

```
idf.py --port /dev/ttyUSB0 flash
```

Open the serial monitor:

```
idf.py --port /dev/ttyUSB0 monitor
```
