@class NSValue, NSRegion, NSView, NSBitmapImageRep, CALayer, NSResponder, NSTimer;

@interface _NSAutomaticFocusRingState : NSObject

@property (getter=isAutomaticFocusRingShown) BOOL automaticFocusRingShown;
@property BOOL automaticFocusRingNeedsUpdate;
@property (retain) NSView *automaticFocusRingView;
@property (retain) NSBitmapImageRep *automaticFocusRingBitmap;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } automaticFocusRingWindowRect;
@property (retain) NSRegion *automaticFocusRingRegion;
@property (retain) CALayer *automaticFocusRingLayer;
@property (retain) NSResponder *previousActiveFirstResponder;
@property double focusRingAnimationStartTime;
@property (retain) NSTimer *animationTimer;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animatedFocusRingBounds;
@property (retain) NSValue *alreadyFocusedWindow;
@property NSView *lastNonNilFocusRingView;
@property (retain) NSValue *forceRect;
@property (getter=isAccessibilityRequest) BOOL accessibilityRequest;
@property double nilFocusTime;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
