@class NSString, NSDictionary;

@interface HomeKitDaemon.MatterAccessoryInvokeCommandLogEvent : HMMDatedHomeLogEvent <HMDBiomeLogEvent, HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ home;
    void /* unknown type, empty encoding */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ nodeId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ endpointId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ clusterId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ commandId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ source;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)biomeEventsRepresentationForLogObserver:(id)a0;
- (id)initWithHome:(id)a0 nodeId:(unsigned long long)a1 endpointId:(id)a2 clusterId:(id)a3 commandId:(id)a4 source:(unsigned long long)a5;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
