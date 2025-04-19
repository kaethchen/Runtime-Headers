@class AVPlayerController;
@protocol AVDesktopGestureControllerDelegate;

@interface AVDesktopGestureController : NSObject {
    BOOL _jKeyDown;
    BOOL _kKeyDown;
    BOOL _lKeyDown;
    BOOL _dontScrubBecauseOfJump;
    double _deltaX;
    double _deltaY;
    double _eventBeginTime;
    double _momentumEndTime;
    double _rateAtEventBegan;
}

@property (retain, nonatomic) AVPlayerController *playerController;
@property (weak, nonatomic) id<AVDesktopGestureControllerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)_handleScrollEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (BOOL)_canHandleKeyEvent:(id)a0;
- (BOOL)_canHandleScrollEvent:(id)a0;
- (BOOL)_canHandleSwipeEvent:(id)a0;
- (void)_didConsumeEvent:(id)a0;
- (void)_didRespondToEvent:(id)a0;
- (void)_handleJKLWithEvent:(id)a0;
- (BOOL)_handleKeyDownEvent:(id)a0;
- (BOOL)_handleKeyUpEvent:(id)a0;
- (BOOL)_handleSwipeEvent:(id)a0;
- (BOOL)_shouldIgnoreKeyEvent:(id)a0 withKey:(unsigned short)a1;

@end
