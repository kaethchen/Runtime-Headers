@interface CICGContext : CIContext {
    struct CICGContextPrivate { } *_cgPriv;
}

+ (id)contextWithCGContext:(struct CGContext { } *)a0 options:(id)a1;
+ (id)contextWithCGContext:(struct CGContext { } *)a0;

- (id)initWithCGContext:(struct CGContext { } *)a0;
- (id)initWithCGContext:(struct CGContext { } *)a0 options:(id)a1;

@end
