@class NSScrollView, OKPageViewController, NSTimer, NSMutableDictionary, NSMutableArray, NSString;

@interface OKNavigatorScrollViewControllerProxy : OKNavigatorViewController <OKNavigatorScrollViewControllerProxyExport> {
    OKPageViewController *_pageViewController;
    NSScrollView *_scrollView;
    double _velocityTimestamp;
    double _currentVelocity;
    double _currentTilt;
    double _currentRotationZ;
    NSTimer *_autopanningTimer;
    double _velocity2;
    NSMutableArray *_registeredObjects;
    NSMutableDictionary *_registeredActions;
    NSString *_viewDidScrollActionScript;
    struct CGPoint { double x; double y; } _lastOffset;
}

@property (nonatomic) double velocity;
@property (nonatomic) double tilt;
@property (nonatomic) double rotationZ;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)viewDidLoad;
- (void)triggerAction;
- (BOOL)prepareForDisplay;
- (void)doMotionAction:(id)a0;
- (void)registerObjectOnScrollingEvent:(id)a0;
- (void)applySettings;
- (struct _OKEventElement { struct CGPoint { double x0; double x1; } x0; long long x1; id x2; struct _OKEventElement *x3; struct _OKEventElement *x4; } *)createElementWithObject:(id)a0 atOffset:(struct CGPoint { double x0; double x1; })a1;
- (struct _OKEventList { unsigned long long x0; struct _OKEventElement *x1; struct _OKEventElement *x2; } *)createList;
- (void)deleteElement:(struct _OKEventElement { struct CGPoint { double x0; double x1; } x0; long long x1; id x2; struct _OKEventElement *x3; struct _OKEventElement *x4; } *)a0 inList:(struct _OKEventList { unsigned long long x0; struct _OKEventElement *x1; struct _OKEventElement *x2; } *)a1;
- (void)doApplyMotion:(id)a0;
- (void)insertElement:(struct _OKEventElement { struct CGPoint { double x0; double x1; } x0; long long x1; id x2; struct _OKEventElement *x3; struct _OKEventElement *x4; } *)a0 inList:(struct _OKEventList { unsigned long long x0; struct _OKEventElement *x1; struct _OKEventElement *x2; } *)a1;
- (id)keyForOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })layoutFactor;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)registerObject:(id)a0 forActionAtOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollViewDidScrollProxy;
- (id)sectorKeysForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSettingContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSettingViewDidScrollActionScript:(id)a0;
- (id)settingViewDidScrollActionScript;
- (void)updatePageViewController;
- (void)updateParallax;

@end
