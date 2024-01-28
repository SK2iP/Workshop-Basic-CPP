```mermaid
graph TD
    A[Start] --> B[Loop with Break]
    B --> C[Initialize i to 1]
    C --> D[Check if i <= 10]
    D -->|true| E[Display i]
    E --> F[Check if i equals 5]
    F -->|true| G["Display (Breaking out)"]
    G --> H[Break out of the loop]
    F -->|false| I[Increment i]
    I --> D
    D -->|false| J[End Loop with Break]

    A --> K[Loop with Continue]
    K --> L[Initialize j to 1]
    L --> M[Check if j <= 10]
    M -->|true| N[Check if j is odd]
    N -->|true| O["Display (Skipped odd iteration)"]
    O --> P[Increment j]
    P --> M
    N -->|false| Q[Display j]
    Q --> P[Increment j]
    M -->|false| R[End Loop with Continue]
