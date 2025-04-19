@interface SCShareableContentInformation : NSObject

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) float pointPixelScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;

- (id)initWithStyle:(long long)a0 pixelScale:(float)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
