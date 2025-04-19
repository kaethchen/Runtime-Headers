@interface FigCaptureGameModeMonitor : NSObject {
    int _gameModeNotifyToken;
    id /* block */ _gameModeStateChangeHandler;
}

@property (readonly, getter=isGameModeEnabled) BOOL gameModeEnabled;

+ (void)initialize;

- (void)dealloc;
- (id)initWithStateChangeHandler:(id /* block */)a0;

@end
