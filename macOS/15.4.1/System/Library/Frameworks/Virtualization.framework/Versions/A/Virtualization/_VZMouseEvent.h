@interface _VZMouseEvent : NSObject {
    long long _pressedButtons;
    double _deltaX;
    double _deltaY;
}

- (id)initWithPressedButtons:(long long)a0 deltaX:(double)a1 deltaY:(double)a2;

@end
