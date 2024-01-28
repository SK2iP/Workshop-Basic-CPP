:::mermaid
graph TD
    A[Start] --> B[Declare num, result]
    B --> C[Prompt user for num]
    C --> D[Read num from user]
    D --> E[Initialize result to 1]
    E --> F[Initialize temp to num]
    F --> G[Check if temp is greater than 3]
    G -->|true| H[Multiply result by temp]
    H --> I[Decrement temp by 1]
    I --> G
    G -->|false| J[Display the result]
    J --> K[End]
