@class NSURL, NSDictionary, NSImage;

@interface QLSeamlessDocumentOpener : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property double loadingProgress;
@property BOOL automaticallyAdjustWindowPosition;
@property (readonly) NSDictionary *displayState;
@property (readonly) NSImage *transitionImage;
@property (readonly, getter=isAnimating) BOOL animating;

+ (void)initialize;
+ (id)existingSeamlessDocumentOpenerForURL:(id)a0;
+ (BOOL)isSeamlesslyOpeningDocuments;
+ (id)seamlessDocumentOpenerForURL:(id)a0;
+ (void)_checkSeamlessOpeningState;
+ (void)_discardAllActiveOpeners;
+ (BOOL)_isUIHelperMaybeRunning;
+ (void)_popSeamlessEventForURL:(id)a0;
+ (void)_popShowWindow:(id)a0 forURL:(id)a1;
+ (void)_pushSeamlessEventForURL:(id)a0;
+ (void)_pushShowWindow:(id)a0 forURL:(id)a1;
+ (void)_resetHelperActiveState;
+ (void)_someWindowWillOrderOnScreen:(id)a0;
+ (id)seamlessApplicationOpenerForURL:(id)a0;
+ (void)setIgnorePIDCheck:(BOOL)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)beginDocumentLoading;
- (void)beginDocumentOpening;
- (void)endDocumentLoading;
- (void)endDocumentOpening;
- (BOOL)isOpening;
- (void)showWindow:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withBlock:(id /* block */)a2;
- (BOOL)_beginShowingWindow:(id)a0 effect:(id *)a1;
- (void)_endShowingWindow:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 alreadyVisible:(BOOL)a2 effect:(id)a3;
- (void)deferDocumentLoading;
- (void)deferDocumentShowing;
- (void)showLoadingWindow;

@end
