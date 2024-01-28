```mermaid
graph TD
A[Initialize i=1] -->|i <= 5| B{Print i, i++}
B -->|Loop| B
B -->|Exit| C[Exit Program]
```