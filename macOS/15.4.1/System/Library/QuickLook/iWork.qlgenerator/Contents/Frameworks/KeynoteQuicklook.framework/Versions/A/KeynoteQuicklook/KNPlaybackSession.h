@class TSDMPSImageConversionStorage, KNAnimationRegistryWithFallbacks, KNAnimatedSlideView, KNSlide, KNSlideNode, TSKAccessController, KNAnimationContext, NSMutableArray, KNAnimationTestResultLogger, NSString, KNPlaybackSessionConfiguration, KNAnimatedTextureManager, CALayer, NSArray, KNShow, TSDBitmapRenderingQualityInfo;
@protocol KNPlaybackLayerHost, TSDCanvasDelegate, TSKAccessControllerReadTicket;

@interface KNPlaybackSession : NSObject <TSDAnimationSession> {
    KNPlaybackSessionConfiguration *_configuration;
    KNSlideNode *_currentSlideNode;
    NSMutableArray *_breadCrumbTrail;
    BOOL _hasEndShowHandlerBeenCancelled;
    unsigned char _notifyRegisterPerformed : 1;
    int _thermalNotificationToken;
    CALayer *_noMetalBadgeLayer;
    CALayer *_sceneRenderingMetalBadgeLayer;
}

@property (readonly, nonatomic) KNShow *show;
@property (readonly, nonatomic) id<KNPlaybackLayerHost> layerHost;
@property (weak, nonatomic) id<TSDCanvasDelegate> canvasDelegate;
@property (copy, nonatomic) id /* block */ endShowHandler;
@property (readonly, nonatomic) TSKAccessController *accessController;
@property (retain, nonatomic) id<TSKAccessControllerReadTicket> accessControllerReadTicket;
@property (readonly, nonatomic) KNAnimatedTextureManager *textureManager;
@property (readonly, nonatomic) KNAnimationContext *animationContext;
@property (readonly, nonatomic) KNAnimationRegistryWithFallbacks *registry;
@property (readonly, nonatomic) KNAnimationTestResultLogger *animationTestResultLogger;
@property (retain, nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo;
@property (nonatomic) BOOL disableAutoAnimationRemoval;
@property (nonatomic) BOOL disableTransitionTextureCaching;
@property (nonatomic) BOOL isExitingShow;
@property (readonly, nonatomic) BOOL isPreview;
@property (nonatomic) BOOL isMovieExport;
@property (nonatomic) BOOL isExportingToPDF;
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (nonatomic) BOOL isShowLayerVisible;
@property (readonly, nonatomic) BOOL isWideGamut;
@property (readonly, nonatomic) BOOL isSceneRenderingEnabled;
@property (readonly, nonatomic) BOOL isRealtime;
@property (nonatomic) long long playMode;
@property (nonatomic) double autoplayTransitionDelay;
@property (nonatomic) double autoplayBuildDelay;
@property (readonly, nonatomic) BOOL isMetalEnabled;
@property (readonly, nonatomic) TSDMPSImageConversionStorage *mpsImageConversionStorage;
@property (nonatomic) BOOL shouldAlwaysSetCurrentGLContextWhenDrawing;
@property (nonatomic) BOOL shouldAnimateTransitionOnLastSlide;
@property (nonatomic) BOOL shouldAnimateNullTransitions;
@property (nonatomic) BOOL shouldAutomaticallyPlayMovies;
@property (nonatomic) BOOL shouldDrawTexturesAsynchronously;
@property (nonatomic) BOOL shouldForceTextureGeneration;
@property (nonatomic) BOOL shouldAllowBackgroundAlpha;
@property (nonatomic) BOOL shouldNotBakeActionTextures;
@property (nonatomic) BOOL shouldPreferCARenderer;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
@property (nonatomic) BOOL shouldShowVideoReflectionsAndMasks;
@property (nonatomic) BOOL shouldUseContentlessLayers;
@property (nonatomic) BOOL shouldUseSourceImage;
@property (nonatomic) BOOL shouldSkipBuilds;
@property (nonatomic) BOOL shouldRespectSkippedSlides;
@property (nonatomic) BOOL shouldAlwaysLoop;
@property (nonatomic) BOOL shouldShowLiveVideos;
@property (nonatomic) long long floatingCommentBehavior;
@property (copy, nonatomic) NSArray *slideNodesWithinPlayableRange;
@property (readonly, nonatomic) NSArray *playableSlideNodes;
@property (readonly, nonatomic) int thermalNotificationToken;
@property (readonly, nonatomic) NSMutableArray *animationDurationArray;
@property (readonly, nonatomic) NSMutableArray *eventDurationArray;
@property (readonly, nonatomic) NSMutableArray *workDurationArray;
@property (readonly, nonatomic) NSMutableArray *animationStringArray;
@property (readonly, nonatomic) KNAnimatedSlideView *animatedSlideViewForCurrentSlide;
@property (retain, nonatomic) KNSlideNode *alternateNextSlideNode;
@property (readonly, nonatomic) KNSlideNode *firstSlideNode;
@property (readonly, nonatomic) KNSlideNode *currentSlideNode;
@property (readonly, nonatomic) KNSlide *currentSlide;
@property (readonly, nonatomic) KNSlideNode *nextSlideNodeAfterCurrent;
@property (readonly, nonatomic) KNSlide *nextSlideAfterCurrent;
@property (readonly, nonatomic) KNSlideNode *previousSlideNodeBeforeCurrent;
@property (readonly, nonatomic) KNSlideNode *lastSlideNode;
@property (readonly, nonatomic) BOOL atBeginningOfDeck;
@property (readonly, nonatomic) BOOL atEndOfDeck;
@property (copy, nonatomic) NSArray *breadCrumbTrail;
@property (readonly, nonatomic) BOOL shouldIgnoreBuildVisibility;
@property (readonly, nonatomic) BOOL isPreCachingOperationActive;
@property (readonly, nonatomic) BOOL isTexturePreCachingThread;
@property (readonly, nonatomic) BOOL isDisplayLinkThread;
@property (nonatomic) unsigned long long analyticsMovieCount;
@property (nonatomic) unsigned long long analyticsHDRMovieCount;
@property (nonatomic) BOOL analyticsIsWindowedPlayback;
@property (nonatomic) BOOL analyticsHasShareToPlayActivated;
@property (nonatomic) BOOL analyticsHasPlayToShareActivated;
@property (readonly, nonatomic) BOOL isOffscreenPlayback;
@property (readonly, nonatomic) double showScale;
@property (readonly, nonatomic) BOOL supportsHDR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_updateAnimationContext:(id)a0 fromConfiguration:(id)a1;
+ (double)p_viewScaleByUpdatingShowLayerGeometry:(id)a0 forConfiguration:(id)a1 showSize:(struct CGSize { double x0; double x1; })a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)tearDown;
- (id)gotoNextSlide;
- (id)gotoPreviousSlide;
- (void)dropABreadCrumb;
- (id)p_nextBestSlideNodeToSlideNode:(id)a0;
- (id)animatedSlideViewFor:(id)a0;
- (id)breadCrumb;
- (BOOL)canMakeInfoVisible:(id)a0 allowAudioOnlyMovies:(BOOL)a1;
- (void)cancelEndShowHandler;
- (void)didChangeRootLayerGeometryAndScreenEnvironment;
- (void)enableMetalBadge:(BOOL)a0;
- (void)executeEndShowHandlerAfterDelay:(double)a0;
- (id)gotoFirstSlide;
- (id)gotoLastSlide;
- (void)gotoSlideNode:(id)a0;
- (id)initWithShow:(id)a0 configuration:(id)a1 canvasDelegate:(id)a2;
- (void)makeSharedMetalLayerVisible:(BOOL)a0;
- (id)newCanvasForInfos:(id)a0;
- (id)nextSlideNodeAfterSlideNode:(id)a0;
- (BOOL)p_checkArrayInclusionIncludingUUID:(id)a0 object:(id)a1;
- (BOOL)p_checkNodeEqualityIncludingUUID:(id)a0 secondSlideNode:(id)a1;
- (void)p_executeEndShowHandler;
- (unsigned long long)p_findIndexIncludingUUID:(id)a0 object:(id)a1;
- (id)p_intersectArraysWithUUIDEquality:(id)a0 secondArray:(id)a1;
- (void)p_setCurrentSlideNode:(id)a0;
- (BOOL)p_slideNodeIsPlayable:(id)a0;
- (void)performSlideRead:(id /* block */)a0;
- (id)previousSlideNodeBeforeSlideNode:(id)a0;
- (id)repForInfo:(id)a0 onCanvas:(id)a1;
- (unsigned long long)slideNumberForSlideNode:(id)a0;
- (void)waitUntilSlideTextureRenderingIsCompleteForIdentifier:(id)a0;

@end
