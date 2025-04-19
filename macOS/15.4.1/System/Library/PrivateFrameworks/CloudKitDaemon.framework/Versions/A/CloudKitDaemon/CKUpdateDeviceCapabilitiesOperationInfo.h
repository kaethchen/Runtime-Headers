@class NSArray, NSDictionary;

@interface CKUpdateDeviceCapabilitiesOperationInfo : CKOperationInfo

@property (retain, nonatomic) NSArray *supportedCapabilities;
@property (retain, nonatomic) NSArray *lastSentCapabilities;
@property (retain, nonatomic) NSDictionary *zoneUsages;
@property (retain, nonatomic) NSDictionary *shareUsages;

- (void).cxx_destruct;
- (id)initWithSupportedCapabilities:(id)a0 lastSentCapabilities:(id)a1 zoneUsages:(id)a2 shareUsages:(id)a3;

@end
