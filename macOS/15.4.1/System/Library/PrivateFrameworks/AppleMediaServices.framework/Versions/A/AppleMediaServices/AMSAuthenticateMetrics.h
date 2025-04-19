@class NSString, AMSMetrics, NSDate;
@protocol AMSBagProtocol;

@interface AMSAuthenticateMetrics : NSObject <AMSBagConsumer, AMSAuthenticateMetricsProtocol>

@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) AMSMetrics *metrics;
@property (retain) NSDate *beginDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)_eventWithTopic:(id)a0;
+ (id)_metricsInstanceWithBag:(id)a0;
+ (id)createBagForSubProfile;

- (id)init;
- (void).cxx_destruct;
- (void)flushEvents;
- (id)_enqueueEvents:(id)a0;
- (BOOL)_accountIsSecondaryHomeUser:(id)a0;
- (id)_authenticationTypeStringFor:(unsigned long long)a0;
- (id)_clampTimeStampValue:(id)a0;
- (id)_credentialSourceStringFor:(unsigned long long)a0;
- (id)_durationSinceDate:(id)a0;
- (id)_enqueueEventWithTopic:(id)a0 properties:(id)a1;
- (id)_enqueueProperties:(id)a0 account:(id)a1;
- (id)_eventTime;
- (BOOL)_isTopicDefined:(id)a0;
- (id)_topicFromBag;
- (id)_userIdForBagNamespace:(id)a0;
- (id)enqueueAuthKitBeginEventWithOptions:(id)a0 account:(id)a1;
- (id)enqueueAuthKitFinishEventWithOptions:(id)a0 account:(id)a1 error:(id)a2;
- (id)enqueueAuthenticationBeginEventWithOptions:(id)a0 serverRequested:(BOOL)a1 account:(id)a2;
- (id)enqueueVerifyCredentialsBeginEventWithOptions:(id)a0 account:(id)a1;
- (id)enqueueVerifyCredentialsFinishEventWithOptions:(id)a0 account:(id)a1 error:(id)a2;
- (id)enqueueWithEvent:(unsigned long long)a0 context:(id)a1;
- (id)initWithBag:(id)a0;

@end
