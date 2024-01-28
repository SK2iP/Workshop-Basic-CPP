:::mermaid
graph TD
    A[Start] --> B[Declare number, sum]
    B --> C[Prompt user for number]
    C --> D[Read number from user]
    D --> E[Initialize sum to 0]
    E --> F[Initialize temp to number]
    F --> G[Check if temp is not equal to 0]
    G -->|true| H[Add last digit of temp to sum]
    H --> I[Remove last digit from temp]
    I --> G
    G -->|false| J[Display the result]
    J --> K[End]
