class PowerOfTwoMaxHeap {
    /**
     * @param {number} degreeExponent - The 'x' in 2^x children
     */
    constructor(degreeExponent) {
        if (degreeExponent < 0) throw new Error("Exponent must be non-negative");
        
        this.heap = [];
        this.degreeExponent = degreeExponent;
        // Pre-calculate number of children for performance
        this.numChildren = 1 << degreeExponent; 
    }

    /**
     * Adds a value to the heap and maintains the max-heap property.
     * @param {number} value 
     */
    insert(value) {
        this.heap.push(value);
        this._bubbleUp(this.heap.length - 1);
    }

    /**
     * Removes and returns the largest value (the root).
     * @returns {number|null}
     */
    popMax() {
        if (this.heap.length === 0) return null;
        if (this.heap.length === 1) return this.heap.pop();

        const max = this.heap[0];
        // Move the last element to the root and sink it down
        this.heap[0] = this.heap.pop();
        this._sinkDown(0);

        return max;
    }

    _bubbleUp(index) {
        const element = this.heap[index];

        while (index > 0) {
            // Parent formula: (index - 1) / 2^x
            let parentIndex = (index - 1) >> this.degreeExponent;
            let parent = this.heap[parentIndex];

            if (element <= parent) break;

            // Swap
            this.heap[index] = parent;
            index = parentIndex;
        }
        this.heap[index] = element;
    }

    _sinkDown(index) {
        const length = this.heap.length;
        const element = this.heap[index];

        while (true) {
            let largestChildIndex = -1;
            let maxValue = -Infinity;

            // Calculate the range of children: [2^x * i + 1] to [2^x * i + 2^x]
            let firstChild = (index << this.degreeExponent) + 1;
            let lastChild = Math.min(firstChild + this.numChildren, length);

            // Find the largest among all 2^x children
            for (let i = firstChild; i < lastChild; i++) {
                if (this.heap[i] > maxValue) {
                    maxValue = this.heap[i];
                    largestChildIndex = i;
                }
            }

            // If no child is larger than the element, we are done
            if (largestChildIndex === -1 || maxValue <= element) break;

            this.heap[index] = this.heap[largestChildIndex];
            index = largestChildIndex;
        }
        this.heap[index] = element;
    }
}

// Example usage / basic test harness
if (typeof require !== 'undefined' && require.main === module) {
    const heap = new PowerOfTwoMaxHeap(1); // binary heap (2^1 children)
    [3, 1, 6, 5, 2, 4].forEach(n => heap.insert(n));
    console.log('Heap internal array:', heap.heap);
    console.log('popMax() ->', heap.popMax());
    console.log('Array after pop:', heap.heap);
}