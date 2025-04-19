@class LUIProgressBar, NSTimer;

@interface LUI2ProgressBarWindowController : NSWindowController {
    NSTimer *_fillTimer;
    float _fillValue;
}

@property (readonly) LUIProgressBar *progressBar;

- (id)init;
- (void).cxx_destruct;
- (void)loadWindow;
- (void)_fillTimerFired;
- (float)stopProgressBar;
- (void)resetProgressBar;
- (void)startProgressBar;

@end
