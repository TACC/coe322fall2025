#include <memory>
#include <sstream>

#include <string>

class Node; // forward definition

class List {
private:
  std::shared_ptr<Node> head{nullptr};
public:
  List() {};
  Node& headnode();
  Node& nth_node(int);
  void insert(int value);
  int length();
  int length_iterative();
  bool contains_value(int v);
  bool is_sorted();
  std::string as_string();
};

class Node {
private:
  int datavalue{0},datacount{0};
  std::shared_ptr<Node> next{nullptr};
public:
  Node() {};
  Node(int value,std::shared_ptr<Node> next=nullptr)
    : datavalue(value),datacount(1),next(next) {};
  Node& nth_node(int);
  int value() {
    return datavalue; };
  auto nextnode() {
    return next; };
  int length();
  int count() {
    return datacount; };
  bool has_next() {
    return next!=nullptr; };
  bool contains_value(int v);
  bool is_sorted();
  void insert(int value);
  std::string as_string();
};

