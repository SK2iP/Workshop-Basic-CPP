```mermaid
graph TD
    A[Start] --> B[Initialize Vector]
    B --> C[Display Original Vector]

    C -->|Bubble Sort| D["Function: bubbleSort(numbers)"]
    D --> E[Display After Bubble Sort]

    E -->|Merge Sort| F["Function: mergeSort(numbers, 0, numbers.size() - 1)"]
    F --> G[Display After Merge Sort]

    G -->|Selection Sort| H["Function: selectionSort(numbers)"]
    H --> I[Display After Selection Sort]

    I --> J[End]

    B -->|Initialize Vector| BA[Initialize a vector with unsorted elements]
    D -->|Bubble Sort Function| DA["Function: bubbleSort(numbers)"]
    F -->|Merge Sort Functions| FA1["Function: mergeSort(numbers, left, right)"]
    FA1 --> FA2["Function: merge(numbers, left, middle, right)"]
    H -->|Selection Sort Function| HA["Function: selectionSort(numbers)"]
