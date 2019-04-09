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

        typedef std::array<std::array<Piece, 8>, 8> rawBoard_t;

        Board();
        virtual ~Board();

        rawBoard_t getBoard();

    private:

        rawBoard_t board
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
        };

        bool whiteTurn = true;
};

#endif //BOARD_H
