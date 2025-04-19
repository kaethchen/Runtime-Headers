@interface IKTemplateLayer : CALayer {
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_templateRects;
    long long _templateRectsCount;
}

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)handleMouseDown:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleDoubleClick:(struct CGPoint { double x0; double x1; })a0;
- (void)setTemplateRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)templateRects:(long long *)a0;

@end
