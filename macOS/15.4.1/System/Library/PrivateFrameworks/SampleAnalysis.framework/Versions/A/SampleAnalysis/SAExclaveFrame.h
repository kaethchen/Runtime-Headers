@class SAExclave;

@interface SAExclaveFrame : SAFrame {
    SAExclave *_exclave;
}

- (void).cxx_destruct;
- (void)reset;
- (id)exclave;
- (id)initCopyingFrame:(id)a0 withParent:(id)a1;
- (BOOL)isExclave;

@end
