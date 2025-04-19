@interface _NSStepperModel : _NSControlModel {
    double _value;
    double _minValue;
    double _maxValue;
}

@property double minValue;
@property double maxValue;

- (double)doubleValue;
- (float)floatValue;
- (int)intValue;
- (long long)integerValue;
- (id)stringValue;
- (BOOL)setStringValue:(id)a0;
- (BOOL)setObjectValue:(id)a0;
- (id)objectValue;
- (BOOL)setDoubleValue:(double)a0;
- (id)_rawContents;
- (BOOL)setFloatValue:(float)a0;
- (BOOL)setIntValue:(int)a0;
- (BOOL)setIntegerValue:(long long)a0;

@end
