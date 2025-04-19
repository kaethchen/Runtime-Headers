@class NSView;

@interface NSBaselineView : NSView

@property (weak) NSView *realBaselineView;

+ (id)decorateView:(id)a0 withText:(id)a1;

- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;

@end
