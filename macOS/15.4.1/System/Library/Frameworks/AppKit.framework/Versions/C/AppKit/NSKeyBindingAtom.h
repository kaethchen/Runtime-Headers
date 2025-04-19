@interface NSKeyBindingAtom : NSObject {
    unsigned short key;
    unsigned int mask;
    id _binding;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)binding;
- (id)initWithKey:(unsigned short)a0 mask:(unsigned long long)a1 binding:(id)a2;
- (void)setBinding:(id)a0;

@end
