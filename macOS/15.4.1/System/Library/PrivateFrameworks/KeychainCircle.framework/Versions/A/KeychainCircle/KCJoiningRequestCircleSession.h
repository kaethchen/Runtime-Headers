@class KCAESGCMDuplexSession, NSString, OTControl, OTControlArguments, NSObject, OTJoiningConfiguration;
@protocol KCJoiningRequestCircleDelegate;

@interface KCJoiningRequestCircleSession : NSObject

@property (readonly) NSObject<KCJoiningRequestCircleDelegate> *circleDelegate;
@property (readonly) KCAESGCMDuplexSession *session;
@property int state;
@property (nonatomic) unsigned long long piggy_version;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *flowID;
@property (retain, nonatomic) NSString *deviceSessionID;
@property (retain, nonatomic) OTControl *otControl;
@property (retain, nonatomic) OTJoiningConfiguration *joiningConfiguration;
@property (retain, nonatomic) OTControlArguments *controlArguments;

+ (id)sessionWithCircleDelegate:(id)a0 session:(id)a1 altDSID:(id)a2 flowID:(id)a3 deviceSessionID:(id)a4 error:(id *)a5;
+ (id)sessionWithCircleDelegate:(id)a0 session:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)isDone;
- (id)initialMessage:(id *)a0;
- (id)accessSession;
- (id)encryptPeerInfo:(id *)a0;
- (id)encryptedInitialMessage:(id)a0 error:(id *)a1;
- (id)encryptedPeerInfo:(id *)a0;
- (id)handleCircleBlob:(id)a0 error:(id *)a1;
- (id)initWithCircleDelegate:(id)a0 session:(id)a1 altDSID:(id)a2 flowID:(id)a3 deviceSessionID:(id)a4 error:(id *)a5;
- (id)initWithCircleDelegate:(id)a0 session:(id)a1 otcontrol:(id)a2 altDSID:(id)a3 flowID:(id)a4 deviceSessionID:(id)a5 error:(id *)a6;
- (id)processMessage:(id)a0 error:(id *)a1;
- (void)setContextIDForSession:(id)a0;
- (void)setControlObject:(id)a0;
- (BOOL)shouldJoinSOS:(id)a0 pairingMessage:(id)a1;
- (void)waitForOctagonUpgrade;

@end
