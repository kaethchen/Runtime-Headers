@class CUSystemMonitor;

@interface ULDisplayMonitor_OSX : ULEventMonitor

@property (retain, nonatomic) CUSystemMonitor *systemMonitor;
@property (nonatomic) BOOL screenOn;
@property (nonatomic) BOOL clamshellMode;
@property (nonatomic) BOOL screenLocked;

- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (void)stopMonitoring:(id)a0;
- (void)_activateWithCompletion;
- (BOOL)_checkClamshellMode;
- (BOOL)_checkScreenLocked;
- (BOOL)_checkScreenOn;
- (void)_clamshellModeChangedHandler;
- (void)_invalidationHandler;
- (void)_screenLockedChangedHandler;
- (void)_screenOnChangedHandler;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
