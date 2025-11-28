
#!/bin/bash

# Create output folder if it doesn't exist
mkdir -p out

# Compile Kotlin
kotlinc src/main/kotlin/Main.kt -include-runtime -d out/hello.jar

echo "Build complete. Run with:"
echo "java -jar out/hello.jar"
