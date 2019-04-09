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
