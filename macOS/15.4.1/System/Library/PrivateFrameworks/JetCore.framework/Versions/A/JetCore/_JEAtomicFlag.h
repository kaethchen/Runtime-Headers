@interface _JEAtomicFlag : NSObject {
    _Atomic BOOL _value;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithInitialValue:(BOOL)a0;
- (BOOL)compareWithValue:(BOOL)a0 andExchangeWithValue:(BOOL)a1;

@end
