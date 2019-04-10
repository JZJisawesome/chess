/* MIT License
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

#ifndef BOARD_H
#define BOARD_H


#include <array>
#include <memory>

class Board
{
    public:

        enum PieceType
        {
            none, pawn, knight, rook, bishop, queen, king
        };
        typedef std::pair<PieceType, bool> Piece;//bool is if pawn is white


        typedef std::array<Piece, 8> boardRow_t;
        typedef std::array<boardRow_t, 8> boardArray_t;//todo change to pointer system to save stack space

        std::unique_ptr<boardArray_t> boardArray
        {
            new boardArray_t
            {
                {
                    {Piece(PieceType::rook, false), Piece(PieceType::knight, false), Piece(PieceType::bishop, false), Piece(PieceType::queen, false), Piece(PieceType::king, false), Piece(PieceType::bishop, false), Piece(PieceType::knight, false), Piece(PieceType::rook, false)},
                    {Piece(PieceType::pawn, false), Piece(PieceType::pawn, false), Piece(PieceType::pawn, false), Piece(PieceType::pawn, false), Piece(PieceType::pawn, false), Piece(PieceType::pawn, false), Piece(PieceType::pawn, false), Piece(PieceType::pawn, false)},
                    {Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true)},
                    {Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true)},
                    {Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true)},
                    {Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true), Piece(PieceType::none, true)},
                    {Piece(PieceType::pawn, true), Piece(PieceType::pawn, true), Piece(PieceType::pawn, true), Piece(PieceType::pawn, true), Piece(PieceType::pawn, true), Piece(PieceType::pawn, true), Piece(PieceType::pawn, true), Piece(PieceType::pawn, true)},
                    {Piece(PieceType::rook, true), Piece(PieceType::knight, true), Piece(PieceType::bishop, true), Piece(PieceType::queen, true), Piece(PieceType::king, true), Piece(PieceType::bishop, true), Piece(PieceType::knight, true), Piece(PieceType::rook, true)}
                }
            }
        };

        bool whiteTurn = true;

        boardRow_t operator[] (std::size_t yVal);
};

#endif //BOARD_H
