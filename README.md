# Implementing-bitwise-operators-and-manipulation-in-c-program-

This program demonstrates how to work directly with the binary representation of numbers using bitwise operators. This is fundamental for low-level programming, optimization, and hardware control.

Core Concepts:

Bitwise Operators: These operators act on individual bits (0s and 1s) of a number.

& (Bitwise AND): The resulting bit is 1 only if both corresponding bits in the operands are 1.

| (Bitwise OR): The resulting bit is 1 if at least one of the corresponding bits in the operands is 1.

^ (Bitwise XOR): The resulting bit is 1 if the corresponding bits in the operands are different.

~ (Bitwise NOT): Inverts all the bits of the operand (0s become 1s and 1s become 0s).

<< (Left Shift): Shifts the bits of the operand to the left by a specified number of positions. Each shift to the left is equivalent to multiplying the number by 2.

>> (Right Shift): Shifts the bits of the operand to the right. Each shift to the right is equivalent to dividing the number by 2.

Bit Manipulation with Masks: To change a specific bit, we use a "mask". A mask is a specially crafted number that allows us to target a single bit without affecting others.

Creating a Mask: The expression (1 << bit_position) creates the mask. It takes the number 1 (binary ...0001) and shifts its single '1' bit to the left to the desired position. For example, 1 << 2 results in binary ...0100 (the number 4).

Setting a Bit: To force a specific bit to become 1, we use the OR operator with a mask.

Example: a | (1 << bit_set) takes the original number a and ORs it with the mask. This sets the target bit to 1 and leaves all other bits in a unchanged.

Resetting (Clearing) a Bit: To force a specific bit to become 0, we use the AND operator with an inverted mask.

Example: a & (~(1 << reset)) first creates the mask (1 << reset), then inverts it with ~. The inverted mask has a 0 at the target position and 1s everywhere else. ANDing this with the original number a clears the target bit and leaves all other bits unchanged.
