@class NSString, NSDictionary;

@interface HMDRestrictedGuestFeatureLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ coreAnalyticsEventName;
}

@property (nonatomic) void /* unknown type, empty encoding */ hasRGSupportedAccessory;
@property (nonatomic) void /* unknown type, empty encoding */ isHH2Enabled;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfRGs;
@property (nonatomic) void /* unknown type, empty encoding */ numEnabledResidentsInHome;
@property (nonatomic, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic) void /* unknown type, empty encoding */ coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
