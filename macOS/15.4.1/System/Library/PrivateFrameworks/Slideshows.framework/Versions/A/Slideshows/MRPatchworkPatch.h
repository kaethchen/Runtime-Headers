@class MRImage;

@interface MRPatchworkPatch : NSObject

@property (retain, nonatomic) MRImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangle;
@property (nonatomic) BOOL needsBlend;

- (void)dealloc;
- (id)initWithImage:(id)a0 rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 needsBlend:(BOOL)a2;

@end
