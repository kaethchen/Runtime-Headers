@interface QSizeObject : NSObject

@property double width;
@property double height;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;

@end
