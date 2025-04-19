@class NSArray, NSString, NSDictionary, NSSet, NSObject;
@protocol OS_nw_parameters, OS_nw_endpoint;

@interface BGSystemTaskRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *featureCodes;
@property (copy, nonatomic) NSString *dataBudgetName;
@property (nonatomic) BOOL beforeApplicationLaunch;
@property (copy, nonatomic) NSString *diskVolume;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpointPrimitive;
@property (retain, nonatomic) NSObject<OS_nw_parameters> *networkParametersPrimitive;
@property (nonatomic) BOOL requiresExternalPowerIsSetByUser;
@property (readonly, copy) NSString *identifier;
@property (nonatomic) BOOL requiresNetworkConnectivity;
@property (nonatomic) BOOL requiresExternalPower;
@property (nonatomic) long long priority;
@property (nonatomic) long long requiresProtectionClass;
@property (nonatomic) BOOL preventsDeviceSleep;
@property (nonatomic) double randomInitialDelay;
@property (nonatomic) BOOL postInstall;
@property (nonatomic) BOOL requiresInexpensiveNetworkConnectivity;
@property (nonatomic) BOOL requiresUnconstrainedNetworkConnectivity;
@property (nonatomic) BOOL appRefresh;
@property (nonatomic) BOOL requiresUserInactivity;
@property (nonatomic) BOOL requiresSignificantUserInactivity;
@property (nonatomic) BOOL powerNap;
@property (nonatomic) BOOL resourceIntensive;
@property (nonatomic) long long resources;
@property (nonatomic) BOOL mayRebootDevice;
@property (nonatomic) BOOL userRequestedBackupTask;
@property (nonatomic) long long networkDownloadSize;
@property (nonatomic) long long networkUploadSize;
@property (nonatomic) BOOL communicatesWithPairedDevice;
@property (nonatomic) BOOL shouldWakeDevice;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) unsigned long long groupConcurrencyLimit;
@property (copy, nonatomic) NSString *rateLimitConfigurationName;
@property (nonatomic) double expectedDuration;
@property (nonatomic) BOOL powerBudgeted;
@property (nonatomic) BOOL dataBudgeted;
@property (copy, nonatomic) NSArray *relatedApplications;
@property (nonatomic) long long applicationRelationship;
@property (copy, nonatomic) NSArray *involvedProcesses;
@property (nonatomic) BOOL runOnAppForeground;
@property (nonatomic) BOOL requestsApplicationLaunch;
@property (nonatomic) BOOL requiresBuddyComplete;
@property (nonatomic) long long targetDevice;
@property (copy, nonatomic) NSString *remoteDevice;
@property (nonatomic) BOOL requiresRemoteDeviceWake;
@property (copy, nonatomic) NSDictionary *networkEndpoint;
@property (copy, nonatomic) NSDictionary *networkParameters;
@property (nonatomic) long long runOnMotionState;
@property (copy, nonatomic) NSSet *producedResultIdentifiers;
@property (copy, nonatomic) NSSet *dependencies;
@property (nonatomic) BOOL overrideRateLimiting;
@property (nonatomic) BOOL magneticInterferenceSensitivity;
@property (nonatomic) BOOL mailFetch;
@property (nonatomic) BOOL bypassBatteryAging;
@property (nonatomic) BOOL bypassPeakPower;
@property (nonatomic) BOOL backlogged;
@property (nonatomic) unsigned long long requiresMinimumBatteryLevel;
@property (nonatomic) unsigned long long requiresMinimumDataBudgetPercentage;
@property (nonatomic) BOOL blockRebootActivitiesForSU;
@property (nonatomic) BOOL useStatisticalModelForTriggersRestart;

+ (void)initialize;
+ (id)descriptorWithTaskRequest:(id)a0;
+ (id)taskRequestWithDescriptor:(id)a0 withIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
