@class NSString, NSUUID, MTRDevice, NSDictionary, NSNumber;

@interface MTRPluginMetric : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (retain) NSString *name;
@property (weak) MTRDevice *device;
@property (retain) NSUUID *remoteMessageID;
@property (retain) NSNumber *count;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)numberValueFromDataValueDictionary:(id)a0;

- (void).cxx_destruct;
- (id)additionalCoreAnalyticsEventDictionary;
- (id)initMetricWithName:(id)a0 device:(id)a1 homeID:(id)a2 remoteMessageID:(id)a3;
- (id)initMetricWithName:(id)a0 sourceMetric:(id)a1;

@end
