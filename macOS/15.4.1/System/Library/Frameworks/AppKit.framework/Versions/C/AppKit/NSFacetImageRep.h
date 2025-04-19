@class CUIRenditionKey, NSAppearance;

@interface NSFacetImageRep : NSImageRep

@property (copy) CUIRenditionKey *renditionKey;
@property (retain) NSAppearance *appearance;
@property unsigned long long state;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_facetForState:(unsigned long long)a0;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (BOOL)_isValid;
- (BOOL)draw;
- (BOOL)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasFacetForState:(unsigned long long)a0;
- (id)initWithBaseRenditionKey:(id)a0 appearance:(id)a1;

@end
