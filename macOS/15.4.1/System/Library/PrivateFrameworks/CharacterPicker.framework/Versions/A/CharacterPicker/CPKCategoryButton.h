@class NSTimer, NSString;

@interface CPKCategoryButton : NSButton

@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long iconIndex;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSTimer *hoveringTimer;
@property (copy, nonatomic) NSString *tooltipIdentifier;

+ (id)categoryButtonWithSizeBoundedToImage:(id)a0;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (void)hideTooltip;
- (void)startHoveringTimerWithDuration:(double)a0;
- (void)showTooltip;
- (void)stopHoveringTimer;

@end
