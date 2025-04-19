@interface _JEAtomicCounter : NSObject {
    _Atomic long long _value;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)decrement;
- (long long)increment;
- (id)initWithInitialValue:(long long)a0;

@end
