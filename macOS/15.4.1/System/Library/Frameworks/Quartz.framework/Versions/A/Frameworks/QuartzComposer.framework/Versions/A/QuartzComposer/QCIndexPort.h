@interface QCIndexPort : QCPort {
    unsigned long long _index;
    unsigned long long _maxIndex;
    unsigned long long _minIndex;
    void *_unused3[3];
}

+ (Class)baseClass;

- (id)value;
- (BOOL)setValue:(id)a0;
- (Class)valueClass;
- (id)stateValue;
- (BOOL)setStateValue:(id)a0;
- (void)_setItemIndex:(id)a0;
- (BOOL)acceptValuesOfClass:(Class)a0;
- (void)editValueWithEvent:(id)a0 inView:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (unsigned long long)indexValue;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (unsigned long long)maxIndexValue;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (unsigned long long)minIndexValue;
- (void)resetParameterView:(id)a0;
- (void)setIndexValue:(unsigned long long)a0;
- (void)setMaxIndexValue:(unsigned long long)a0;
- (void)setMinIndexValue:(unsigned long long)a0;
- (id)setupParameterView;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;
- (id)tooltipString;

@end
