@class NSString, NSDictionary, PAOpenGLContextPool, _PALowPriorityOpenGLDevice, NSObject;
@protocol OS_dispatch_queue;

@interface PAOpenGLDevice : PADevice {
    NSString *_identifier;
    NSDictionary *_properties;
    PAOpenGLContextPool *_pool;
    NSObject<OS_dispatch_queue> *_initializationQueue;
    BOOL _initialized;
    NSObject<OS_dispatch_queue> *_deallocQueue;
    _PALowPriorityOpenGLDevice *_lowPriorityDevice;
}

@property (readonly, nonatomic) PAOpenGLContextPool *contextPool;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long rendererID;
@property (readonly, nonatomic) unsigned int displayMask;
@property (readonly, nonatomic) int virtualScreen;

+ (id)defaultDevice;
+ (id)availableDevices;
+ (struct _CGLContextObject { } *)sharedContext;
+ (id)discreteDevice;
+ (id)integratedDevice;
+ (id)_availableDevices;
+ (struct _CGLContextObject { } *)_sharedContext;
+ (struct _CGLPixelFormatObject { } *)_sharedPixelFormat:(BOOL)a0;
+ (id)deviceWithOpenGLDisplayMask:(unsigned int)a0;
+ (id)deviceWithRendererID:(unsigned long long)a0;
+ (id)deviceWithScreen:(id)a0;
+ (id)deviceWithVirtualScreen:(int)a0;
+ (struct _CGLPixelFormatObject { } *)sharedDeepPixelFormat;
+ (struct _CGLPixelFormatObject { } *)sharedPixelFormat;

- (id)description;
- (void).cxx_destruct;
- (id)identifier;
- (int)type;
- (BOOL)isIntegrated;
- (BOOL)isOffline;
- (id)_properties;
- (BOOL)isAccelerated;
- (BOOL)isExtensionSupported:(id)a0;
- (id)_deviceProperties;
- (BOOL)isDiscrete;
- (id)renderFormatWithBitDepth:(long long)a0 alpha:(BOOL)a1;
- (id)_getString:(unsigned int)a0;
- (id)_initWithVirtualScreen:(int)a0;
- (BOOL)_isIntegerInternalFormatSupported:(int)a0;
- (BOOL)_isInternalFormatSupported:(int)a0;
- (void)_lazyInitOnce;
- (void)_lazyInitOnceIfNeeded;
- (id)_newIdentifierWithVirtualScreen:(int)a0;
- (id)_openGLProperties;
- (id)_rendererProperties;
- (id)deallocQueue;
- (void)executeBlockWithContext:(id /* block */)a0;
- (id)extendedRangeRenderFormat;
- (BOOL)isEmulated;
- (BOOL)isTextureFormatSupported:(int)a0;
- (id)lowPriorityDevice;
- (id)openGLRenderer;
- (id)openGLVendor;
- (id)openGLVersion;
- (id)renderFormatForPixelFormat:(id)a0 alpha:(BOOL)a1;
- (id)shadingLanguageVersion;
- (id)subDeviceWithQoS:(unsigned int)a0;
- (unsigned long long)textureMemoryInMegaBytes;

@end
