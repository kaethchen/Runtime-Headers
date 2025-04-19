@interface CKUpdateControllerClient : NSObject <ISOSUpdateProgressObserver, ISAvailableUpdatesObserver, ISOSUpdateScanObserver>

@property (copy) id /* block */ osUpdateProgressHandler;
@property (copy) id /* block */ availableUpdatesObserverBlock;
@property (copy) id /* block */ osUpdateScanObserverBlock;

- (void).cxx_destruct;
- (void)availableUpdatesDidChangedWithUpdates:(id)a0 osUpdates:(id)a1 badgeCount:(unsigned long long)a2;
- (void)osUpdateScanForTags:(id)a0 didProgressWithPercentComplete:(float)a1 isFinished:(BOOL)a2 error:(id)a3;
- (void)osUpdates:(id)a0 changedProgress:(id)a1;

@end
