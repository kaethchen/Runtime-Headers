@class NSDictionary, QLSeamlessOpeningItemInfo, NSObject;
@protocol OS_dispatch_source;

@interface QLSeamlessDocumentConcreteOpener : QLSeamlessDocumentOpener {
    unsigned int _port;
    int _openingState;
    int _loadingState;
    int _showingState;
    NSObject<OS_dispatch_source> *_deferredTimeoutTimer;
    double _loadingProgress;
    NSDictionary *_displayState;
    QLSeamlessOpeningItemInfo *_info;
    BOOL _automaticallyAdjustWindowPosition;
    long long _animationBehavior;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)discard;
- (void)beginDocumentLoading;
- (void)beginDocumentOpening;
- (void)endDocumentLoading;
- (void)endDocumentOpening;
- (BOOL)isAnimating;
- (BOOL)isOpening;
- (void)showWindow:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withBlock:(id /* block */)a2;
- (id)displayState;
- (double)loadingProgress;
- (void)setLoadingProgress:(double)a0;
- (id)transitionImage;
- (BOOL)_beginShowingWindow:(id)a0 effect:(id *)a1;
- (void)_endShowingWindow:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 alreadyVisible:(BOOL)a2 effect:(id)a3;
- (void)_noteDocumentOpenedWithWindow:(id)a0;
- (void)_startDeferredTimeout;
- (void)_stopDeferredTimeout;
- (BOOL)automaticallyAdjustWindowPosition;
- (void)deferDocumentLoading;
- (void)deferDocumentShowing;
- (void)setAutomaticallyAdjustWindowPosition:(BOOL)a0;
- (void)showLoadingWindow;

@end
