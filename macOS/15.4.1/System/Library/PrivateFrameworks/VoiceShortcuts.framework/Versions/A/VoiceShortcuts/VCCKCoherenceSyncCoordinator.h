@class CKContainer, VCCKApplicationStateObserver;

@interface VCCKCoherenceSyncCoordinator : NSObject

@property (retain, nonatomic) CKContainer *container;
@property (readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver;
@property (nonatomic, getter=isStarted) BOOL started;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)checkDeviceRecords;
- (BOOL)deviceOSVersionNumber:(id)a0 isGreaterThanOrEqualTo:(id)a1;
- (id)initWithContainer:(id)a0 applicationObserver:(id)a1;
- (void)recordsContainIncompatibleDevice:(id /* block */)a0;

@end
