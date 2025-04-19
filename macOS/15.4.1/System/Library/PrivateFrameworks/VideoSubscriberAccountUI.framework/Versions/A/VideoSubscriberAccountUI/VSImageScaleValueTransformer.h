@interface VSImageScaleValueTransformer : NSValueTransformer

@property (nonatomic) struct CGSize { double width; double height; } preferredSize;

@end
