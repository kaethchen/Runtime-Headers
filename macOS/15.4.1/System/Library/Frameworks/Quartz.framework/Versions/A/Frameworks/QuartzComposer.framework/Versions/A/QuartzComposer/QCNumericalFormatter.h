@interface QCNumericalFormatter : NSFormatter {
    BOOL _allowsFloats;
    double _min;
    double _max;
}

- (id)init;
- (double)minimum;
- (double)maximum;
- (BOOL)allowsFloats;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (void)setAllowsFloats:(BOOL)a0;
- (void)setMaximum:(double)a0;
- (void)setMinimum:(double)a0;
- (id)stringForObjectValue:(id)a0;

@end
