@class _HMContext, HMHomeManager, NSString;

@interface HMWidgetManager : NSObject <HMFLogging>

@property (readonly, weak) HMHomeManager *homeManager;
@property (readonly) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchStateForActionSets:(id)a0 completion:(id /* block */)a1;
- (void)fetchStateForCharacteristics:(id)a0 completion:(id /* block */)a1;
- (id)initWithHomeManager:(id)a0 context:(id)a1;
- (void)monitorAndFetchStateForActionSets:(id)a0 widgetIdentifier:(id)a1 kind:(id)a2 completion:(id /* block */)a3;
- (void)monitorAndFetchStateForCharacteristics:(id)a0 monitorReachabilityChanges:(BOOL)a1 widgetIdentifier:(id)a2 kind:(id)a3 completion:(id /* block */)a4;
- (void)monitorAndFetchStateForCharacteristics:(id)a0 widgetIdentifier:(id)a1 kind:(id)a2 completion:(id /* block */)a3;
- (void)monitorStateForMTRAttributeDescriptors:(id)a0 widgetIdentifier:(id)a1 kind:(id)a2 completion:(id /* block */)a3;
- (void)performRequests:(id)a0 forKind:(id)a1 completion:(id /* block */)a2;

@end
