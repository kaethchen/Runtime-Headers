@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (id)description;
- (id)init;
- (BOOL)getFlag;
- (id)initWithFlag:(BOOL)a0;
- (BOOL)setFlag:(BOOL)a0;

@end
