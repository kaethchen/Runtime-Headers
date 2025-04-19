@interface IFGraphicSymbolOverride : NSObject

@property (readonly) long long shape;
@property (readonly) int enclosureDimension;
@property BOOL isDefault;
@property unsigned long long symbolWeight;
@property unsigned long long symbolSize;
@property float pointSizeAdjuster;
@property struct CGSize { double width; double height; } offset;

- (id)description;
- (id)initWithShape:(long long)a0 enclosureDimension:(int)a1;

@end
