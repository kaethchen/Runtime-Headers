@class NSTrackingArea;

@interface AMPRolloverTableView : NSTableView

@property (retain, nonatomic) NSTrackingArea *rolloverTracker;
@property (nonatomic) long long currentRolloverRow;
@property (nonatomic) long long lockCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)menu;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)reloadData;
- (void)tile;
- (void)viewDidMoveToWindow;
- (void)willOpenMenu:(id)a0 withEvent:(id)a1;
- (void)lockRolloverUpdates;
- (void)unlockRolloverUpdates;
- (void)updateRowRolloverForEvent:(id)a0;

@end
