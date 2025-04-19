@class NSScreen, NSFont, NSViewAnimation, NSArray, NSString, SO_AXElementNamesCyclingView, NSColor, SOElementNumbersCyclingView;

@interface SOOverlayWindowController : NSWindowController <NSAnimationDelegate>

@property (class, readonly) NSFont *labelFont;
@property (class, readonly) NSColor *labelStrokeColor;
@property (class, readonly) double labelStrokeWidth;
@property (class, readonly) NSArray *controllers;

@property (readonly) SO_AXElementNamesCyclingView *cyclingNamesView;
@property (readonly) SOElementNumbersCyclingView *cyclingNumbersView;
@property (nonatomic) unsigned long long currentFadeTransactionID;
@property (nonatomic) unsigned long long scheduledFadeFire;
@property (retain, nonatomic) NSViewAnimation *fadeAnimation;
@property (readonly) NSScreen *screen;
@property (nonatomic) double fadeOpacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isIncreaseContrastEnabled;

- (void).cxx_destruct;
- (void)animation:(id)a0 didReachProgressMark:(float)a1;
- (id)initWithScreen:(id)a0;
- (void)animationDidEnd:(id)a0;
- (void)_finishFade;
- (void)resetFade;
- (void)scheduleFadeAfterDelay:(double)a0;
- (void)startFading;

@end
