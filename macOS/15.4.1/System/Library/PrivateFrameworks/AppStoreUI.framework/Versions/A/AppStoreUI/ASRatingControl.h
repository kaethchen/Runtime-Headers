@class NSArray, NSImage, NSTrackingArea, NSNumber;

@interface ASRatingControl : NSView

@property (class, readonly, nonatomic) NSImage *starHollow;
@property (class, readonly, nonatomic) NSImage *starFilled;
@property (class, readonly, nonatomic) long long starCount;

@property (retain, nonatomic) NSNumber *prospectiveRating;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) BOOL isMouseDown;
@property (copy, nonatomic) NSArray *cachedAccessibilityChildren;
@property (retain, nonatomic) NSNumber *rating;
@property (copy, nonatomic) id /* block */ didChangeCallback;

+ (id)starActive;
+ (id)starActivePressed;
+ (id)starFilledPressed;
+ (id)starHollowPressed;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (id)initWithRating:(id)a0;
- (id)inputRatingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)makeAccessibilityChildForStarAtIndex:(long long)a0;
- (void)sendRatingChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })starFrameAtIndex:(long long)a0;

@end
