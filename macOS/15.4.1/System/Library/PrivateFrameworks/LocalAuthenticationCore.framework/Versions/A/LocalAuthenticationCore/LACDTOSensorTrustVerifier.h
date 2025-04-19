@class NSString;
@protocol LACDTOFeatureStateProviding, LACDTOSensorRepairStateProvider, LACDTOSensorTrustStateProvider;

@interface LACDTOSensorTrustVerifier : NSObject <LACDTOSensorTrustVerifier> {
    id<LACDTOSensorTrustStateProvider> _trustStateProvider;
    id<LACDTOFeatureStateProviding> _featureStateProvider;
    id<LACDTOSensorRepairStateProvider> _repairStateProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTrustStateProvider:(id)a0 featureStateProvider:(id)a1 repairStateProvider:(id)a2;
- (void)verifySensorTrustWithCompletion:(id /* block */)a0;

@end
