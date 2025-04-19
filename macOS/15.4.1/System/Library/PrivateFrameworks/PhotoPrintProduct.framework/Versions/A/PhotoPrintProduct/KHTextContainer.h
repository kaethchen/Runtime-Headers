@interface KHTextContainer : NSTextContainer {
    BOOL _roughGlyphLayoutDirty;
    BOOL _layoutBoundingGlyphLayoutDirty;
    BOOL _realGlyphLayoutDirty;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _roughUsedRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutBoundingRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _realUsedRect;
}

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutBoundingRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutBoundingRectForGlyphAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realRectForGlyphAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })realRectOriginForGlyphAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realUsedRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roughUsedRect;
- (void)setGlyphLayoutDirty;

@end
