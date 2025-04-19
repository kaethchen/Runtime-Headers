@class NSString, NSMutableDictionary, NSData, KCSRPClientContext, KCAESGCMDuplexSession;
@protocol KCJoiningRequestSecretDelegate;

@interface KCJoiningRequestSecretSession : NSObject

@property (weak) id<KCJoiningRequestSecretDelegate> secretDelegate;
@property (readonly) KCSRPClientContext *context;
@property (readonly) unsigned long long dsid;
@property (readonly) int state;
@property (retain) NSString *piggy_uuid;
@property unsigned long long piggy_version;
@property unsigned long long epoch;
@property (retain) NSData *challenge;
@property (retain) NSData *salt;
@property (retain) NSString *sessionUUID;
@property (retain) NSString *flowID;
@property (retain) NSString *deviceSessionID;
@property (retain, nonatomic) NSMutableDictionary *defaults;
@property (readonly) KCAESGCMDuplexSession *session;
@property (retain) NSString *altDSID;

+ (id)sessionWithSecretDelegate:(id)a0 dsid:(unsigned long long)a1 altDSID:(id)a2 flowID:(id)a3 deviceSessionID:(id)a4 error:(id *)a5;
+ (id)sessionWithSecretDelegate:(id)a0 dsid:(unsigned long long)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (id)stateString;
- (BOOL)isDone;
- (id)initialMessage:(id *)a0;
- (id)copyResponseForChallenge:(id)a0 salt:(id)a1 secret:(id)a2 error:(id *)a3;
- (id)copyResponseForSecret:(id)a0 error:(id *)a1;
- (id)createUUID;
- (id)handleChallenge:(id)a0 error:(id *)a1;
- (id)handleChallenge:(id)a0 secret:(id)a1 error:(id *)a2;
- (id)handleChallengeData:(id)a0 secret:(id)a1 error:(id *)a2;
- (id)handleVerification:(id)a0 error:(id *)a1;
- (id)initWithSecretDelegate:(id)a0 dsid:(unsigned long long)a1 altDSID:(id)a2 flowID:(id)a3 deviceSessionID:(id)a4 error:(id *)a5;
- (id)initWithSecretDelegate:(id)a0 dsid:(unsigned long long)a1 altDSID:(id)a2 flowID:(id)a3 deviceSessionID:(id)a4 rng:(struct ccrng_state { void /* function */ *x0; } *)a5 error:(id *)a6;
- (id)processMessage:(id)a0 error:(id *)a1;
- (BOOL)setupSession:(id *)a0;

@end
