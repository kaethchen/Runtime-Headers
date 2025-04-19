@class PSYSyncCoordinator;

@interface HDPairedSyncManager : NSObject

@property (readonly) PSYSyncCoordinator *syncCoordinator;

+ (id)syncCoordinatorWithServiceName:(id)a0;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 queue:(id)a1;
- (BOOL)permitSynchronization;

@end
