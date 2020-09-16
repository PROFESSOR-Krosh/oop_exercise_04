#include "figures.h"


template <class T>
void Triangle_read_cords(std::pair<T, T> &A, std::pair<T, T> &B, std::pair<T, T> &C){
    std::cout << "cords point A: ";
    std::cin >> A;
    std::cout << "cords point B: ";
    std::cin >> B;
    std::cout << "cords point C: ";
    std::cin >> C;
}

template <class T>
void Square_read_cords(std::pair<T, T> &A, std::pair<T, T> &C){
    std::cout << "cords lower left point A: ";
    std::cin >> A;
    std::cout << "cords top right point C: ";
    std::cin >> C;
}

template <class T>
void Rectangle_read_cords(std::pair<T, T> &A, std::pair<T, T> &B, std::pair<T, T> &C, std::pair<T, T> &D){
    std::cout << "cords point A: ";
    std::cin >> A;
    std::cout << "cords point B: ";
    std::cin >> B;
    std::cout << "cords point C: ";
    std::cin >> C;
    std::cout << "cords point C: ";
    std::cin >> D;
}

template <class T>
void actions(const T &figure) {
            Coord_print(figure);
            std::cout << "Figure area" << calc_area(figure) << std::endl;
            std::cout << "The coordinates of the center of the figure"
            << calc_center(figure) << std::endl;


}

