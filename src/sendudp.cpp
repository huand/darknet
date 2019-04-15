#include <iostream>

#include <boost/array.hpp>
#include <boost/asio.hpp>
#include <chrono>  // std::chrono::seconds
#include <ctime>
#include <iostream>
#include <memory>
#include <string>
#include <thread>  // std::this_thread::sleep_for
#include "sendudp.h"
using boost::asio::ip::udp;

void sendudp(struct udp_packet udp_payload) {
  boost::asio::io_service io_service;
  boost::asio::ip::udp::socket socket(io_service);
  udp::endpoint remote_endpoint = udp::endpoint(
      boost::asio::ip::address_v4::from_string("192.168.1.2"), 50777);
  socket.open(udp::v4());
  boost::system::error_code err;
  socket.send_to(boost::asio::buffer(&udp_payload, udp_payload.n * (17) + 1),
                 remote_endpoint, 0, err);
  std::cout << "done!" << std::endl;
  socket.close();
  std::cout << "number of detection: " << unsigned(udp_payload.n) << std::endl;
}
