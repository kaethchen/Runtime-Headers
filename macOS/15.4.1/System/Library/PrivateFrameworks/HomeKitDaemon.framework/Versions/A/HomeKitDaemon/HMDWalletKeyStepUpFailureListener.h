@class NSString, HMDHomeManager;
@protocol HMDHomeWalletDataSource;

@interface HMDWalletKeyStepUpFailureListener : HMFObject <HMDLibXPCServerDelegate, HMFLogging>

@property (readonly) id<HMDHomeWalletDataSource> dataSource;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (id)initWithHomeManager:(id)a0;
- (id)initWithHomeManager:(id)a0 datasource:(id)a1;
- (id)accessoryWithReaderGroupSubIdentifierACWG:(id)a0;
- (void)didReceiveEventDictionary:(id)a0;
- (void)handleStepUpFailureForReaderGroupSubIdentifier:(id)a0;
- (id)reachablePrimaryResidentDeviceForHome:(id)a0;

@end
