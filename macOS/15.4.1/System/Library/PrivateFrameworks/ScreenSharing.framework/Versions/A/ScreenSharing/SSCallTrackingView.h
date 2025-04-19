@class NSTrackingArea, NSTimer;
@protocol SSCallTrackingViewDelegate;

@interface SSCallTrackingView : NSView

@property (retain) NSTrackingArea *trackingArea;
@property double timeStamp;
@property BOOL monitoringForEntry;
@property (retain, nonatomic) NSTimer *mouseUpTimer;
@property id<SSCallTrackingViewDelegate> delegate;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;

@end
