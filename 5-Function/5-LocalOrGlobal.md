:::mermaid
graph TD
    A[Start] --> B[Global variable declaration]
    B --> C["Define a function (exampleFunction)"]
    C --> D["Declare a local variable (localVar) within the function"]
    D --> E[Display Local Variable]
    E --> F[Display Global Variable]
    F --> G["Call the function (exampleFunction)"]
    G --> H[Display Global Variable in main]
    H --> I[End]
