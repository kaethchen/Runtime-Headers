@interface LUTextAccessor : NSObject

@property (nonatomic) double scaleFactor;

+ (BOOL)enabled;
+ (BOOL)canAccessTextAtLocation:(struct CGPoint { double x0; double x1; })a0;
+ (BOOL)canAccessTextInView:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfAddressInString:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfParagraphInString:(id)a0 containingOffset:(unsigned long long)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfTermInString:(id)a0 containingOffset:(unsigned long long)a1;
+ (double)scaleFactorForView:(id)a0;
+ (id)textAccessorForScreenLocation:(struct CGPoint { double x0; double x1; })a0;
+ (id)textAccessorForView:(id)a0;
+ (id)viewAtScreenLocation:(struct CGPoint { double x0; double x1; })a0;
+ (id)windowAtScreenLocation:(struct CGPoint { double x0; double x1; })a0;

- (id)init;
- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithView:(id)a0;
- (id)_termAndTextOrigin:(struct CGPoint { double x0; double x1; } *)a0;
- (id)_termAtLocation:(struct CGPoint { double x0; double x1; })a0 textOrigin:(struct CGPoint { double x0; double x1; } *)a1;
- (id)termAndTextOrigin:(struct CGPoint { double x0; double x1; } *)a0;
- (id)termAtLocation:(struct CGPoint { double x0; double x1; })a0 textOrigin:(struct CGPoint { double x0; double x1; } *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })trimmedTermRangeForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
