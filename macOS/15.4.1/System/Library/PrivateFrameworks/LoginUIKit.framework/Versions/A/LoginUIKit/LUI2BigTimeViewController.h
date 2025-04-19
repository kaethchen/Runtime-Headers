@class LUI2VibrancyEffectView, NSDateFormatter, NSTextField;
@protocol LUIClockTimerHandle;

@interface LUI2BigTimeViewController : LUI2ViewController {
    NSDateFormatter *_formatter;
    LUI2VibrancyEffectView *_vibrancyView;
    id<LUIClockTimerHandle> _clockTimer;
}

@property (retain) NSTextField *timeTextField;
@property id target;
@property SEL action;

- (void)dealloc;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)_displaysDidChange:(id)a0;
- (double)_fontSize;
- (void)_formatterChanged:(id)a0;
- (id)_timeFont;
- (void)_updateTime;
- (void)_updateTimeFormatter;

@end
