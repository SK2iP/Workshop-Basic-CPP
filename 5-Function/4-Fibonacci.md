:::mermaid
graph TD
    A[Start] --> B[Declare terms]
    B --> C[Prompt user for terms]
    C --> D[Read terms from user]
    D --> E[Display the Fibonacci sequence]
    E --> F[Initialize i to 0]
    F --> G[Check if i < terms]
    G -->|true| H[Call the fibonacci function]
    H --> I[Output the result]
    I --> J[Increment i]
    J --> F
    G -->|false| K[End]

    subgraph Function
        L["Function fibonacci(n)"]
        L -->|n <= 1| M[Return n]
        L -->|else| N["Return fibonacci (n - 1) + fibonacci(n - 2)"]
    end
