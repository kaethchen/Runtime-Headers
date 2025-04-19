@class CIFilterShape;

@interface CISampler : NSObject <NSCopying> {
    void *_priv;
}

@property (readonly) CIFilterShape *definition;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } extent;

+ (id)samplerWithImage:(id)a0;
+ (id)samplerWithImage:(id)a0 keysAndValues:(id)a1;
+ (id)samplerWithImage:(id)a0 options:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (void *)colorSpace;
- (id)initWithImage:(id)a0;
- (id)opaqueShape;
- (id)_initWithImage:(id)a0 key0:(id)a1 vargs:(char *)a2;
- (void *)_internalRepresentation;
- (id)initWithImage:(id)a0 keysAndValues:(id)a1;
- (id)initWithImage:(id)a0 options:(id)a1;
- (id)wrapMode;

@end
