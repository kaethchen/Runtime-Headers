@interface SBPropertyThunk : SBThunk {
    unsigned int _code;
    unsigned int _ae_type;
    BOOL _is_value;
}

+ (id)thunksForElement:(id)a0 inDocument:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned int)code;
- (unsigned int)ae_type;
- (id)signatureFormat;
- (id)initWithElement:(id)a0 inDocument:(id)a1;
- (BOOL)is_value;
- (id)selectorNameForName:(id)a0;

@end
