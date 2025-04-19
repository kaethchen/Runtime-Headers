@class NSWindow, CAAnimation;

@interface _NSWindowTransformAnimation : NSAnimation {
    NSWindow *_animatingWindow;
    NSWindow *_originalWindow;
    id /* block */ _animateToProgress;
    unsigned long long _type;
    id _space;
    id /* block */ _completionBlock;
    double _scaleAmount;
    unsigned char _animateAlpha : 1;
    unsigned char _originalHasParentWindow : 1;
    unsigned char _ignoresRequestsToSetCurrentProgress : 1;
    unsigned int _windowTransformAnimationReservedFlags : 29;
    CAAnimation *_caAnimation;
}

@property (readonly) double currentAnimationAlpha;
@property struct CGPoint { double x; double y; } startPoint;
@property (setter=_setScaleAmount:) double _scaleAmount;
@property (setter=_setAnimatesAlpha:) BOOL _animatesAlpha;
@property (setter=_setIgnoresRequestsToSetCurrentProgress:) BOOL _ignoresRequestsToSetCurrentProgress;
@property (readonly) NSWindow *window;
@property struct CGPoint { double x0; double x1; } anchorPoint;
@property struct CGPoint { double x; double y; } normalizedAnchorPoint;

+ (id)_originalDocumentWindowForWindow:(id)a0;
+ (void)beginDocumentWindowDuplicationForOriginalDocument:(id)a0;
+ (void)beginNewDocumentWindowCreation;
+ (void)beginPersistentUIWindowRestoring;
+ (void)endDocumentWindowDuplication;
+ (void)endNewDocumentWindowCreation;
+ (void)endPersistentUIWindowRestoring;
+ (BOOL)isDuplicatingADocumentWindow;
+ (BOOL)isRestoringPersistentWindows;
+ (void)waitForAnimationToCompleteOnWindows:(id)a0 forFullScreen:(BOOL)a1;
+ (id)windowTransformAnimationWithWindow:(id)a0 type:(long long)a1 interruptingAnimation:(id)a2;

- (void)dealloc;
- (void)setCompletionBlock:(id /* block */)a0;
- (id)_screen;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (void)_cleanUpAnimation;
- (id /* block */)_configureAnimationBlock;
- (void)_duplicateAnimationStopped;
- (void)_gatherChildWindowAnchors:(id)a0 forWindow:(id)a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)_stringForAnimationType;
- (id)_windowBaseAlphas;
- (id)_windowTransformAnchors;
- (void)finishConfiguration;
- (id)initWithWindow:(id)a0 type:(long long)a1 interruptingAnimation:(id)a2;
- (BOOL)isOrderFrontAnimation;
- (BOOL)isOrderOutAnimation;
- (void)setAnimationAlphaValue:(double)a0;
- (void)setCurrentProgress:(float)a0;
- (void)setWindowSendDocmentUpTranslationProgress:(double)a0;
- (void)setWindowShakeProgress:(double)a0;
- (void)startAnimation;

@end
