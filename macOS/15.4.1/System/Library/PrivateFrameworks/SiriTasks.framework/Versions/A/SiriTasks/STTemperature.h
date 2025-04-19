@interface STTemperature : STSiriModelObject {
    double _value;
    long long _units;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)value;
- (long long)units;
- (id)_initWithValue:(double)a0 units:(long long)a1;

@end
