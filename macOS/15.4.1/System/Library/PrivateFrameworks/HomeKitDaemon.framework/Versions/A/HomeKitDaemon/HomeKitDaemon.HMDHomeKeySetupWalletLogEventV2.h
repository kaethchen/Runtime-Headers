@class NSString, NSDictionary;

@interface HomeKitDaemon.HMDHomeKeySetupWalletLogEventV2 : HMMLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ success;
    void /* unknown type, empty encoding */ coreAnalyticsEventName;
}

@property (nonatomic, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic) void /* unknown type, empty encoding */ coreAnalyticsEventOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0;

@end
