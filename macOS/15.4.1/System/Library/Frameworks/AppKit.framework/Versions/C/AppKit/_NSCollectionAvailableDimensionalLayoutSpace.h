@interface _NSCollectionAvailableDimensionalLayoutSpace : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) int axis;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 axis:(int)a1;

@end
