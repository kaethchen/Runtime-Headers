@class NSCache, NSArray, NSMapTable, NSHMDDevice, NSColorSpace, NSHMDIOSurfaceSession;
@protocol MTLDevice;

@interface NSHMDMetalSession : NSObject {
    NSHMDIOSurfaceSession *_session;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _textureMutex;
    NSCache *_strongTextures;
    NSMapTable *_weakTextures;
    unsigned long long _textureUsage;
}

@property (readonly) NSHMDDevice *device;
@property (readonly, getter=isValid) BOOL valid;
@property struct CGSize { double x0; double x1; } drawableSize;
@property unsigned long long drawablePixelFormat;
@property (retain) NSColorSpace *drawableColorSpace;
@property unsigned long long drawableTextureUsage;
@property (readonly) struct CGSize { double x0; double x1; } preferredDrawableSize;
@property (readonly) struct CGSize { double x0; double x1; } minDrawableSize;
@property (readonly) struct CGSize { double x0; double x1; } maxDrawableSize;
@property (readonly, copy) NSArray *supportedDrawablePixelFormats;
@property (readonly) unsigned long long preferredDrawablePixelFormat;
@property (readonly) id<MTLDevice> metalDevice;

+ (id)keyPathsForValuesAffectingValid;

- (void)dealloc;
- (void)invalidate;
- (id)displayLinkWithHandler:(id /* block */)a0;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (BOOL)isDrawableAvailable;
- (id)nextDrawable;

@end
