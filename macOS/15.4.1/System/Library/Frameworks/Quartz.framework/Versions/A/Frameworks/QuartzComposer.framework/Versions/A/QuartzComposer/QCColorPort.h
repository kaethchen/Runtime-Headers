@interface QCColorPort : QCPort {
    double _red;
    double _green;
    double _blue;
    double _alpha;
    void *_unused3[4];
}

+ (Class)baseClass;

- (id)value;
- (BOOL)setValue:(id)a0;
- (void)_windowWillClose:(id)a0;
- (double)alphaComponent;
- (double)blueComponent;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (double)greenComponent;
- (double)redComponent;
- (void)setAlphaComponent:(double)a0;
- (Class)valueClass;
- (id)stateValue;
- (BOOL)setStateValue:(id)a0;
- (void)setBlueComponent:(double)a0;
- (void)setGreenComponent:(double)a0;
- (void)setRedComponent:(double)a0;
- (id)CIColorWithColorSpace:(struct CGColorSpace { } *)a0;
- (void)_doneColor:(id)a0;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (BOOL)canConnectToPort:(id)a0;
- (struct CGColor { } *)createCGColor;
- (void)drawPortView:(id)a0;
- (void)editValueWithEvent:(id)a0 inView:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (struct CGColor { } *)newCGColor;
- (void)resetParameterView:(id)a0;
- (void)setRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)setupParameterView;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;
- (id)tooltipExtensionView;
- (struct CGSize { double x0; double x1; })tooltipExtensionViewSize:(id)a0;
- (id)tooltipString;

@end
