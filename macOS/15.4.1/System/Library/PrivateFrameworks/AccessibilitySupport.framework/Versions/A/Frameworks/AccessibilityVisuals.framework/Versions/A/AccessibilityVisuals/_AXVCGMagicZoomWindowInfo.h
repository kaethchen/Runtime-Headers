@interface _AXVCGMagicZoomWindowInfo : NSObject <NSCopying>

@property (nonatomic) double currentScreenBackingScaleFactor;
@property (nonatomic) double previousScreenBackingScaleFactor;
@property (nonatomic) BOOL isLargerScaleFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomWindowFrameCarbonCoordinates;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomedRegionFrameCarbonCoordinates;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
