@class MRGroupSessionEligibilityStatus, NSHashTable;

@interface MRGroupSessionEligibilityMonitor : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) MRGroupSessionEligibilityStatus *status;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)updateStatus:(id)a0;
- (void)registerNotifications;

@end
