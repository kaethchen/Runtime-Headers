@class NSArray, NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDRVCUsageLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL wholeHouse;
@property (copy, nonatomic) NSNumber *roomCount;
@property (copy, nonatomic) NSNumber *roomsInHome;
@property (copy, nonatomic) NSArray *cleanModes;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithSource:(unsigned long long)a0 wholeHouse:(BOOL)a1 roomCount:(id)a2 roomsInHome:(id)a3 cleanModes:(id)a4;

- (void).cxx_destruct;

@end
