@class NSButton, NSTrackingArea;

@interface AccountManagerListHeaderCellView : NSTableCellView {
    NSTrackingArea *_trackingArea;
}

@property (weak, nonatomic) NSButton *expandToggleButton;
@property (nonatomic) long long buttonType;

- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)viewWillDraw;

@end
