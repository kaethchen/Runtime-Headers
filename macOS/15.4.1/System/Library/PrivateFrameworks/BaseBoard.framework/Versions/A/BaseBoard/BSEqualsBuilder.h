@interface BSEqualsBuilder : NSObject {
    BOOL _equal;
}

+ (id)builder;
+ (id)builderWithObject:(id)a0 ofExpectedClass:(Class)a1;

- (id)init;
- (BOOL)isEqual;
- (id)appendArray:(id)a0 counterpart:(id /* block */)a1;
- (id)appendBool:(BOOL)a0 counterpart:(id /* block */)a1;
- (id)appendCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 counterpart:(id /* block */)a1;
- (id)appendCGFloat:(double)a0 counterpart:(id /* block */)a1;
- (id)appendCGPoint:(struct CGPoint { double x0; double x1; })a0 counterpart:(id /* block */)a1;
- (id)appendCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 counterpart:(id /* block */)a1;
- (id)appendCGSize:(struct CGSize { double x0; double x1; })a0 counterpart:(id /* block */)a1;
- (id)appendClass:(Class)a0 counterpart:(id /* block */)a1;
- (id)appendDouble:(double)a0 counterpart:(id /* block */)a1;
- (id)appendEqualsBlocks:(id /* block */)a0;
- (id)appendFloat:(float)a0 counterpart:(id /* block */)a1;
- (id)appendInt64:(long long)a0 counterpart:(id /* block */)a1;
- (id)appendInteger:(long long)a0 counterpart:(id /* block */)a1;
- (id)appendObject:(id)a0 counterpart:(id /* block */)a1;
- (id)appendPointer:(void *)a0 counterpart:(id /* block */)a1;
- (id)appendSizeT:(unsigned long long)a0 counterpart:(id /* block */)a1;
- (id)appendString:(id)a0 counterpart:(id /* block */)a1;
- (id)appendUnsignedInteger:(unsigned long long)a0 counterpart:(id /* block */)a1;

@end
