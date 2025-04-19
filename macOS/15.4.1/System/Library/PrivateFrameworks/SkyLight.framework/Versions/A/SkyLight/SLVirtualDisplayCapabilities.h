@interface SLVirtualDisplayCapabilities : NSObject

@property (readonly, nonatomic) struct { unsigned int width; unsigned int height; } maximumSizeInPixels;
@property (readonly, nonatomic) struct { float width; float height; } maximumPixelsPerPoint;
@property (readonly, nonatomic) struct { float width; float height; } minimumPixelsPerPoint;
@property (readonly, nonatomic) float minimumRefreshRate;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)dictionaryRepresentation;

@end
