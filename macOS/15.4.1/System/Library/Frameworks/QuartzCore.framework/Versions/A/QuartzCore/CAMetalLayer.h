@class CADisplay, CAEDRMetadata, NSDictionary;
@protocol MTLDevice;

@interface CAMetalLayer : CALayer {
    void *_priv;
}

@property (nonatomic) BOOL fenceEnabled;
@property (nonatomic) BOOL serverSyncEnabled;
@property (nonatomic) BOOL disableFIFO;
@property (nonatomic) BOOL muxLockEnabled;
@property (nonatomic) BOOL lowLatency;
@property (nonatomic) BOOL allowsDisplayCompositingWithCopy;
@property (nonatomic) BOOL nonDefaultColorspace;
@property (nonatomic) double drawableTimeoutSeconds;
@property (nonatomic) unsigned long long protectionOptions;
@property (nonatomic) unsigned long long textureUsage;
@property (readonly, nonatomic) unsigned long long displayCompositingInternalStatus;
@property (nonatomic) BOOL lowWorkload;
@property (retain, nonatomic) CADisplay *cachedDisplay;
@property (retain) id<MTLDevice> device;
@property (readonly) id<MTLDevice> preferredDevice;
@property unsigned long long pixelFormat;
@property BOOL framebufferOnly;
@property struct CGSize { double x0; double x1; } drawableSize;
@property unsigned long long maximumDrawableCount;
@property BOOL presentsWithTransaction;
@property struct CGColorSpace { } *colorspace;
@property BOOL wantsExtendedDynamicRangeContent;
@property (retain) CAEDRMetadata *EDRMetadata;
@property BOOL displaySyncEnabled;
@property BOOL allowsNextDrawableTimeout;
@property (copy) NSDictionary *developerHUDProperties;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)dealloc;
- (id)init;
- (void)didChangeValueForKey:(id)a0;
- (void)setName:(id)a0;
- (void)_display;
- (BOOL)isDrawableAvailable;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)nextDrawable;
- (void)setContents:(id)a0;
- (void)discardContents;
- (BOOL)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(void *)a0;
- (id)currentDisplay;
- (id)newDrawable;
- (void)removeBackBuffers;
- (void)setColorspace:(struct CGColorSpace { } *)a0 nonDefault:(BOOL)a1;
- (id)shimDrawable:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;

@end
