@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDUserActivityStateType6DetectorTransitionDailyCountLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) NSNumber *endedHomeCount;
@property (readonly, nonatomic) NSNumber *coreLocationCount;
@property (readonly, nonatomic) NSNumber *coreLocationEndedHomeCount;
@property (readonly, nonatomic) NSNumber *coreLocationEndedNonHome;
@property (readonly, nonatomic) NSNumber *coreLocationEndedNotMakingProgress;
@property (readonly, nonatomic) NSNumber *coreLocationResume;
@property (readonly, nonatomic) NSNumber *coreLocationEndDateUpdated;
@property (readonly, nonatomic) NSNumber *coreLocationVisitExit;
@property (readonly, nonatomic) NSNumber *coreLocationVisitEntry;
@property (readonly, nonatomic) NSNumber *maxCoreLocationStateEndOffset;
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
- (id)initWithEndedHomeCount:(id)a0 coreLocationCount:(id)a1 coreLocationEndedHomeCount:(id)a2 coreLocationEndedNonHome:(id)a3 coreLocationEndedNotMakingProgress:(id)a4 coreLocationResume:(id)a5 coreLocationEndDateUpdated:(id)a6 coreLocationVisitExit:(id)a7 coreLocationVisitEntry:(id)a8 maxCoreLocationStateEndOffset:(id)a9;

@end
