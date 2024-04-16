#include <cstdint>
#include <string>
#include <iostream>

class Student
{
   public:
    int16_t num_of_exams = 0;
    int32_t id_number;
    std::string name;
    // define a constructor
    Student(std::string par_name, int32_t par_id, int64_t par_bank_account);
    void print() const;
    void update_bank_account(int64_t par_bank_account);

   private:
    int64_t bank_account_;
};

Student::Student(const std::string par_name, const int32_t par_id, const int64_t par_bank_account)
    : name{par_name}, bank_account_{par_bank_account}, id_number{par_id}{}

void Student::print() const
{
    std::cout << "********** Student ************" << std::endl;
    std::cout << "name: " << name << std::endl;
    // we can use the "this" pointer to make the usage 100% clear
    std::cout << "id: " << this->id_number << std::endl;
    std::cout << "num of exams: " << num_of_exams << std::endl;
    std::cout << "bank account: " << bank_account_ << std::endl;
    std::cout << "*******************************" << std::endl;
}

void Student::update_bank_account(const int64_t par_bank_account)
{
    bank_account_ = par_bank_account;
}

auto main() -> int
{
    Student student("John Doe", 123456, 1000000);
    student.num_of_exams = 5;

    student.print();

    return 0;
}