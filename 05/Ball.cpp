#include "Ball.hpp"
#include <cmath>

/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setVelocity(const Velocity& _velocity) {
    velocity = _velocity;
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    // TODO: место для доработки
    return velocity;
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    painter.draw(center, radius, color);
}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& _center) {
    center = _center;
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    return center;
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    return radius;
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    return M_PI*pow(radius,3)*4./3.;
}
/**
 * @brief Возвращает true или flase.
 * @details Информирует о том подвергается ли объект столкновениям с другими объектами.
 */
bool Ball::getIsCollidable() const
{
    return isCollidable;
}

/**
 * @brief Конструктор объекта Ball
 * @param _center координаты центра шара
 * @param _velocity вектор скорости шара
 * @param _color цвет шара
 * @param _radius радиус шара 
 */
Ball::Ball(Point _center, Velocity _velocity, Color _color, double _radius, bool _isCollidable)
{
    center = _center;
    velocity = _velocity;
    color = _color;
    radius = _radius;
    isCollidable = _isCollidable;

}
