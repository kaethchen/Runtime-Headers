@class NSString, HKObserverBridgeHandle, HKFeatureIdentifierAndContext;

@interface _HKFeatureStatusProvidingObserverBridge : NSObject <HKFeatureStatusProvidingObserver>

@property (readonly, nonatomic) HKFeatureIdentifierAndContext *featureIdentifierAndContext;
@property (readonly, nonatomic) HKObserverBridgeHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (id)initWithFeatureIdentifierAndContext:(id)a0 handle:(id)a1;

@end
