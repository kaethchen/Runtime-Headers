@interface NSTableViewChildCellProxy : NSTableViewCellProxy

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realElementRect;
- (id)accessibilityParentAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySizeAttribute;
- (id)initWithRow:(long long)a0 tableColumn:(id)a1 realElement:(id)a2;

@end
