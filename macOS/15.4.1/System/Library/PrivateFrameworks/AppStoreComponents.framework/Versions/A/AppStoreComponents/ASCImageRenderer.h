@interface ASCImageRenderer : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } capInsets;
@property (readonly, nonatomic) long long renderingMode;

+ (id)systemImageNamed:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)bundleImageNamed:(id)a0 compatibleWithTraitCollection:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)imageWithActions:(id /* block */)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 capInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 renderingMode:(long long)a2;

@end
