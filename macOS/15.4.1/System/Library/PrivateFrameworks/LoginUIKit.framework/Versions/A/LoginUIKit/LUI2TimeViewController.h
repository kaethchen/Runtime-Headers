@class NSDateFormatter, NSTextField;
@protocol LUIClockTimerHandle;

@interface LUI2TimeViewController : LUI2ViewController {
    NSDateFormatter *_timeFormatter;
    NSTextField *_timeTextField;
    id<LUIClockTimerHandle> _clockTimer;
    BOOL _paused;
}

@property id target;
@property SEL action;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)_formatterChanged:(id)a0;
- (void)_loadSymbols;
- (void)_scheduleClockTimer;
- (id)_timeFont;
- (void)_updateTimeFormatter;
- (void)_updateTimeTextField;

@end
