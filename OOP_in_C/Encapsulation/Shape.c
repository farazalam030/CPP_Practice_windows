#include "Shape.h"
// Constructor
void Shape_ctor(Shape *const me, short x, short y) {
  me->x = x;
  me->y = y;
}

// move_By

void Shape_moveBy(Shape *const me, short dx, short dy) {
  me->x = me->x + dx;
  me->y = me->y + dy;
}
short Shape_getX(Shape *const me) { return (me->x); }
short Shape_getY(Shape *const me) { return (me->y); }
