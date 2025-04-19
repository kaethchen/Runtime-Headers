@class NSString, NSDictionary, NSUUID, NSError, NSNumber;

@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, copy) NSNumber *role;
@property (readonly) unsigned long long setupStartTime;
@property (readonly) unsigned long long setupEndTime;
@property (readonly) unsigned long long accessoryAddEndTime;
@property (readonly) unsigned long long accessoryRemoveTime;
@property (readonly) unsigned long long configurationEndTime;
@property (readonly, copy) NSError *setupSessionError;
@property (readonly) BOOL isRepairSession;
@property (readonly, copy) NSString *setupSessionIdentifier;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSString *setupClientBundleID;
@property (readonly, copy) NSString *accessorySoftwareVersion;
@property (readonly, copy) NSNumber *retryCount;
@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long languageSettingTime;
@property (readonly) BOOL accessoryInDefaultRoom;
@property (readonly) long long selectedHomeLocationStatus;
@property (readonly) BOOL isUserAtOtherOwnedHome;
@property (readonly) unsigned long long lastPrimaryResidentAvailableTime;
@property (readonly) unsigned int numberOfTimesPrimaryResidentChanged;
@property (readonly) unsigned long long lastPrimaryClientConnectedTime;
@property (readonly) unsigned int numberOfTimesPrimaryClientConnected;
@property (readonly) unsigned int numberOfTimesPrimaryClientDisconnected;
@property (readonly) unsigned int numberOfTimesPrimaryClientConnectMessageFailed;
@property (readonly) unsigned long long addAccessoryMessageReport;
@property (readonly) NSError *lastPrimaryClientConnectMessageFailError;
@property (readonly) NSError *accessoryDiagnosticInfoFetchError;
@property (readonly) NSError *primaryResidentDiagnosticInfoFetchError;
@property (readonly) NSError *addAccessoryOnPrimaryFailError;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRole:(long long)a0 setupStartTime:(unsigned long long)a1 setupEndTime:(unsigned long long)a2 accessoryAddEndTime:(unsigned long long)a3 accessoryRemoveTime:(unsigned long long)a4 configurationEndTime:(unsigned long long)a5 setupSessionError:(id)a6 setupSessionIdentifier:(id)a7 isRepairSession:(BOOL)a8 category:(id)a9 accessorySoftwareVersion:(id)a10 setupClientBundleID:(id)a11 retryCount:(unsigned long long)a12 firstSettingTime:(unsigned long long)a13 languageSettingTime:(unsigned long long)a14 accessoryInDefaultRoom:(BOOL)a15 selectedHomeLocationStatus:(long long)a16 isUserAtOtherOwnedHome:(BOOL)a17 lastPrimaryResidentAvailableTime:(unsigned long long)a18 numberOfTimesPrimaryResidentChanged:(unsigned int)a19 lastPrimaryClientConnectedTime:(unsigned long long)a20 numberOfTimesPrimaryClientConnected:(unsigned int)a21 numberOfTimesPrimaryClientDisconnected:(unsigned int)a22 numberOfTimesPrimaryClientConnectMessageFailed:(unsigned int)a23 addAccessoryMessageReport:(unsigned long long)a24 lastPrimaryClientConnectMessageFailError:(id)a25 accessoryDiagnosticInfoFetchError:(id)a26 primaryResidentDiagnosticInfoFetchError:(id)a27 addAccessoryOnPrimaryFailError:(id)a28;

@end
