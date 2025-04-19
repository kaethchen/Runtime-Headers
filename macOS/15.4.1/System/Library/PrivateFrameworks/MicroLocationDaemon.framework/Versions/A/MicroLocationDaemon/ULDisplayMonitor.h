@class FBSDisplayLayoutMonitor, NSString;

@interface ULDisplayMonitor : ULEventMonitor

@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMinitor;
@property (retain, nonatomic) NSString *appInFocus;
@property (nonatomic) BOOL displayOn;
@property (nonatomic) BOOL screenLocked;

- (void).cxx_destruct;
- (void)startMonitoring:(id)a0;
- (void)stopMonitoring:(id)a0;
- (id)_checkAppInFocusFromLayout:(id)a0;
- (BOOL)_checkDisplayOnFromLayout:(id)a0;
- (BOOL)_checkScreenLockedFromLayout:(id)a0;
- (void)_didUpdateDisplayLayout:(id)a0;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
