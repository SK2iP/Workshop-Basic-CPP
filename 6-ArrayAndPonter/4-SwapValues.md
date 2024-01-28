:::mermaid
graph TD
    A[Start] --> B[Declare and initialize two integer variables]
    B --> C[Assign value 5 to num1]
    C --> D[Assign value 10 to num2]
    D --> E[Display values before swap]
    E --> F[Call the swapValues function]
    F --> G[Display values after swap]
    G --> H[End]

    subgraph Function: swapValues
        I["Function swapValues(a, b)"]
        I --> J[Declare temp]
        J --> K[Assign the value pointed by a to temp]
        K --> L[Assign the value pointed by b to the location pointed by a]
        L --> M[Assign temp to the location pointed by b]
    end
