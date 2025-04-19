@interface AVCircularProgressIndicator : NSView {
    double _minValue;
    double _maxValue;
    double _value;
}

@property double minValue;
@property double maxValue;
@property double value;

- (void)dealloc;
- (id)init;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
