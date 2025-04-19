@class PXGTungstenRecordingSession, NSString, NSView, PXGEntityManager, NSMutableDictionary, PXGSpriteDataStore, PXScrollViewController;
@protocol PXGRendererDelegate, PXGTextureConverter;

@interface PXGViewRenderer : NSObject <PXScrollViewControllerObserver, PXGRenderer> {
    NSMutableDictionary *_reusableViewsByClass;
    NSMutableDictionary *_reusableViewInfoBySpriteIndex;
    NSMutableDictionary *_trackingContainerViewInfoBySpriteIndex;
    NSView *_underlayHostingView;
    long long _spriteBufferCapacity;
    unsigned int *_spriteIndexes;
    struct { float x0; } *_textureInfos;
    struct CGPoint { double x; double y; } _renderedVisibleOrigin;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _loadInsets;
    PXGSpriteDataStore *_lastPresentationDataStore;
}

@property (nonatomic) BOOL shouldSeparateViewLayers;
@property (weak, nonatomic) NSView *rootView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGRendererDelegate> delegate;
@property (retain, nonatomic) PXGEntityManager *entityManager;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) struct { long long scrollRegime; BOOL isAnimatingScrollTowardsEdge; BOOL isScrubbing; BOOL isAnimatingContent; unsigned long long contentChangeTrend; BOOL isViewBoundsChanging; BOOL isInitialLoad; BOOL isVisible; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect; } interactionState;
@property (nonatomic) struct PXGCameraConfiguration { struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } billboardMatrix; void /* unknown type, empty encoding */ renderOrigin; } cameraConfiguration;
@property (nonatomic) BOOL lowMemoryMode;
@property (readonly, nonatomic) unsigned char presentationType;
@property (readonly, nonatomic) id<PXGTextureConverter> textureConverter;
@property (readonly, nonatomic) BOOL wantsToDriveRender;
@property (readonly, nonatomic) BOOL wantsBGRATextures;
@property (readonly, nonatomic) BOOL wantsMipmaps;
@property (readonly, nonatomic) unsigned long long destinationColorSpaceName;
@property (retain, nonatomic) PXGTungstenRecordingSession *recordingSession;
@property (retain, nonatomic) PXScrollViewController *scrollViewController;
@property (copy, nonatomic) id /* block */ test_renderSnapshotHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)releaseResources;
- (double)_screenScale;
- (id)_dequeueViewWithClass:(Class)a0;
- (void)_ensureUnderlayHostingView;
- (void)_makeViewInfoReusable:(id)a0;
- (void)_resizeBuffersForSpriteCount:(long long)a0;
- (void)_shiftViewsToCompensateForDeferredVisibleOrigin;
- (void)renderImmediately;
- (id)renderSnapshotForRequest:(struct { unsigned char x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })a0 offscreenEffect:(id)a1;
- (void)renderSpritesWithTextures:(id)a0 dataStore:(id)a1 presentationDataStore:(id)a2 presentationMetadataStore:(id)a3 layout:(id)a4;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)setNeedsRender;
- (id)trackingContainerViewForSpriteIndex:(unsigned int)a0;
- (void)updateWithChangeDetails:(id)a0;
- (id)viewForSpriteIndex:(unsigned int)a0;

@end
