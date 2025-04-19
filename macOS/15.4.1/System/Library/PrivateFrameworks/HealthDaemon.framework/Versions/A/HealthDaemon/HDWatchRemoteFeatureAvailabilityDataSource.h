@class NSString;

@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)iOSBuildVersion;
- (id)watchRegionInfo;
- (id)currentDeviceClass;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)watchBuildType;
- (id)watchModelNumber;
- (id)watchOSBuildVersion;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (id)watchProductType;
- (id)watchRegion;

@end
