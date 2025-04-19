@interface BaseProcessor : NSObject

@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long bufferWidth;
@property (nonatomic) unsigned long long bufferHeight;

- (id)init;
- (BOOL)matchBufferResolution:(id)a0;
- (BOOL)matchPixelFormat:(id)a0;
- (void)resetBufferResolution;
- (void)resetFormat;

@end
