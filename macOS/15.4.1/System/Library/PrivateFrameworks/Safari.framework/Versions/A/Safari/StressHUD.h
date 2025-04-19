@class NSTimer;

@interface StressHUD : NSPanel {
    NSTimer *clock;
}

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)becameActive;
- (void)becameInactive;
- (void)tick;

@end
