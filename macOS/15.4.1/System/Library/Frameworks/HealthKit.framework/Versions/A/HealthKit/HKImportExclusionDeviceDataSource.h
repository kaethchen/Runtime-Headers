@interface HKImportExclusionDeviceDataSource : NSObject

+ (BOOL)isDeviceSerialNumberOnAllowedListForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;
+ (BOOL)isDeviceSerialNumberOnTIBListForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;
+ (BOOL)isDeviceTypeAllowedForHKFeatureIdentifierOxygenSaturationRecording:(id)a0;

- (BOOL)isDeviceSerialNumberOnPreImportExclusionList:(id)a0 featureIdentifier:(id)a1;
- (id)activePairedDevice;
- (id)isActiveWatchProdFusedWithBehavior:(id)a0;
- (BOOL)isDeviceSerialNumberOnTIBList:(id)a0 featureIdentifier:(id)a1;
- (BOOL)isDeviceTypeNotOnImportExclusionList:(id)a0 featureIdentifier:(id)a1;
- (id)isImportAllowedForActiveWatchWithBehavior:(id)a0 featureIdentifier:(id)a1;

@end
