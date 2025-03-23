#include <iostream>
#include <string>

class TrainStation {
private:
    std::string stationName;  
    double ticketPrice;       
    int totalSeats;           
    int soldTickets;          

public:
    
    TrainStation(const std::string& name, double price, int seats)
        : stationName(name), ticketPrice(price), totalSeats(seats), soldTickets(0) {}

    void sellTickets(int count) {
        if (soldTickets + count <= totalSeats) {
            soldTickets += count;
        }
        else {
            std::cout << "Out of tickets" << std::endl;
        }
    }

    
    double calculateUnsoldTicketsRevenue() const {
        return (totalSeats - soldTickets) * ticketPrice;
    }

    
    void setStationName(const std::string& name) {
        stationName = name;
    }

    void setTicketPrice(double price) {
        ticketPrice = price;
    }

    void setTotalSeats(int seats) {
        totalSeats = seats;
    }

    
    std::string getStationName() const {
        return stationName;
    }

    double getTicketPrice() const {
        return ticketPrice;
    }

    int getTotalSeats() const {
        return totalSeats;
    }

    int getSoldTickets() const {
        return soldTickets;
    }
};

int main() {
    
    TrainStation station("Central station", 1500.0, 100);

    station.sellTickets(30);
    std::cout << "Stations: " << station.getStationName() << std::endl;
    std::cout << "Ticket price: " << station.getTicketPrice() << " rub." << std::endl;
    std::cout << "Total tickets: " << station.getTotalSeats() << std::endl;
    std::cout << "Tickets sold: " << station.getSoldTickets() << std::endl;
    std::cout << "Price of all unsold tickets: " << station.calculateUnsoldTicketsRevenue() << " rub." << std::endl;

    return 0;
}
//https://colab.research.google.com/drive/1VagKgsV6OhVIcV8nzkuy7fEJQhngibvn?usp=sharing