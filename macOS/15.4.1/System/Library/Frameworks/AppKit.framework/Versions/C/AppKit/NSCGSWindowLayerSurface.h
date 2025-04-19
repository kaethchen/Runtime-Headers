@class CALayer;

@interface NSCGSWindowLayerSurface : NSCGSWindowSurface

@property (readonly, getter=isLocallyRendered) BOOL locallyRendered;
@property struct CGColorSpace { } *colorSpace;
@property (getter=isOpaque) BOOL opaque;
@property double scale;
@property unsigned int displayMask;
@property unsigned int displayNumber;
@property (retain) CALayer *layer;


@end
