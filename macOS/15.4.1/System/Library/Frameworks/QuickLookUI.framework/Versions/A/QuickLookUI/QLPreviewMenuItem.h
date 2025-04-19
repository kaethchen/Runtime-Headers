@class QLAnimationWindowEffect, QLPreviewBubble;
@protocol QLPreviewMenuItemDelegate;

@interface QLPreviewMenuItem : NSMenuItem {
    QLAnimationWindowEffect *_animationWindowEffect;
    QLPreviewBubble *_previewBubble;
    BOOL _previewPanelIsSetUp;
}

@property unsigned long long deepClickPhase;
@property (weak) id<QLPreviewMenuItemDelegate> delegate;
@property long long previewStyle;

+ (void)_closePreviewBubble:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)_beginPredeepAnimationAgainstPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)_cancelPredeepAnimation;
- (void)_completeDeepAnimation;
- (void)_doPredeepAnimationWithProgress:(double)a0;
- (void)_releaseDeepAnimation;
- (BOOL)_wantsDeepAnimationCallbacks;
- (void)_completeOpenAnimation;
- (void)_invokePreviewPanelOpenAnimation:(id)a0;
- (void)_openPreview;
- (void)_setUpForAnimationFromPoint:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;

@end
