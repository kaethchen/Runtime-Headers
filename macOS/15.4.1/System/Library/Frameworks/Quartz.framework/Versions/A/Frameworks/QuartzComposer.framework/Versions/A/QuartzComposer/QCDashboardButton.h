@class NSString, NSMutableDictionary;

@interface QCDashboardButton : NSButton {
    long long _direction;
    NSMutableDictionary *_attr;
    long long _trackingRectTag;
    BOOL _active;
    BOOL _displayCapsule;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _activeRect;
    NSString *_string;
    id _controller;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setDirection:(int)a0;
- (void)viewDidMoveToWindow;
- (void)setIndex:(unsigned long long)a0 count:(unsigned long long)a1;
- (void)drawHoverTarget;
- (id)capsulePathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })capsuleRectForDirection;
- (BOOL)checkPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawCapsule;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hoverRectForDirection;
- (id)leftArrowPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)rightArrowPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForString;
- (void)updateTrackingRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andController:(id)a1;

@end
