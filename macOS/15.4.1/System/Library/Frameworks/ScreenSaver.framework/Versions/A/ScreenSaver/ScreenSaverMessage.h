@class NSTextField, NSString, NSTimer, NSPanel, NSDate, NSScreen;

@interface ScreenSaverMessage : NSObject {
    NSPanel *_panel;
    NSTextField *_textField;
    NSTimer *_fadeTimer;
    NSDate *_fadeStartTime;
    NSDate *_startTime;
    NSScreen *_screen;
    NSString *_placement;
    double _duration;
    double _finalAlpha;
}

+ (void)clearMessages;
+ (id)currentMessage;
+ (void)displayMessage:(id)a0 inLayer:(id)a1 fontSize:(double)a2;
+ (void)displayMessage:(id)a0 onScreen:(id)a1 duration:(double)a2;
+ (void)displayMessage:(id)a0 onScreen:(id)a1 duration:(double)a2 alpha:(double)a3 placement:(id)a4;

- (void)dealloc;
- (id)initWithScreen:(id)a0;
- (id)_panel;
- (void)_setDuration:(double)a0;
- (void)_setPlacement:(id)a0;
- (void)_fadeIn;
- (void)_setFinalAlpha:(double)a0;
- (void)_animateFadeWindowIn;
- (void)_animateFadeWindowOut;
- (void)_displayMessage:(id)a0;
- (void)_fadeOut;
- (void)_updateWindowLayout;
- (double)finalAlpha;

@end
