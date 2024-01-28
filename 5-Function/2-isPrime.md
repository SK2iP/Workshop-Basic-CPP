:::mermaid
graph TD
    A[Start] --> B[Declare number]
    B --> C[Prompt user for number]
    C --> D[Read number from user]
    D --> E[Check if the number is prime]
    E --> F[Call the isPrime function]
    F --> G[Check if num <= 1]
    G -->|true| H[Return false]
    G -->|false| I[Initialize i to 2]
    I --> J[Check if i * i <= num]
    J -->|true| K[Check if num % i == 0]
    K -->|true| L[Return false]
    K -->|false| M[Continue checking]
    M --> N[Increment i]
    N --> J
    J -->|false| O[Return true]
    O --> P[Output is a prime number]
    O --> Q[Output is not a prime number]
    P --> R[End]
    Q --> R[End]

    subgraph Function: isPrime
        S["Function isPrime(num)"]
        S --> T[Check if num <= 1]
        T -->|true| U[Return false]
        T -->|false| V[Initialize i to 2]
        V --> W[Check if i * i <= num]
        W -->|true| X[Check if num % i == 0]
        X -->|true| Y[Return false]
        X -->|false| Z[Continue checking]
        Z --> AA[Increment i]
        AA --> W
        W -->|false| BB[Return true]
    end
