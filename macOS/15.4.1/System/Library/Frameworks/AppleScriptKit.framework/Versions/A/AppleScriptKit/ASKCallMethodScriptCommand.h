@interface ASKCallMethodScriptCommand : ASKScriptCommand

- (id)performDefaultImplementation;
- (id)arrayFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)arrayFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)floatFromValue:(id)a0;
- (id)getResultOfInvocation:(id)a0 withType:(char)a1;
- (struct CGPoint { double x0; double x1; })pointFromArray:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromArray:(id)a0;
- (id)arrayFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)arrayFromSize:(struct CGSize { double x0; double x1; })a0;
- (void)evaluateSpecifiersInArray:(id)a0;
- (BOOL)isPointType:(id)a0;
- (BOOL)isRangeType:(id)a0;
- (BOOL)isRectType:(id)a0;
- (BOOL)isSizeType:(id)a0;
- (BOOL)isValueType:(id)a0 equalTo:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromArray:(id)a0;
- (BOOL)setArgumentOfInvocation:(id)a0 atIndex:(unsigned long long)a1 withParameter:(id)a2 ofType:(char)a3;
- (struct CGSize { double x0; double x1; })sizeFromArray:(id)a0;

@end
