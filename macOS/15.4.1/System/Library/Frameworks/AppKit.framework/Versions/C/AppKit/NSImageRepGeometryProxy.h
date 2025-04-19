@class NSImageRep;

@interface NSImageRepGeometryProxy : NSProxy {
    NSImageRep *_rep;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alignmentRect;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _capInsets;
    long long _resizingMode;
    BOOL _template;
}

+ (id)proxyWithRep:(id)a0 alignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 capInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2 resizingMode:(long long)a3 template:(BOOL)a4;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRect;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })capInsets;
- (BOOL)inheritsGeometryFromImage;
- (BOOL)isTemplate;
- (long long)resizingMode;

@end
