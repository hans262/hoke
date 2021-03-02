#include <iostream>
#include <string>
using namespace std;

bool isNumber(string str) {
  for (const char& s : str) {
    int tmp = (int)s;
    if (tmp == 46) {
      continue;
    }
    if (tmp < 48 || tmp > 57) {
      return false;
    }
  }
  return true;
}

string trim(string s) {
  if (s.empty()) {
    return s;
  }
  s.erase(0, s.find_first_not_of(" "));
  s.erase(s.find_last_not_of(" ") + 1);
  return s;
}

int main() {
  cout << "--------------------" << endl;
  cout << "----养老金计算器----" << endl;
  cout << "--------------------" << endl;

  string data;

  int year;
  cout << "请输入缴费年限（社保缴纳的最低年限为15年）：" << endl;
  getline(cin, data);
  data = trim(data);
  while (!isNumber(data)) {
    cout << "输入错误，请重新输入：" << endl;
    getline(cin, data);
    data = trim(data);
  }
  year = stoi(data);
  cout << "year: " << year << endl;

  double mean_month;
  cout << "请输入个人月平均缴纳（个人部分一般缴纳300元左右或300元以上）："
       << endl;
  getline(cin, data);
  data = trim(data);
  while (!isNumber(data)) {
    cout << "输入错误，请重新输入：" << endl;
    getline(cin, data);
    data = trim(data);
  }
  mean_month = stod(data);
  cout << "mean_month: " << mean_month << endl;

  //个人账户缴纳总和
  double personal_sum = year * 12 * mean_month;
  cout << "personal_sum: " << personal_sum << endl;

  double last_year_mean_month_wages;
  cout << "请输入当前地区上年度工月平均工资：" << endl;
  getline(cin, data);
  data = trim(data);
  while (!isNumber(data)) {
    cout << "输入错误，请重新输入：" << endl;
    getline(cin, data);
    data = trim(data);
  }
  last_year_mean_month_wages = stod(data);
  cout << "last_year_mean_month_wages: " << last_year_mean_month_wages << endl;

  double mean_payment_index;
  cout << "请输入个人月平均缴费指数（一般为0.6 ~ 2之间）：" << endl;
  getline(cin, data);
  data = trim(data);
  while (!isNumber(data)) {
    cout << "输入错误，请重新输入：" << endl;
    getline(cin, data);
    data = trim(data);
  }
  mean_payment_index = stod(data);
  cout << "mean_payment_index: " << mean_payment_index << endl;

  int plan_month;
  cout << "请输入计发月数（50岁为195、55岁为170、60岁为139）：" << endl;
  getline(cin, data);
  data = trim(data);
  while (!isNumber(data)) {
    cout << "输入错误，请重新输入：" << endl;
    getline(cin, data);
    data = trim(data);
  }
  plan_month = stoi(data);
  cout << "plan_month: " << plan_month << endl;

  //基础养老金
  double basic_pensions = (last_year_mean_month_wages +
                           (last_year_mean_month_wages * mean_payment_index)) /
                          2 * year * 0.01;

  //个人账户养老金
  double private_account = personal_sum / plan_month;
  double pensions = basic_pensions + private_account;

  printf("你退休后每月能领到养老金：%.2lf元\n", pensions);
}

/*
  养老金 = 基础养老金 + 个人账户养老金

  基础养老金 = (全省上年度在岗职工月平均工资 + 本人平均缴费指数 *
  全省上年度在岗职工月平均工资) ÷ 2× 缴费年限 × 0.01

  本人平均缴费指数:
    平均缴费工资指数是指参加养老保险社会统筹人员历年缴费工资指数的平均值，称为平均缴费工资指数。
    它是由参保人每年的缴费基数除以当地上年的职工平均工资，得出缴费当年的缴费工资指数，
    如此每年计算一次，到退休时，把每年的缴费工资指数相加，然后再除以实际缴费年限得出的。
    按规定在0.6至3之间。

  个人账户养老金 = 个人账户储存额 ÷
  计发月数(50岁为195、55岁为170、60岁为139，不再统一是120了)
*/