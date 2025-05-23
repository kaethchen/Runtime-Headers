@class NSMutableSet, NSDate;
@protocol DARefreshManagerDelegate;

@interface DARefreshWrapper : NSObject <DATokenRegistrationDelegate>

@property (retain, nonatomic) NSMutableSet *tokenRegistrations;
@property (nonatomic) int refreshReason;
@property (retain, nonatomic) NSMutableSet *refreshCollections;
@property (nonatomic) long long fetchInterval;
@property (weak, nonatomic) id<DARefreshManagerDelegate> delegate;
@property (nonatomic) int pushState;
@property (retain, nonatomic) NSDate *pushRegistrationTime;
@property (nonatomic) int curStyle;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_stringForStyle:(int)a0;
- (void)startFetchActivityWithInterval:(long long)a0;
- (long long)XPCActivityIntervalFromSystemSetting;
- (id)_fetchActivityCriteriaInOnPowerMode;
- (id)_fetchActivityCriteriaWithInterval:(long long)a0;
- (void)_retryActivityFired;
- (void)cancelAllTokenRegistrations;
- (void)cancelDailyRefreshActivity;
- (void)cancelFetchActivity;
- (void)cancelRetryActivity;
- (void)dailyRefreshActivityFired;
- (const char *)fetchActivityIdentifier;
- (BOOL)isSetToSystemFetchInterval;
- (void)performTokenRegistrationRequestsWithToken:(id)a0 onBehalfOf:(id)a1;
- (void)refreshCollections:(id)a0 withReason:(int)a1;
- (const char *)retryActivityIdentifier;
- (void)retryCollections:(id)a0 after:(double)a1 reason:(int)a2;
- (void)startDailyRefreshActivity;
- (void)startFetchActivityForPush;
- (void)startFetchActivityForSystemPCStyle;
- (void)stopCollectionsRefresh;
- (void)tokenRegistrationRequest:(id)a0 finishedWithError:(id)a1;

@end
