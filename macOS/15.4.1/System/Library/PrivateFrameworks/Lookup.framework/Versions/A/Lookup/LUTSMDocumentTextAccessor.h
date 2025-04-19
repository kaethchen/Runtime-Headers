@interface LUTSMDocumentTextAccessor : LUTextAccessor

+ (BOOL)canAccessTextAtLocation:(struct CGPoint { double x0; double x1; })a0;
+ (BOOL)canAccessTextInView:(id)a0;

- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithView:(id)a0;
- (id)_termAndTextOrigin:(struct CGPoint { double x0; double x1; } *)a0;
- (id)_termAtLocation:(struct CGPoint { double x0; double x1; })a0 textOrigin:(struct CGPoint { double x0; double x1; } *)a1;
- (id)termForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textOrigin:(struct CGPoint { double x0; double x1; } *)a1;

@end
