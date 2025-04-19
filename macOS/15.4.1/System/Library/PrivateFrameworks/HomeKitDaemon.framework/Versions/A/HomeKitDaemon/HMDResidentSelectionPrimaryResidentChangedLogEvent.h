@class NSString, NSDictionary, NSUUID, HMFSoftwareVersion;

@interface HMDResidentSelectionPrimaryResidentChangedLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) BOOL isElectedDevicePreferred;
@property (readonly, nonatomic) BOOL isCurrentDevicePrimary;
@property (readonly, nonatomic) BOOL isCurrentDevicePreferred;
@property (readonly, nonatomic) BOOL isPreviousPrimaryRev2;
@property (readonly, nonatomic) BOOL isElectedDeviceLatestSWVersionInHome;
@property (readonly, nonatomic) unsigned long long residentSelectionMode;
@property (readonly, nonatomic) unsigned long long triggerReason;
@property (readonly, nonatomic) unsigned long long numResidentsREV3Capable;
@property (readonly, nonatomic) unsigned long long numResidentsREV3Incompatible;
@property (readonly, nonatomic) HMFSoftwareVersion *minimumVersionInHome;
@property (readonly, nonatomic) HMFSoftwareVersion *minimumParticipatingtvOS17Version;
@property (readonly, nonatomic) HMFSoftwareVersion *minimumParticipatingAllVersion;
@property (readonly, nonatomic) HMFSoftwareVersion *minimumParticipatingtvOS18Version;
@property (readonly, nonatomic) long long count;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)denominatorEvent:(id)a0 residentSelectionMode:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initDenominatorEvent:(id)a0 residentSelectionMode:(unsigned long long)a1;
- (id)initWithPrimaryResidentDidChange:(BOOL)a0 isElectedDevicePreferred:(BOOL)a1 isCurrentDevicePrimary:(BOOL)a2 isCurrentDevicePreferred:(BOOL)a3 isPreviousPrimaryRev2:(BOOL)a4 isElectedDeviceLatestSWVersionInHome:(BOOL)a5 residentSelectionMode:(unsigned long long)a6 triggerReason:(unsigned long long)a7 numResidentsREV3Capable:(unsigned long long)a8 numResidentsREV3Incompatible:(unsigned long long)a9 minimumVersionInHome:(id)a10 minimumParticipatingtvOS17Version:(id)a11 minimumParticipatingAllVersion:(id)a12 minimumParticipatingtvOS18Version:(id)a13 homeUUID:(id)a14;

@end
