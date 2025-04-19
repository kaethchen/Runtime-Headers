@class LUI2VibrancyEffectView, NSDateFormatter, NSTextField;
@protocol LUIClockTimerHandle;

@interface LUI2DateViewController : LUI2ViewController {
    id<LUIClockTimerHandle> _clockTimer;
    NSDateFormatter *_dateFormatter;
    LUI2VibrancyEffectView *_vibrancyView;
}

@property (class, readonly) double fontSize;

@property (readonly) NSDateFormatter *dateFormatter;
@property (retain) NSTextField *dateTextField;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_timerFired;
- (void)_displaysDidChange:(id)a0;
- (void)_startDayChangeTimer;

@end
