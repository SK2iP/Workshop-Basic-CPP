:::mermaid
graph TD
    A[Start] --> B[Declare num1, num2]
    B --> C[Prompt user for num1]
    C --> D[Read num1 from user]
    D --> E[Prompt user for num2]
    E --> F[Read num2 from user]
    F --> G[Call the add function]
    G --> H[Display the result]
    H --> I[End]

    subgraph Function
        J["Function add(a, b)"]
        J --> K[Return a + b]
    end
