/** MIT License
 *
 * Copyright (c) 2019 John Jekel
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include <iostream>

#include "Board.h"

void testPrintBoard(Board::rawBoard_t board)
{

    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            char piece;

            switch (board[i][j].first)
            {
                case Board::PieceType::bishop:
                {
                    piece = 'b';
                    break;
                }
                case Board::PieceType::king:
                {
                    piece = 'K';
                    break;
                }
                case Board::PieceType::knight:
                {
                    piece = 'k';
                    break;
                }
                case Board::PieceType::pawn:
                {
                    piece = 'p';
                    break;
                }
                case Board::PieceType::queen:
                {
                    piece = 'q';
                    break;
                }
                case Board::PieceType::rook:
                {
                    piece = 'r';
                    break;
                }
                case Board::PieceType::none:
                default:
                {
                    piece = ' ';
                    break;
                }

            }

            std::cout << piece;
        }

        std::cout << std::endl;
    }
    std::cout << sizeof(Board::PieceType);
}

int main()
{
    Board board;

    testPrintBoard(board.getBoard());
    return 0;
}
