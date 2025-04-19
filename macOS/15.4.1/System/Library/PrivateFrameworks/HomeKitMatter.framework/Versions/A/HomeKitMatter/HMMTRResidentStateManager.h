@class NSString;
@protocol HMMTRResidentStateManagerDataSource, HMMTRResidentStateManagerDelegate;

@interface HMMTRResidentStateManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (weak) id<HMMTRResidentStateManagerDelegate> delegate;
@property (weak) id<HMMTRResidentStateManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)handleResidentReachabilityChangeForFabric:(id)a0;
- (void)handleResidentStateUpdated;
- (void)handleUpdateNotificationsEnabled:(BOOL)a0 forFabric:(id)a1 keepAliveOnly:(BOOL)a2;

@end
