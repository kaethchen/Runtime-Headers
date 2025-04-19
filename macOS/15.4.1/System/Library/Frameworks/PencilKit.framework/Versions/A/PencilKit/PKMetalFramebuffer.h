@protocol MTLTexture, MTLDevice;

@interface PKMetalFramebuffer : NSObject {
    long long _nonVolatileLockCount;
    BOOL _isVolatile;
    BOOL _canBeMadeVolatile;
}

@property (readonly, nonatomic) id<MTLTexture> colorTexture;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) BOOL memoryless;
@property (readonly, nonatomic) BOOL backedByIOSurface;
@property (readonly, nonatomic) unsigned long long sampleCount;
@property (readonly, nonatomic) struct __IOSurface { } *ioSurface;
@property (nonatomic) struct { double red; double green; double blue; double alpha; } clearColor;
@property (nonatomic) long long blendMode;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct __IOSurface { } *)createIOSurface;
- (void)createColorTextureIfNecessary;
- (void)decrementNonPurgeableCount;
- (BOOL)incrementNonPurgeableCount;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned long long)a1 device:(id)a2 memoryless:(BOOL)a3 backedByIOSurface:(BOOL)a4 sampleCount:(unsigned long long)a5 purgeable:(BOOL)a6;
- (BOOL)isPurged;

@end
