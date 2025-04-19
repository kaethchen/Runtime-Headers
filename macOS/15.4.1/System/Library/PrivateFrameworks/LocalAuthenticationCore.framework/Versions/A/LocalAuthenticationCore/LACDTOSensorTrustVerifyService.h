@class NSString;

@interface LACDTOSensorTrustVerifyService : NSObject <LACDTOSensorTrustVerifyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldVerifySensorTrustWithFeatureState:(id)a0 trustState:(id)a1;
- (id)verifySensorTrustWithFeatureState:(id)a0 trustState:(id)a1 repairState:(id)a2;

@end
