@class NSCountedSet, NSString, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_source, OS_dispatch_queue;

@interface _DASSubmissionRateLimiter : NSObject <_DASLimits>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSString *limitationName;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *submissionTimer;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } penaltyLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL testing;
@property (nonatomic) int token;
@property (retain, nonatomic) NSCountedSet *submittedActivityTracker;
@property (retain, nonatomic) NSCountedSet *penaltyTracker;
@property (retain, nonatomic) NSMutableArray *minorPenaltyActivities;
@property (retain, nonatomic) NSMutableArray *majorPenaltyActivities;
@property (nonatomic) unsigned long long minorPenaltyTimerCount;
@property (nonatomic) unsigned long long majorPenaltyTimerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLimiter;

- (id)init;
- (void).cxx_destruct;
- (void)removeAll;
- (void)addToPenaltyBox:(id)a0;
- (void)addToTracker:(id)a0;
- (BOOL)limitedActivity:(id)a0 withLimitsResponses:(id)a1;
- (BOOL)limitsApplyToActivity:(id)a0;
- (void)removeAllFromActivityTracker;
- (id)shouldLimitActivityAtSubmission:(id)a0;
- (void)timerHandler;
- (BOOL)trackActivity:(id)a0;

@end
