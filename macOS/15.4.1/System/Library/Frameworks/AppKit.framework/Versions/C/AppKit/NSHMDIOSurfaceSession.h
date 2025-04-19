@class NSArray, NSMutableDictionary, NSHMDDevice, NSColorSpace;

@interface NSHMDIOSurfaceSession : NSObject {
    NSHMDDevice *_device;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _SLSHMD { } *_hmd;
    NSMutableDictionary *_configuration;
}

@property (readonly) NSHMDDevice *device;
@property (readonly, getter=isValid) BOOL valid;
@property struct CGSize { double x0; double x1; } drawableSize;
@property unsigned int drawablePixelFormat;
@property (retain) NSColorSpace *drawableColorSpace;
@property (readonly) struct CGSize { double x0; double x1; } preferredDrawableSize;
@property (readonly) struct CGSize { double x0; double x1; } minDrawableSize;
@property (readonly) struct CGSize { double x0; double x1; } maxDrawableSize;
@property (readonly, copy) NSArray *supportedDrawablePixelFormats;
@property (readonly) unsigned int preferredDrawablePixelFormat;
@property (readonly) unsigned int preferredAcceleratorPort;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)displayLinkWithHandler:(id /* block */)a0;
- (long long)drawableCount;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (BOOL)isDrawableAvailable;
- (id)nextDrawable;
- (void)setDrawableCount:(long long)a0;

@end
