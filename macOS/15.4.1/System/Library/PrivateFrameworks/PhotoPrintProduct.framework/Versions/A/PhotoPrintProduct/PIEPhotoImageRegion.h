@class NSMutableDictionary;
@protocol KHPhotoInfoProtocol;

@interface PIEPhotoImageRegion : NSObject

@property (readonly) id<KHPhotoInfoProtocol> photoInfo;
@property (readonly) struct CGPoint { double x; double y; } unitTopLeft;
@property (readonly) struct CGPoint { double x; double y; } unitBottomRight;
@property (readonly) NSMutableDictionary *properties;

- (void)dealloc;
- (id)initWithUnitTopLeft:(struct CGPoint { double x0; double x1; })a0 unitBottomRight:(struct CGPoint { double x0; double x1; })a1 forPhoto:(id)a2;

@end
