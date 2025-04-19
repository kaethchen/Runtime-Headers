@class NSString;

@interface UIUnderstanding.BoundingBox : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ rect;
@property (nonatomic) void /* unknown type, empty encoding */ imageSize;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1;

@end
