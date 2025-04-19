@protocol MKSystemControllerOpenURLDelegate;

@interface MKSystemController : NSObject

@property (weak, nonatomic) id<MKSystemControllerOpenURLDelegate> openURLDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)openURL:(id)a0;
- (struct CGSize { double x0; double x1; })screenSize;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isInternalInstall;
- (double)screenScale;
- (BOOL)isHiDPI;
- (id)_defaultOpenURLOptions;
- (BOOL)_isInSpotlight;
- (void)openUserActivity:(id)a0 withApplicationRecord:(id)a1 requireOptionKeyPromptUnlockDevice:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)overrideBlurStyle;
- (void)placeDialRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)reduceMotionEnabled;
- (BOOL)requiresRTT;
- (BOOL)shouldCaptureMapViewGestureAnalytics;
- (BOOL)shouldUseDarkAppearanceForAppearance:(id)a0;
- (BOOL)supports3DImagery;
- (BOOL)supports3DMaps;
- (BOOL)supportsExtendedGestures;
- (BOOL)supportsPitchAPI;
- (int)userInterfaceIdiom;

@end
