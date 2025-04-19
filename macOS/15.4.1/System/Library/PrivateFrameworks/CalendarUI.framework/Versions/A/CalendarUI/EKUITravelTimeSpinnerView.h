@class NSProgressIndicator, NSTextField;

@interface EKUITravelTimeSpinnerView : NSView

@property (retain) NSProgressIndicator *spinner;
@property (retain) NSTextField *textfield;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)animate;

@end
