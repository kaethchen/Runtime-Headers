@interface _IFColor : NSObject

@property struct CGColor { } *color;

+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)whiteColor;

- (void)dealloc;
- (struct CGColor { } *)CGColor;
- (id)initWithCGColor:(struct CGColor { } *)a0;

@end
