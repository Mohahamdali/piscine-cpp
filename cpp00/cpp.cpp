
#include <iostream>


class contact
{
    private:
      std::string fullname;
      std::string number;
      std::string nickname;
      std::string darkest_secret;

    public:
      void set_fullname_and_number (const std::string &name,const std::string &num,const std::string &nick,const std::string &secret)
      {
        fullname = name;
        number = num;
        nickname = nick;
        darkest_secret = secret;
      }
      void print ()
      {
        std:: cout  << "Name: " << fullname << std:: endl << "number: " << number << std:: endl \
        << "Nickanme: " << nickname << std:: endl << "Secret fieled: " << darkest_secret <<std:: endl; 
      }
};

class PhoneBook
{
  private:
    contact contacts[8];
    int     contact_count;
  
  public:
    PhoneBook(){contact_count = 0;};
    void add_contact (const char  *fullname,const char  *number, const char *nickname, const char *secret_field);
      void print_contacts()
      {
        for (int i = 0; i < contact_count; ++i)
        {
            contacts[i].print();
        }
      }
};


 void PhoneBook::add_contact (const char  *fullname,const char  *number, const char *nickname, const char *secret_field)
 {
  int index = contact_count % 8;
    if (!fullname || !number || !nickname || !secret_field)
      return ; 
    contacts[index].set_fullname_and_number(std::string(fullname), std::string(number),std::string(nickname),std::string(secret_field));
    if (contact_count < 8)
      contact_count++;
    
 }


int main()
{
  PhoneBook phone;
  std::string prompt;
  std::cout << "\033[1;32m*--WELCOME TO IPHONIX--*\033[0m" << std::endl;
  std::cout << "\033[1;36mAvailable commands:\033[0m\n";
  std::cout << "  \033[1;32mADD\033[0m    - Add a new contact to the phone book\n";
  std::cout << "  \033[1;33mSEARCH\033[0m - Search and display contacts\n";
  std::cout << "  \033[1;31mEXIT\033[0m   - Exit the program\n";


  
  while (true)
  {
    std::cout << "\033[1;36mPlease entre command sir: \033[0m";
    if (!std:: getline(std::cin, prompt))
      break;
    if (prompt == "ADD")
    {
      std::string name;
      std::string number;
      std::string nickname;
      std::string secret_filed;
      std:: cout << "Entre full name: ";
      if (!std:: getline(std::cin,name) || name.empty())
      {
         std::cout << "\n\033[1;31mName is not valid!!\033[0m" << std::endl;
          continue;
      }
      std:: cout << "Entre numbre(mobile): ";
      if (!getline (std::cin, number)  || number.empty())
      {
        std::cout << "\n\033[1;31mNumber is not valid!!\033[0m" << std::endl;
        continue;
      }
      std::cout << "What's the nickname? ";
      if (!getline (std::cin, nickname)  || nickname.empty()) {
        std::cout << "\n\033[1;31mNickname is not valid!!\033[0m" << std::endl;
        continue;
      }
      std::cout << "Please share the contact's darkest secret: ";
      if (!getline (std::cin, secret_filed)  || secret_filed.empty())
      {
        std::cout << "\033[1;31mError: Darkest secret cannot be empty! Please enter a valid secret.\033[0m" << std::endl;
        continue;
      }
      phone.add_contact(name.c_str(), number.c_str(), nickname.c_str(), secret_filed.c_str());
    }
    else if (prompt == "SEARCH")
    {
      
    }
    else if (prompt == "EXIT")
    {
      std::cout << "\nExiting IPHONIX...\n";
      break;
    }
    else
      std::cout << "\n\033[1;31mPlease entre valid command!!\033[0m" << std::endl;

  }
  phone.print_contacts();
}
