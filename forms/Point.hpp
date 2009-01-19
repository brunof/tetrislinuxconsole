#ifndef __POINT_HPP__
#define __POINT_HPP__

template <class X, class Y>
class Point {
	X _x;
	Y _y;
public:
	
	// Constructors
	Point(Point<X,Y> &p): _x(p->x()), _y(p->y()) { };
	Point(X x,Y y): _x(x), _y(y) { }

	// Setters/Getters
	void x(X x) { this->_x = x; };
	const X x() const { return _x; };
	void y(Y y) { this->_y = y; };
	const Y y() const { return _y; };

	// Operations
	Point<X,Y> &add(Point<X,Y> &p) {
		Point<X,Y> &r = new Point<X,Y>(this);
		r.x(r.x() + p.x());
		r.y(r.y() + p.y());
		return r;
	}

	Point<X,Y> &substract(Point<X,Y> &p) {
		Point<X,Y> &r = new Point<X,Y>(this);
		r.x(r.x() - p.x());
		r.y(r.y() - p.y());
		return r;
	}

};

#endif
