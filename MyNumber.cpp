#include "MyNumber.h"

const char addition_tab[9][9] = {
    {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
    {'a', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
    {'b', 'b', 'h', 'e', 'a', 'g', 'c', 'd', 'f'},
    {'c', 'c', 'e', 'a', 'f', 'b', 'd', 'h', 'g'},
    {'d', 'd', 'a', 'f', 'g', 'c', 'h', 'e', 'b'},
    {'e', 'e', 'g', 'b', 'c', 'h', 'a', 'f', 'd'},
    {'f', 'f', 'c', 'd', 'h', 'a', 'g', 'b', 'e'},
    {'g', 'g', 'd', 'h', 'e', 'f', 'b', 'c', 'a'},
    {'h', 'h', 'f', 'g', 'b', 'd', 'e', 'a', 'c'}
};

const char addition_carry_tab[9][9] = {
    {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
    {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
    {'b', 'a', 'a', 'a', 'b', 'a', 'a', 'a', 'a'},
    {'c', 'a', 'a', 'b', 'b', 'b', 'a', 'b', 'a'},
    {'d', 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b'},
    {'e', 'a', 'a', 'b', 'b', 'b', 'b', 'b', 'a'},
    {'f', 'a', 'a', 'a', 'b', 'b', 'a', 'b', 'a'},
    {'g', 'a', 'a', 'b', 'b', 'b', 'b', 'b', 'b'},
    {'h', 'a', 'a', 'a', 'b', 'a', 'a', 'b', 'a'}
};

const char multiplication_tab[9][9] = {
    {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
    {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
    {'b', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
    {'c', 'a', 'c', 'a', 'c', 'c', 'c', 'a', 'a'},
    {'d', 'a', 'd', 'c', 'b', 'f', 'e', 'h', 'g'},
    {'e', 'a', 'e', 'c', 'f', 'b', 'd', 'g', 'h'},
    {'f', 'a', 'f', 'c', 'e', 'd', 'b', 'h', 'g'},
    {'g', 'a', 'g', 'a', 'h', 'g', 'h', 'c', 'c'},
    {'h', 'a', 'h', 'a', 'g', 'h', 'g', 'c', 'c'}
};

const char multiplication_carry_tab[9][9] = {
    {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'},
    {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
    {'b', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'},
    {'c', 'a', 'a', 'h', 'f', 'h', 'b', 'f', 'b'},
    {'d', 'a', 'a', 'f', 'g', 'c', 'h', 'e', 'b'},
    {'e', 'a', 'a', 'h', 'c', 'f', 'b', 'f', 'b'},
    {'f', 'a', 'a', 'b', 'h', 'b', 'b', 'h', 'a'},
    {'g', 'a', 'a', 'f', 'e', 'f', 'h', 'c', 'b'},
    {'h', 'a', 'a', 'b', 'b', 'b', 'a', 'b', 'a'}
};
void printOperationTables() {
    cout << "\n" << string(60, '=') << "\n";
    cout << "                   ТАБЛИЦЫ ОПЕРАЦИЙ\n";
    cout << string(60, '=') << "\n";

    cout << "\nТАБЛИЦА СЛОЖЕНИЯ:\n";
    cout << "   |  a  b  c  d  e  f  g  h\n";
    cout << "---+------------------------\n";
    for (int i = 1; i < 9; i++) {
        cout << " " << addition_tab[i][0] << " | ";
        for (int j = 1; j < 9; j++) {
            cout << " " << addition_tab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nТАБЛИЦА ПЕРЕНОСОВ СЛОЖЕНИЯ:\n";
    cout << "   |  a  b  c  d  e  f  g  h\n";
    cout << "---+------------------------\n";
    for (int i = 1; i < 9; i++) {
        cout << " " << addition_carry_tab[i][0] << " | ";
        for (int j = 1; j < 9; j++) {
            cout << " " << addition_carry_tab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nТАБЛИЦА УМНОЖЕНИЯ:\n";
    cout << "   |  a  b  c  d  e  f  g  h\n";
    cout << "---+------------------------\n";
    for (int i = 1; i < 9; i++) {
        cout << " " << multiplication_tab[i][0] << " | ";
        for (int j = 1; j < 9; j++) {
            cout << " " << multiplication_tab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nТАБЛИЦА ПЕРЕНОСОВ УМНОЖЕНИЯ:\n";
    cout << "   |  a  b  c  d  e  f  g  h\n";
    cout << "---+------------------------\n";
    for (int i = 1; i < 9; i++) {
        cout << " " << multiplication_carry_tab[i][0] << " | ";
        for (int j = 1; j < 9; j++) {
            cout << " " << multiplication_carry_tab[i][j] << " ";
        }
        cout << "\n";
    }

    cout << string(60, '=') << "\n";
}
int findRow(char symbol, const char table[9][9]) {
    for (int row = 1; row <= 8; row++) {
        if (table[row][0] == symbol) {
            return row;
        }
    }
    return 1;
}

int findCol(char symbol, const char table[9][9]) {
    for (int col = 1; col <= 8; col++) {
        if (table[0][col] == symbol) {
            return col;
        }
    }
    return 1; 
}
MyNumber::MyNumber(string n_value)
{
    if (!n_value.empty() && n_value[0] == '-') {
        sign = false;
        value = n_value.substr(1);
    }
    else {
        sign = true;
        value = n_value;
    }
}
MyNumber::MyNumber(string n_value, bool n_sign) : MyNumber(n_value){
    sign = n_sign;
};

string MyNumber::out() const
{
    if (value == "range") {
        return "[-dddddddd; dddddddd]";
    }
    if (value == "empty") {
        return "{}";
    }

    if (value.size() > 8) {
        return "Произошло переполнение разрядной сетки\n";
    }
    return (sign ? "" : "-") + value;
}

string MyNumber::get_value() const
{
    return value;
}

void MyNumber::enter()
{
    string n_value;
    bool valid;

    while (true) {
        cout << "Введите число, используя [a-h]: ";
        cin >> n_value;

        if (n_value.empty()) {
            cout << "\nОшибка: Число не может быть пустым. Попробуйте ещё раз.\n\n";
            continue;
        }

        size_t value_length = n_value.length();
        bool has_minus = false;

        if (n_value[0] == '-') {
            has_minus = true;
            value_length--;
        }

        if (value_length == 0 || value_length > 8) {
            cout << "\nОшибка: Число должно содержать от 1 до 8 символов. Попробуйте ещё раз.\n\n";
            continue;
        }

        valid = true;
        size_t start_index = has_minus ? 1 : 0;

        for (size_t i = start_index; i < n_value.length(); i++) {
            char c = n_value[i];
            if (!(c >= 'a' && c <= 'h')) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << "\nОшибка: Можно использовать только символы a-h и минус. Попробуйте ещё раз.\n\n";
            continue;
        }
        break;
    }

    if (n_value[0] == '-') {
        sign = false;
        value = n_value.substr(1);
    }
    else {
        sign = true;
        value = n_value;
    }

    cin.ignore(10000, '\n');
}


MyNumber MyNumber::addition(const MyNumber& other) const
{
    if (this->sign == true and other.sign == false) {
        MyNumber abs_other = other;
        abs_other.sign = !other.sign;
        return this->subtraction(abs_other);
    }
    else if (this->sign == false and other.sign == true) {
        MyNumber abs_my = *this;
        abs_my.sign = !sign;
        return other.subtraction(abs_my);
    }

    string value1 = value;
    string value2 = other.value;

    int my_len = value.length();
    int other_len = other.value.length();
    int max_len = max(my_len, other_len);

    if (my_len < max_len) {
        value1 = string(max_len - my_len, 'a') + value1;
    }
    if (other_len < max_len) {
        value2 = string(max_len - other_len, 'a') + value2;
    }

    string result(max_len, 'a');  
    char transfer = 'a';// -- общий перенос

    for (int i = max_len - 1; i >= 0; i--) {
        int row1 = findRow(value1[i], addition_tab); 
        int col2 = findCol(value2[i], addition_tab);
        int col_carry = findCol(transfer, addition_tab);

        char sum1 = addition_tab[row1][col2];
        char carry1 = addition_carry_tab[row1][col2];

        int row_sum1 = findRow(sum1, addition_tab);
        char sum2 = addition_tab[row_sum1][col_carry];
        char carry2 = addition_carry_tab[row_sum1][col_carry];

        int row_carry1 = findRow(carry1, addition_tab);
        int col_carry2 = findCol(carry2, addition_tab);
        transfer = addition_tab[row_carry1][col_carry2];

        result[i] = sum2;
    }

    if (transfer != 'a') {
        result = string(1, transfer) + result;
    }

    auto first_non_zero = result.find_first_not_of('a');
    if (first_non_zero != string::npos) {
        result = result.substr(first_non_zero);
    }
    else {
        result = "a";
    }

    return MyNumber(sign ? result : "-" + result);
}

MyNumber MyNumber::subtraction(const MyNumber& other) const
{
    if (sign != other.sign) {
        MyNumber abs_other = other;
        abs_other.sign = !other.sign;
        return this->addition(abs_other);
    }

    bool result_sign;
    string this_val = value;
    string other_val = other.value;

    auto non_a_this = this_val.find_first_not_of('a');
    this_val = (non_a_this == string::npos) ? "a" : this_val.substr(non_a_this);

    auto non_a_other = other_val.find_first_not_of('a');
    other_val = (non_a_other == string::npos) ? "a" : other_val.substr(non_a_other);

    string larg, small;

    if (*this < other) {
        larg = other_val;
        small = this_val;
        result_sign = (sign) ? false : true;
    }
    else {
        larg = this_val;
        small = other_val;
        result_sign = (sign) ? true : false;
    }

    string first_num = larg;
    string second_num = small;

    second_num = string(larg.length() - small.length(), 'a') + small;
    string result(first_num.length(), 'a');
    char borrow = 'a';

    for (int i = first_num.length() - 1; i >= 0; --i) {
        char current_second = second_num[i];
        char adjusted_first = first_num[i];
        bool extra_borrow = false;

        if (borrow != 'a') {
            int col_borrow = findCol(borrow, addition_tab);

            for (int row = 1; row <= 8; ++row) {
                if (addition_tab[row][col_borrow] == first_num[i]) {
                    adjusted_first = addition_tab[row][0];

                    if (first_num[i] == 'a' && addition_carry_tab[row][col_borrow] != 'a') {
                        extra_borrow = true;
                    }
                    break;
                }
            }
        }

        char diff = 'a';
        char new_borrow = 'a';

        int col_current = findCol(current_second, addition_tab);
        for (int row = 1; row <= 8; ++row) {
            if (addition_tab[row][col_current] == adjusted_first) {
                diff = addition_tab[row][0];
                new_borrow = addition_carry_tab[row][col_current];

                if (extra_borrow) {
                    if (new_borrow == 'a') {
                        new_borrow = 'b';
                    }
                }
                break;
            }
        }

        result[i] = diff;
        borrow = new_borrow;
    }
    auto non_a = result.find_first_not_of('a');
    result = non_a == string::npos ? "a" : result.substr(non_a);
    if (result == "a") {
        return MyNumber("a");
    }
    return MyNumber((result_sign ? "" : "-") + result);
}
bool isZeroString(const string& s) {
    return s.find_first_not_of('a') == string::npos;
}
MyNumber MyNumber::multiplication(const MyNumber& other) const
{
    bool result_sign = (sign == other.sign);

    if (isZeroString(value) or isZeroString(other.value)) {
        return MyNumber("a");
    }

    MyNumber total("a");

    for (int i = other.value.length() - 1; i >= 0; i--) {
        string partial_value(value.length(), 'a');

        char digit2 = other.value[i]; 
        char carry = 'a';
        int col_digit2 = findCol(digit2, multiplication_tab);

        for (int j = value.length() - 1; j >= 0; j--) {
            char digit1 = value[j]; 
            int row_digit1 = findRow(digit1, multiplication_tab);

            char product = multiplication_tab[row_digit1][col_digit2]; 
            char mul_carry = multiplication_carry_tab[row_digit1][col_digit2]; 

            int row_product = findRow(product, multiplication_tab);
            int col_carry = findCol(carry, multiplication_tab);

            char sum = addition_tab[row_product][col_carry];
            char sum_carry = addition_carry_tab[row_product][col_carry];

            int row_mul_carry = findRow(mul_carry, multiplication_tab);
            int col_sum_carry = findCol(sum_carry, multiplication_tab);
            carry = addition_tab[row_mul_carry][col_sum_carry];

            partial_value[j] = sum; 
        }

        if (carry != 'a') {
           partial_value = string(1, carry) + partial_value;
        }

        partial_value += string(other.value.length() - 1 - i, 'a');

        MyNumber partial_product(partial_value, true);
        total = total.addition(partial_product);
    }

    total.sign = result_sign;
    return total;
}

MyNumber MyNumber::division(const MyNumber& other, string& ost) const
{
    if (isZeroString(value) && isZeroString(other.value)) {
        ost = "a";
        return MyNumber("range");
    }
    if (isZeroString(other.value)) {
        ost = "a";
        return MyNumber("empty"); 
    }
    bool result_sign = (sign == other.sign);
    string divisible = value;
    string divider = other.value;

    string quotient = "a";
    string remainder = "a";

    /*if (*this < other) {
        quotient = "a";
        remainder = value;
        ost = value;
        return MyNumber(quotient);
    }*/
    if (*this == other) {
        quotient = "b";
        remainder = "a";
        ost = "a";
        MyNumber result(quotient);
        result.sign = result_sign;
        return result;
    }


    MyNumber current_divisible(divisible, true);
    MyNumber divider_abs(divider, true);

    while (current_divisible >= divider_abs) {
        current_divisible = current_divisible.subtraction(divider_abs);
        quotient = MyNumber(quotient).addition(MyNumber("b")).get_value();
    }

    remainder = current_divisible.get_value();

    if (sign == false && remainder != "a") {
        quotient = MyNumber(quotient).addition(MyNumber("b")).get_value();
        remainder = MyNumber(divider).subtraction(MyNumber(remainder)).get_value();
    }

    auto non_a_for_q = quotient.find_first_not_of('a');
    quotient = non_a_for_q == string::npos ? "a" : quotient.substr(non_a_for_q);

    auto non_a_for_r = remainder.find_first_not_of('a');
    remainder = non_a_for_r == string::npos ? "a" : remainder.substr(non_a_for_r);

    MyNumber result(quotient);
    if (result.value == "a") {
        result.sign = true;
    }
    else {
        result.sign = result_sign;
    }
    
    
    ost = remainder;
    return result;
}

bool MyNumber::operator<(const MyNumber& other) const
{
    string sequence = "abhfcegd";

    string str1 = value;
    string str2 = other.value;

    if (str1.size() < str2.size()) {
        str1 = string(str2.size() - str1.size(), 'a') + str1;
    }
    else if (str2.size() < str1.size()) {
        str2 = string(str1.size() - str2.size(), 'a') + str2;
    }

    for (size_t i = 0; i < str1.size(); i++) {
        int order1 = sequence.find(str1[i]);
        int order2 = sequence.find(str2[i]);
        if (order1 < order2) return true;
        if (order1 > order2) return false;
    }

    return false;
}
bool MyNumber::operator>(const MyNumber& other) const
{
    string sequence = "abhfcegd";

    string str1 = value;
    string str2 = other.value;

    if (str1.size() < str2.size()) {
        str1 = string(str2.size() - str1.size(), 'a') + str1;
    }
    else if (str2.size() < str1.size()) {
        str2 = string(str1.size() - str2.size(), 'a') + str2;
    }

    for (size_t i = 0; i < str1.size(); i++) {
        int order1 = sequence.find(str1[i]);
        int order2 = sequence.find(str2[i]);
        if (order1 > order2) return true;
        if (order1 < order2) return false;
    }

    return false;
}

bool MyNumber::operator>=(const MyNumber& other) const
{
    return !(*this < other);
}

bool MyNumber::operator==(const MyNumber& other) const
{
    string sequence = "abhfcegd";

    string str1 = value;
    string str2 = other.value;

    if (str1.size() < str2.size()) {
        str1 = string(str2.size() - str1.size(), 'a') + str1;
    }
    else if (str2.size() < str1.size()) {
        str2 = string(str1.size() - str2.size(), 'a') + str2;
    }

    for (size_t i = 0; i < str1.size(); i++) {
        int order1 = sequence.find(str1[i]);
        int order2 = sequence.find(str2[i]);
        if (order1 != order2) {
            return false;
        }
    }
    return true;
}