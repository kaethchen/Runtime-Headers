@class NSString, NSDictionary;

@interface HomeKitDaemon.TemperatureHumidityReadWriteLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ readWriteEvent;
    void /* unknown type, empty encoding */ coreAnalyticsEventName;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly) NSString *accessoryIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ coreAnalyticsEventOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0;

@end
