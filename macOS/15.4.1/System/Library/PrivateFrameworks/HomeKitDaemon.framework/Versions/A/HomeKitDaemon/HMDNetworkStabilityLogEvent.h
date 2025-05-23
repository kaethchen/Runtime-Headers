@class NSString, NSDictionary, NSUUID;

@interface HMDNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) unsigned long long numWifiAssociations;
@property (readonly, nonatomic) unsigned long long numWifiDisassociations;
@property (readonly, nonatomic) unsigned long long numAPChanges;
@property (readonly, nonatomic) unsigned long long numGatewayChanges;
@property (readonly, nonatomic) unsigned long long numReadWrites;
@property (readonly, nonatomic) unsigned long long numReadErrors;
@property (readonly, nonatomic) unsigned long long numWriteErrors;
@property (readonly, nonatomic) unsigned long long numSessionErrors;
@property (readonly, nonatomic) NSString *topReadWriteError;
@property (readonly, nonatomic) NSString *topSessionError;
@property (readonly, nonatomic) NSString *apOUI;
@property (readonly, nonatomic) long long localHourOfDay;
@property (readonly, nonatomic) unsigned long long collectionDurationMinutes;
@property (readonly, nonatomic) NSString *ssid;
@property (readonly, nonatomic) NSString *gatewayMACAddress;
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
- (id)initWithDictionary:(id)a0;
- (id)initWithHomeUUID:(id)a0 numWifiAssociations:(unsigned long long)a1 wifiDisassociations:(unsigned long long)a2 apChanges:(unsigned long long)a3 gatewayChanges:(unsigned long long)a4 numReadWrites:(unsigned long long)a5 numReadErrors:(unsigned long long)a6 numWriteErrors:(unsigned long long)a7 topReadWriteError:(id)a8 topSessionError:(id)a9 numSessionErrors:(unsigned long long)a10 apOUI:(id)a11 ssid:(id)a12 gatewayMACAddress:(id)a13 localHourOfDay:(long long)a14 collectionDurationMinutes:(unsigned long long)a15;
- (id)serializedLogEvent;

@end