int main(){
    using int_pair = std::pair<int, int>;
    using double_pair = std::pair<double, double>;

    std::tuple<int_pair, int_pair, int_pair> tuple_intTri;
    std::tuple<double_pair, double_pair, double_pair> tuple_doubleTri;
    std::tuple<int_pair, int_pair> tuple_intSqu;
    std::tuple<double_pair, double_pair> tuple_doubleSqu;
    std::tuple<int_pair, int_pair, int_pair, int_pair> tuple_intRec;
    std::tuple<double_pair, double_pair, double_pair, double_pair > tuple_doubleRec;

    int id = 0;
    std::string option = "Menu";

    while(option != "Ex") {
        if (option == "Tri") {
            id++;
            std::cout << "Choose data type: int or double" << std::endl;
            std::cin >> option;
            if (option == "int") {
                std::cout << "choose the type of shape input: through the [class] or [tuple]" << std::endl;
                std::cin >> option;
                if (option == "class") {
                    std::pair<int, int> A, B, C;
                    Triangle_read_cords(A, B, C);
                    Triangle<int> tri_int(A, B, C);
                    std::cout << id << " Figure: Triangle integer\n";
                    actions(tri_int);
                } else if (option == "tuple") {
                    std::pair<int, int> A, B, C;
                    Triangle_read_cords(A, B, C);
                    std::get<0>(tuple_intTri) = A;
                    std::get<1>(tuple_intTri) = B;
                    std::get<2>(tuple_intTri) = C;
                    std::cout << id << " Figure: Triangle integer\n";
                    Coord_print(tuple_intTri);
                    std::cout << "Area:" << calc_area(tuple_intTri) << std::endl;
                    std::cout << "Center:" << calc_center(tuple_intTri) << std::endl;
                }
            } else if (option == "double") {
                std::cout << "choose the type of shape input: through the [class] or [tuple]" << std::endl;
                std::cin >> option;
                if (option == "class") {
                    std::pair<double, double> A, B, C;
                    Triangle_read_cords(A, B, C);
                    Triangle<double> tri_double(A, B, C);
                    std::cout << id << " Figure: Triangle double\n";
                    actions(tri_double);
                } else if (option == "tuple") {
                    std::pair<double, double> A, B, C;
                    Triangle_read_cords(A, B, C);
                    std::get<0>(tuple_doubleTri) = A;
                    std::get<1>(tuple_doubleTri) = B;
                    std::get<2>(tuple_doubleTri) = C;
                    std::cout << id << " Figure: Triangle double\n";
                    Coord_print(tuple_doubleTri);
                    std::cout << "Area:" << calc_area(tuple_doubleTri) << std::endl;
                    std::cout << "Center:" << calc_center(tuple_doubleTri) << std::endl;
                }
            }
        } else if (option == "Squ") {
            id++;
            std::cout << "Choose data type: int or double" << std::endl;
            std::cin >> option;
            if (option == "int") {
                std::cout << "choose the type of shape input: through the [class] or [tuple]" << std::endl;
                std::cin >> option;
                if (option == "class") {
                    std::pair<int, int> A, C;
                    Square_read_cords(A, C);
                    Square<int> squ_int(A, C);
                    std::cout << id << " Figure: Square integer\n";
                    actions(squ_int);
                } else if (option == "tuple") {
                    std::pair<int, int> A, C;
                    Square_read_cords(A, C);
                    std::get<0>(tuple_intSqu) = A;
                    std::get<1>(tuple_intSqu) = C;
                    std::cout << id << " Figure: Square integer\n";
                    Coord_print(tuple_intSqu);
                    std::cout << "Area:" << calc_area(tuple_intSqu) << std::endl;
                    std::cout << "Center:" << calc_center(tuple_intSqu) << std::endl;
                }
            } else if (option == "double") {
                std::cout << "choose the type of shape input: through the [class] or [tuple]" << std::endl;
                std::cin >> option;
                if (option == "class") {
                    std::pair<double, double> A, C;
                    Square_read_cords(A, C);
                    Square<double> squ_double(A, C);
                    std::cout << id << " Figure: Square double\n";
                    actions(squ_double);
                } else if (option == "tuple") {
                    std::pair<double, double> A, C;
                    Square_read_cords(A, C);
                    std::get<0>(tuple_doubleSqu) = A;
                    std::get<1>(tuple_doubleSqu) = C;
                    std::cout << id << " Figure: Square double\n";
                    Coord_print(tuple_doubleSqu);
                    std::cout << "Area:" << calc_area(tuple_doubleSqu) << std::endl;
                    std::cout << "Center:" <<calc_center(tuple_doubleSqu) << std::endl;
                }
            }
        } else if (option == "Rec") {
            id++;
            std::cout << "Choose data type: int or double" << std::endl;
            std::cin >> option;
            if (option == "int") {
                std::cout << "choose the type of shape input: through the [class] or [tuple]" << std::endl;
                std::cin >> option;
                if (option == "class") {
                    std::pair<int, int> A, B, C, D;
                    Rectangle_read_cords(A, B, C, D);
                    Rectangle<int> rec_int(A, B, C, D);
                    std::cout << id << " Figure: Rectangle integer\n";
                    actions(rec_int);
                } else if (option == "tuple") {
                    std::pair<int, int> A, B, C, D;
                    Rectangle_read_cords(A, B, C, D);
                    std::get<0>(tuple_intRec) = A;
                    std::get<1>(tuple_intRec) = B;
                    std::get<2>(tuple_intRec) = C;
                    std::get<3>(tuple_intRec) = D;
                    std::cout << id << " Figure: Rectangle integer\n";
                    Coord_print(tuple_intRec);
                    std::cout << "Area:" << calc_area(tuple_intRec) << std::endl;
                    std::cout << "Center:" <<calc_center(tuple_intRec) << std::endl;
                }
            } else if (option == "double") {
                std::cout << "choose the type of shape input: through the [class] or [tuple]" << std::endl;
                std::cin >> option;
                if (option == "class") {
                    std::pair<double, double> A, B, C, D;
                    Rectangle_read_cords(A, B, C, D);
                    Rectangle<double> rec_double(A, B, C, D);
                    std::cout << id << " Figure: Rectangle double\n";
                    actions(rec_double);
                } else if (option == "tuple") {
                    std::pair<double, double> A, B, C, D;
                    Rectangle_read_cords(A, B, C, D);
                    std::get<0>(tuple_doubleRec) = A;
                    std::get<1>(tuple_doubleRec) = B;
                    std::get<2>(tuple_doubleRec) = C;
                    std::get<3>(tuple_doubleRec) = D;
                    std::cout << id << " Figure: Rectangle double\n";
                    Coord_print(tuple_doubleSqu);
                    std::cout << "Area:" << calc_area(tuple_doubleRec) << std::endl;
                    std::cout << "Center:" << calc_center(tuple_doubleRec) << std::endl;
                }
            }
        } else if (option == "Menu") {
            std::cout << "Enter a word for action:" << std::endl;
            std::cout << "1) Create Triangle[Tri]" <<
                      std::endl << "2) Create Square [Squ]" <<
                      std::endl << "3) Create Rectangle [Rec]" <<
                      std::endl << "4) And then enter word to select data type: [int] or [double]" <<
                      std::endl << "5) Next choose where to write a figure: [tuple] or [class] object" <<
                      std::endl << "6) Demonstration of a tuple with figures[tuple_work]" <<
                      std::endl << "7) Print Menu[Menu]" <<
                      std::endl << "8) Exit[Ex]" << std::endl;
        } else if(option == "tuple_work") {
            std::cout << "\nExample with tuple usage:\n\n";
            std::tuple<double_pair, double_pair> exm_tup_squ({1.1, 1.1}, {3.3,3.3});
            Coord_print(exm_tup_squ);
            std::cout << "Area: "<< calc_area(exm_tup_squ) << std::endl;
            std::cout << "<<Center of the figure:" << calc_center(exm_tup_squ) << std::endl;

            std::tuple<int_pair, int_pair, int_pair> exm_tup_tri({0,0}, {1,1}, {2,2});
            std::cout << "Area: "<< calc_area(exm_tup_tri) << std::endl;





        }else {
            std::cout << "You did not select an action or you were mistaken in entering the name of the action" << std::endl;
        }
        std::cin >> option;
    }
    return 0;
}