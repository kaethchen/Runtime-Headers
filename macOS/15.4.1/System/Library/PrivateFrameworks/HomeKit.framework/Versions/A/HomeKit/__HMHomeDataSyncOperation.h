@class NSString, HMHomeManager;

@interface __HMHomeDataSyncOperation : HMFOperation <HMFLogging>

@property (readonly, copy) NSString *logIdentifier;
@property (readonly, weak) HMHomeManager *manager;
@property (getter=isRefresh) BOOL refresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)main;
- (id)initWithHomeManager:(id)a0;

@end
