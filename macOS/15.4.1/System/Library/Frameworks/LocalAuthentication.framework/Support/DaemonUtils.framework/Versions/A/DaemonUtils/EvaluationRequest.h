@class NSString, NSUUID, NSDictionary, NSData, LAAnalyticsEvaluation, NSError, LACAnalyticsData;
@protocol LACXPCClient;

@interface EvaluationRequest : Request <LACEvaluationRequest>

@property (retain, nonatomic) NSUUID *contextID;
@property (nonatomic) long long policy;
@property (retain, nonatomic) NSData *acl;
@property (retain, nonatomic) id aclOperation;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) long long purpose;
@property (nonatomic) BOOL customUI;
@property (nonatomic) unsigned int evaluationUserId;
@property (retain, nonatomic) LAAnalyticsEvaluation *analytics;
@property (retain, nonatomic) NSDictionary *payload;
@property (weak, nonatomic) id<LACXPCClient> client;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly, nonatomic) BOOL isPurposeApplePay;
@property (readonly, nonatomic) BOOL isPurposeUnlock;
@property (readonly, nonatomic) BOOL isPurposeInAppPayment;
@property (retain, nonatomic) NSError *retryingForError;
@property (readonly, nonatomic) BOOL isRecoveringFromBiolockout;
@property (nonatomic) BOOL secureIntentRequested;
@property (readonly, nonatomic) BOOL isInteractive;
@property (nonatomic, getter=isImmediateSuccess) BOOL immediateSuccess;
@property (retain, nonatomic) LACAnalyticsData *analyticsData;
@property (readonly, nonatomic) unsigned int identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)current;
+ (BOOL)isApplePayPolicy:(long long)a0;

- (void).cxx_destruct;
- (void)updateOptions:(id)a0;
- (id)shallowCopy;
- (id)initSimulatedForBiolockoutPreflight;
- (id)initWithAcl:(id)a0 operation:(id)a1 options:(id)a2 contextID:(id)a3;
- (id)initWithAcl:(id)a0 operation:(id)a1 options:(id)a2 uiDelegate:(id)a3 contextID:(id)a4;
- (id)initWithPolicy:(long long)a0 options:(id)a1 contextID:(id)a2;
- (id)initWithPolicy:(long long)a0 options:(id)a1 uiDelegate:(id)a2 contextID:(id)a3;
- (void)updatePayload:(id)a0;

@end
