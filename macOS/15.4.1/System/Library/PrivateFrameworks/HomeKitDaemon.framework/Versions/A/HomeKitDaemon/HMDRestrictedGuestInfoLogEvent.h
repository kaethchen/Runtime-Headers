@class NSString, NSDictionary;

@interface HMDRestrictedGuestInfoLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    void /* unknown type, empty encoding */ coreAnalyticsEventName;
}

@property (nonatomic) void /* unknown type, empty encoding */ hasHomeKey;
@property (nonatomic) void /* unknown type, empty encoding */ hasPinCode;
@property (nonatomic) void /* unknown type, empty encoding */ isChildWatch;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfAccessories;
@property (nonatomic) void /* unknown type, empty encoding */ numberOfSchedules;
@property (nonatomic) void /* unknown type, empty encoding */ scheduleType;
@property (nonatomic, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic) void /* unknown type, empty encoding */ coreAnalyticsEventOptions;

- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (id)initWithStartTime:(double)a0 homeUUID:(id)a1;

@end
