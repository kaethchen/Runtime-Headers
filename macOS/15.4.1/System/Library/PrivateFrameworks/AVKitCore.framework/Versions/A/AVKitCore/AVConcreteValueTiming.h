@interface AVConcreteValueTiming : AVValueTiming {
    double _value;
    double _timeStamp;
    double _rate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)rate;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (struct { double x0; double x1; })_timing;
- (double)anchorTimeStamp;
- (double)anchorValue;

@end
