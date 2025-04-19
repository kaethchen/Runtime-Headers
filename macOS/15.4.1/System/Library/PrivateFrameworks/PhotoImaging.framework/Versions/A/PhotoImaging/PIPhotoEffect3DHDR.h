@class CIImage;

@interface PIPhotoEffect3DHDR : PIPhotoEffectHDR

@property (retain) CIImage *inputDepthMap;
@property float inputThreshold;

- (void).cxx_destruct;
- (void)configureFilter:(id)a0;

@end
