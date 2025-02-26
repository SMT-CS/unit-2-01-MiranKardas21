// Copyright (c) 2025 Miran Kardas. All rights reserved.
//
// Created by: Miran Kardas
// Created on: Feb 2025
// This program calculates the area and diameter of a circle with radius 21 mm.

#include <stdio.h> // Standard I/O library
#include <math.h>  // Math library for M_PI and pow()

int main()
{
    // Define constants
    const double RADIUS = 21.0;

    // Calculate area and diameter
    double area = M_PI * pow(RADIUS, 2);
    double diameter = 2 * RADIUS;

    // Display results
    printf("If a circle has a radius of %.2f mm:\n", RADIUS);
    printf("\n");
    printf("Diameter: %.2f mm\n", diameter);
    printf("Area: %.2f mm²\n", area);
    printf("\nDone.\n");

    return 0;
}