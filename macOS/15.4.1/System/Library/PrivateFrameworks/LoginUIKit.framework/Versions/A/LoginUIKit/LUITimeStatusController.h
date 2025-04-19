@class LUITextField, NSDateFormatter, NSTimer;

@interface LUITimeStatusController : LUIController {
    LUITextField *_timeTextField;
    NSDateFormatter *_timeFormatter;
    NSTimer *_clockTimer;
    NSTimer *_dstTimer;
}

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithStyle:(int)a0;
- (id)_userTimeFormat;
- (void)pauseController;
- (void)_clockTick:(id)a0;
- (void)_dstTick:(id)a0;
- (id)_nextDSTFireDate;
- (void)_setupContentView;
- (void)_timePressed:(id)a0;
- (id)attributedStringFont;
- (void)resumeController;
- (void)tearDownController;

@end
