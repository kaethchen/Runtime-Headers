@class NSString;
@protocol HMMLogEventSubmitting;

@interface HMDMetricsPreferencesDebugManager : HMFObject <HMDLogEventDailyTaskRunner>

@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
