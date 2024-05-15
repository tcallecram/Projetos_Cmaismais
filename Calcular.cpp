#include <iostream>
#include <string>
#include <vector>

class HangmanGame {
private:
    std::string word;
    std::vector<bool> guessedLetters;
    int incorrectGuesses;

public:
    HangmanGame(const std::string& secretWord) : word(secretWord), guessedLetters(secretWord.length(), false), incorrectGuesses(0) {}

    void guessLetter(char letter) {
        bool found = false;
        for (size_t i = 0; i < word.length(); ++i) {
            if (word[i] == letter) {
                guessedLetters[i] = true;
                found = true;
            }
        }

        if (!found) {
            ++incorrectGuesses;
            std::cout << "Letra incorreta! Tentativas restantes: " << 6 - incorrectGuesses << std::endl;
        }
    }

    bool isWordGuessed() const {
        return guessedLetters == std::vector<bool>(word.length(), true);
    }

    void displayProgress() const {
        for (size_t i = 0; i < word.length(); ++i) {
            if (guessedLetters[i]) {
                std::cout << word[i];
            }
            else {
                std::cout << "_";
            }
        }
        std::cout << std::endl;
    }

    int getIncorrectGuesses() const {
        return incorrectGuesses;
    }
};

int main() {
    std::string secretWord;
    std::cout << "Digite a palavra para o jogo: ";
    std::cin >> secretWord;
    system("cls");

    HangmanGame game(secretWord);

    std::cout << "Comece a adivinhar!" << std::endl;

    while (game.getIncorrectGuesses() < 6) {
        char guess;
        std::cout << "Digite uma letra: ";
        std::cin >> guess;

        game.guessLetter(guess);
        game.displayProgress();

        if (game.isWordGuessed()) {
            std::cout << "Parabéns, você venceu!" << std::endl;
            break;
        }
    }

    if (game.getIncorrectGuesses() >= 6) {
        std::cout << "Você perdeu! A palavra era: " << secretWord << std::endl;
    }

    return 0;
}
