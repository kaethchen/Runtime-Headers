@class NSIndexSet, PXGViewEnvironment, NSString, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_queue, PXGTextureProviderDelegate;

@interface PXGTextureProvider : NSObject <PXImageDataSpecRegistration> {
    NSMutableIndexSet *_lookupLock_activeRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
    struct { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; } *_imageDataSpecs;
    long long _imageDataSpecsCount;
    long long _imageDataSpecsCapacity;
    void **_textureAtlasManagers;
    struct { unsigned long long pixelFormat; struct __CFString *colorSpaceName; unsigned short width; unsigned short height; } _lastImageDataSpec;
    long long _lastImageDataSpecIndex;
    NSMutableIndexSet *_requestIDsPendingCancellation;
}

@property (weak, nonatomic) id<PXGTextureProviderDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic) BOOL lowMemoryMode;
@property (nonatomic) BOOL allowLargerImagesDuringScrollingInLowMemoryMode;
@property (nonatomic) BOOL canDeliverThumbnailData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue;
@property (retain, nonatomic) PXGViewEnvironment *viewEnvironment;
@property (nonatomic) struct { long long scrollRegime; BOOL isAnimatingScrollTowardsEdge; BOOL isScrubbing; BOOL isAnimatingContent; unsigned long long contentChangeTrend; BOOL isViewBoundsChanging; BOOL isInitialLoad; BOOL isVisible; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect; } interactionState;
@property (nonatomic) BOOL preferBGRA;
@property (nonatomic) BOOL preferMipmaps;
@property (nonatomic) unsigned long long preferredColorSpaceName;
@property (copy, nonatomic) NSIndexSet *requestIDsInTargetRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)releaseCachedResources;
- (id)textureAtlasManagerAtSpecIndex:(long long)a0;
- (void)cancelTextureRequestDeferred:(int)a0;
- (void)cancelTextureRequests:(id)a0;
- (void)clearTextureAtlasManagerCache;
- (void)didFinishRequestingTextures;
- (struct { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; })imageDataSpecAtIndex:(long long)a0;
- (void)interactionStateDidChange:(struct { long long x0; BOOL x1; BOOL x2; BOOL x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; })a0;
- (BOOL)isRequestActive:(int)a0;
- (void)lowMemoryModeDidChange;
- (void)performDeferredCancellations;
- (void)prepareImageDataSpecs;
- (void)provideCGImage:(struct CGImage { } *)a0 forRequestID:(int)a1;
- (void)provideCGImage:(struct CGImage { } *)a0 options:(struct { BOOL x0; float x1; BOOL x2; })a1 adjustment:(id)a2 forRequestID:(int)a3;
- (void)provideCGImage:(struct CGImage { } *)a0 options:(struct { BOOL x0; float x1; BOOL x2; })a1 adjustment:(id)a2 isDegraded:(BOOL)a3 forRequestID:(int)a4;
- (void)provideCGImage:(struct CGImage { } *)a0 options:(struct { BOOL x0; float x1; BOOL x2; })a1 forRequestID:(int)a2;
- (void)provideCGImage:(struct CGImage { } *)a0 options:(struct { BOOL x0; float x1; BOOL x2; })a1 isDegraded:(BOOL)a2 forRequestID:(int)a3;
- (void)provideFailureWithError:(id)a0 forRequestID:(int)a1;
- (void)provideImageData:(id)a0 withSpecAtIndex:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 bytesPerRow:(unsigned long long)a3 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 forRequestID:(int)a5;
- (void)provideNothingForRequestID:(int)a0;
- (void)providePayload:(id)a0 forRequestID:(int)a1;
- (void)providePixelBuffer:(struct __CVBuffer { } *)a0 options:(struct { BOOL x0; float x1; BOOL x2; })a1 adjustment:(id)a2 forRequestID:(int)a3;
- (void)providePixelBuffer:(struct __CVBuffer { } *)a0 options:(struct { BOOL x0; float x1; BOOL x2; })a1 forRequestID:(int)a2;
- (long long)registerImageDataSpec:(struct { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; })a0;
- (void)registerImageDataSpecs:(id)a0;
- (long long)requestQueue_indexForImageDataSpec:(struct { unsigned long long x0; struct __CFString *x1; unsigned short x2; unsigned short x3; })a0;
- (id)requestRenderSnapshot:(struct { unsigned char x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })a0 offscreenEffect:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 geometries:(struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 inLayout:(id)a4;
- (void)requestUpdatedTexturesForDisplayLink:(id)a0;
- (void)setNeedsRegisterToDisplayLinkUpdates;
- (void)setNeedsUnregisterFromDisplayLinkUpdates;
- (void)setTextureAtlasManager:(id)a0 atSpecIndex:(long long)a1;
- (void)viewEnvironmentDidChange:(id)a0;

@end
