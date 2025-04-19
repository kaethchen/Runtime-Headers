@class NSArray, NIDiscoveryToken, NIRegionPredicate;

@interface NIDevicePresenceConfiguration : NIConfiguration

@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property unsigned long long monitoringOption;
@property unsigned long long allowedDevices;
@property (readonly) NIRegionPredicate *innerBoundary;
@property (readonly) NIRegionPredicate *outerBoundary;
@property (readonly) NSArray *monitoredRegions;
@property (readonly) NIDiscoveryToken *token;

+ (BOOL)supportsSecureCoding;
+ (const char *)_NIDevicePresenceMonitoringOptionToString:(unsigned long long)a0;
+ (float)_radiusFromDevicePresencePreset:(long long)a0;
+ (BOOL)_validateRegionIsPreset:(id)a0;
+ (BOOL)_validateRegionPredicates:(id)a0 outer:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)initWithDiscoveryToken:(id)a0 regions:(id)a1 preferredUpdateRate:(long long)a2 error:(id *)a3;
- (id)initWithInnerBoundary:(id)a0 outerBoundary:(id)a1 error:(id *)a2;
- (id)initWithInnerBoundary:(id)a0 outerBoundary:(id)a1 monitoringOption:(unsigned long long)a2 allowedDevices:(unsigned long long)a3 error:(id *)a4;

@end
