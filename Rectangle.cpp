#include <iostream>

class Rectangle {
private:
    int x1, y1, x2, y2;

public:
    // ������
    Rectangle(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        std::cout << "Rectangle object created." << std::endl;
    }

    // �Ҹ���
    ~Rectangle() {
        std::cout << "Rectangle object destroyed." << std::endl;
    }

    int getWidth() const {
        return abs(x2 - x1);
    }

    int getHeight() const {
        return abs(y2 - y1);
    }

    int getPerimeter() const {
        return 2 * (getWidth() + getHeight());
    }

    int getArea() const {
        return getWidth() * getHeight();
    }

    // Show �Լ�
    void Show() const {
        std::cout << "Lower left: (" << x1 << ", " << y1 << ")" << std::endl;
        std::cout << "Upper right: (" << x2 << ", " << y2 << ")" << std::endl;
    }

    // ������ �����ε� +
    Rectangle operator+(const Rectangle& other) const {
        int new_x1 = std::min(x1, other.x1);
        int new_y1 = std::min(y1, other.y1);
        int new_x2 = std::max(x2, other.x2);
        int new_y2 = std::max(y2, other.y2);

        return Rectangle(new_x1, new_y1, new_x2, new_y2);
    }

    // ������ �����ε� -
    Rectangle operator-(const Rectangle& other) const {
        int new_x1 = std::min(x1, other.x1);
        int new_y1 = std::min(y1, other.y1);
        int new_x2 = std::max(x2, other.x2);
        int new_y2 = std::max(y2, other.y2);

        return Rectangle(new_x1, new_y1, new_x2, new_y2);
    }

    // ������ �����ε� *
    Rectangle operator*(const Rectangle& other) const {
        int new_x1 = std::min(x1, other.x1);
        int new_y1 = std::min(y1, other.y1);
        int new_x2 = std::max(x2, other.x2);
        int new_y2 = std::max(y2, other.y2);

        return Rectangle(new_x1, new_y1, new_x2, new_y2);
    }
};

int main() {
    // �����ڰ� ȣ���
    Rectangle rectangle1(1, 2, 4, 5);
    Rectangle rectangle2(2, 3, 6, 8);

    // * ������ �����ε� ȣ��
    Rectangle productRectangle = rectangle1 * rectangle2;

    std::cout << "Result of multiplication:" << std::endl;
    productRectangle.Show();

    // main �Լ��� ���� �����ϸ� �Ҹ��ڰ� ȣ���
    return 0;
}
