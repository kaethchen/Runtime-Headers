@interface IKColor : NSObject {
    struct CGColor { } *_cgColor;
}

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithRGBA:(double *)a0;

- (void)dealloc;
- (void)finalize;
- (struct CGColor { } *)cgColor;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;

@end
