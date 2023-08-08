#ifndef CIRCLE_H
#define CIRCLE_H //include guards


class Circle{
    private:
        float radius;
        int x, y;

    public:
        Circle();
        Circle(float, int, int);
        ~Circle() { };

        //funcções membors interface

        float area();
        float diametro();
        void setRadius(float); // setter
        void setOrigin(int, int);
        float getRadius(); // getter
        void imprime();
};

#endif