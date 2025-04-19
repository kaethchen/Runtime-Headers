@class NSTimer;

@interface ASKApplicationIdleEventHandler : ASKApplicationEventHandler {
    NSTimer *_idleTimer;
    BOOL _applicationFinishedLaunching;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)disable;
- (void)enable;
- (id)idleTimer;
- (void)setIdleTimer:(id)a0;
- (void)idleUsingTimer:(id)a0;
- (void)didFinishLaunching:(id)a0;
- (void)willTerminate:(id)a0;

@end
