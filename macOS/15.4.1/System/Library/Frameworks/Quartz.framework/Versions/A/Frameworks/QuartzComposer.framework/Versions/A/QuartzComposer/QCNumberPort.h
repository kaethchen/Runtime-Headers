@interface QCNumberPort : QCPort {
    double _value;
    double _min;
    double _max;
    void *_unused3[4];
}

+ (Class)baseClass;

- (double)doubleValue;
- (id)value;
- (BOOL)setValue:(id)a0;
- (void)setDoubleValue:(double)a0;
- (Class)valueClass;
- (id)stateValue;
- (BOOL)setStateValue:(id)a0;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (double)doubleValue:(id)a0;
- (void)editValueWithEvent:(id)a0 inView:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (double)maxDoubleValue;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (double)minDoubleValue;
- (void)resetParameterView:(id)a0;
- (void)setMaxDoubleValue:(double)a0;
- (void)setMinDoubleValue:(double)a0;
- (id)setupParameterView;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;
- (id)tooltipString;

@end
