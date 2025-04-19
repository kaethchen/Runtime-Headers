@class NSString, NSDictionary, NSUUID;

@interface HMDAppleMediaAccessoryRemovalLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) BOOL isLocalRemoval;
@property (readonly, nonatomic) BOOL isLocalFallback;
@property (readonly, nonatomic) BOOL isDuplicate;
@property (readonly, nonatomic) long long duplicateCount;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsLocalRemoval:(BOOL)a0 isLocalFallback:(BOOL)a1 isDuplicate:(BOOL)a2 duplicateCount:(long long)a3;

@end
