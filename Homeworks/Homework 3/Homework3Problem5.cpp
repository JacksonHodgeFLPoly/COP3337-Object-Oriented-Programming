#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Stock {
private:
    string symbol;
    string name;
    double previousClosingPrice;
    double currentPrice;

public:
    Stock(const string& newSymbol, const string& newName) 
        : symbol(newSymbol), name(newName), previousClosingPrice(0.0), currentPrice(0.0) {}

    string getSymbol() const {
        return symbol;
    }

    string getName() const {
        return name;
    }

    double getPreviousClosingPrice() const {
        return previousClosingPrice;
    }

    double getCurrentPrice() const {
        return currentPrice;
    }

    void setPreviousClosingPrice(double price) {
        previousClosingPrice = price;
    }

    void setCurrentPrice(double price) {
        currentPrice = price;
    }

    double getChangePercent() const {
        return (currentPrice - previousClosingPrice) / previousClosingPrice;
    }
};

int main(void) {
  Stock stock("NVDA", "NVIDIA Corp");
  stock.setPreviousClosingPrice(27.5);

  // Set current price
  stock.setCurrentPrice(27.6);

  // Display stock info
  cout << "Previous Closing Price: " <<
    stock.getPreviousClosingPrice() << endl;
  cout << "Current Price: " <<
    stock.getCurrentPrice() << endl;
  cout << "Percentage Change: " <<
    stock.getChangePercent() << endl;

  return 0;
}
