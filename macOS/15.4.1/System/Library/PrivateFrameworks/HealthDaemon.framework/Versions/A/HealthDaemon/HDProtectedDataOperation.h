@class NSString;
@protocol HDProtectedDataOperationScheduling, HDProtectedDataOperationDelegate;

@interface HDProtectedDataOperation : NSObject <HDProtectedDataOperationSchedulerObserver> {
    id<HDProtectedDataOperationScheduling> _protectedDataOperationScheduler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _lock_state;
    BOOL _lock_shouldBypassMaintenanceCoordinator;
    id<HDProtectedDataOperationDelegate> _lock_delegate;
}

@property (readonly, copy, nonatomic) NSString *debugIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)diagnosticDescription;
- (id)initWithOperationScheduler:(id)a0 debugIdentifier:(id)a1 delegate:(id)a2;
- (id)initWithProfile:(id)a0 debugIdentifier:(id)a1 delegate:(id)a2;
- (void)protectedDataOperationSchedulerProfileIsReady:(id)a0;
- (void)protectedDataOperationSchedulerProtectedDataIsAvailable:(id)a0;
- (BOOL)requestWorkWithPriority:(long long)a0 error:(id *)a1;

@end
