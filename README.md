# Pi Approximation using Leibniz Series in C

This program approximates the value of Pi (\(\pi\)) using the **Leibniz Series**. The calculation is performed based on the number of terms specified by the user as a command-line argument.

## How the Leibniz Series Works

The Leibniz formula for \(\pi\) is:
\[
\pi = 4 \times \left(1 - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \frac{1}{9} - \dots\right)
\]

This series alternates between addition and subtraction of fractions, progressively converging to \(\pi\) as more terms are added.

## Features

- Computes an approximation of \(\pi\) using the Leibniz series.
- User specifies the number of terms (\(n\)) for the approximation.
- Handles invalid or missing input gracefully.

## Getting Started

### Prerequisites

To run this program, you need:
- A C compiler (e.g., GCC)

