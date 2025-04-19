@class NSString, NSDictionary;

@interface _TtCO13HomeKitDaemon6Metric15LogEventAdaptor : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic) void /* unknown type, empty encoding */ coreAnalyticsEventOptions;
@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
