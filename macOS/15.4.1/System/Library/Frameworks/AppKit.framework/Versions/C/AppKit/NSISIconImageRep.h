@class ISIcon;

@interface NSISIconImageRep : NSImageRep {
    ISIcon *_icon;
    BOOL _allowPlaceholder;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (struct CGImage { } *)CGImageForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 context:(id)a1 hints:(id)a2;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (BOOL)_isValid;
- (BOOL)_wantsToBeCached;
- (BOOL)draw;
- (id)initWithIcon:(id)a0 size:(double)a1 scale:(double)a2 appearanceName:(id)a3 allowingPlaceholder:(BOOL)a4;

@end
