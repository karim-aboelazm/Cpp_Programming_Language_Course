#include <iostream>

using namespace std;

class TicTacToe {

    private:

        char board[3][3];

    public:

        TicTacToe() {

            for (int i = 0; i < 3; i++) {

                for (int j = 0; j < 3; j++) {

                    board[i][j] = ' ';

                }

            }

        }

        void display() const {

            for (int i = 0; i < 3; i++) {

                for (int j = 0; j < 3; j++) {

                    cout << board[i][j];

                    if (j != 2) {

                        cout << "  |";

                    }

                }

                cout << endl;

                if (i != 2) {

                    cout << "---+---+---" << endl;

                }

            }

        }

        bool placeMarker(int row, int col, char marker) {

            if (board[row][col] == ' ') {

                board[row][col] = marker;

                return true;

            } else {

                return false;

            }

        }

        bool checkWin() const {

            for (int i = 0; i < 3; i++) {

                if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {

                    return true;

                }

                if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {

                    return true;

                }

            }

            if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') {

                return true;

            }

            if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ') {

                return true;

            }

            return false;

        }

};

int main() {

    TicTacToe game;

    int row, col;

    char player = 'X';

    bool win = false;

    cout << "Tic Tac Toe" << endl;

    while (!win) {

        game.display();

        cout << "Player " << player << ", enter row and column: ";

        cin >> row >> col;

        if (game.placeMarker(row-1, col-1, player)) {

            if (game.checkWin()) {

                win = true;

                cout << "Player " << player << " wins!" << endl;

            } else {

                player = player == 'X' ? 'O' : 'X';

            }

        } else {

            cout << "That spot is already taken. Try again." << endl;

        }

    }

    game.display();

    return 0;

}
