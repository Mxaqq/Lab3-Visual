#ifndef TFORMULA_H
#define TFORMULA_H

// �������������� ������������ ����� ������� � ����������� �����
const int MemMaxSize = 255;

class TFormula {
private:
    char Formula[MemMaxSize];
    char PostfixForm[MemMaxSize];

public:
    const char* GetPostfixForm() const {
        return PostfixForm;
    }
    TFormula(const char* str);
    int FormulaConverter();
    double FormulaCalculator();
    bool isOperator(char c);
    bool hasHigherPrecedence(char op1, char op2);
    TFormula();
};

#endif // TFORMULA_H