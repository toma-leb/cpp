// Do not change
#include <iostream>
#include <fstream>


#include <list>
#include <vector>
#include <deque>

#include "my_sort.hpp"

// Change here
// All occurences of XXX need to be replaced with
// something more meaningful

template<class S, class C>
void read_file_to_cont(std::ifstream& f, C& c) {

  S string;

  while (f >> string) {
    c.push_back(string);
  }
}

template<class S, class C>
void read_and_sort(std::ifstream& fi, std::ofstream& fo) {
  
  C cont = {};
  read_file_to_cont<S,C>(fi,cont);
  my_selection_sort(cont.begin(),cont.end());

  for(auto item : cont) {
    fo << item << std::endl;
  }
}

template<class S>
void read_and_sort_decide_container(std::ifstream& fi, std::ofstream& fo) {
  char cont_type;
  fi >> cont_type;
  fo << cont_type << std::endl;

  switch(cont_type)
  {
    case 'l':
      read_and_sort<S, std::list<S>>(fi, fo);
      break;

    case 'v' :
      read_and_sort<S, std::vector<S>>(fi, fo);
      break;

    case 'd' :
      read_and_sort<S, std::deque<S>>(fi, fo);
      break;

    default : 
      throw std::runtime_error("Unknown container type");
  }
}

void read_and_sort_decide_valuetype(std::ifstream& fi, std::ofstream& fo) {
  char val_type;
  fi >> val_type;
  fo << val_type << std::endl;

  switch(val_type)
  {
    case 'i' :
      read_and_sort_decide_container<int>(fi, fo);
      break;

    case 'u' :
      read_and_sort_decide_container<unsigned>(fi, fo);
      break;

    case 'f' :
      read_and_sort_decide_container<float>(fi, fo);
      break; 

    case 'd' :
      read_and_sort_decide_container<double>(fi, fo);
      break;

    case 'c' :
      read_and_sort_decide_container<char>(fi, fo);
      break; 

    case 's' :
      read_and_sort_decide_container<std::string>(fi, fo);
      break; 

    default : 
      throw std::runtime_error("Unknown value type"); 
  }
}
