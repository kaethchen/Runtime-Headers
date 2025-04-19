@interface IMKeyTransparencyController : NSObject <IMDaemonListenerKeyTransparencyProtocol, IMDaemonListenerSetupProtocol> {
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ verifier;
@property (nonatomic, readonly) BOOL selfOptedIn;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)keyTransparencyOptInStateChanged:(BOOL)a0;
- (void)refreshStatusForKTPeerURI:(id)a0;
- (void)setupComplete;
- (void)setupComplete:(BOOL)a0 info:(id)a1;
- (void)setIDSIDInfoResult:(id)a0 forHandleID:(id)a1;
- (unsigned long long)contactKeyVerificationStatusForHandleID:(id)a0 inChat:(id)a1;
- (id)idsIDInfoResultForHandleID:(id)a0;
- (id)ktVerifierResultForHandleID:(id)a0;
- (void)setKTVerifierResult:(id)a0 forHandleID:(id)a1;
- (void)setKTVerifierResultsFromIDSInfoResultsDictionary:(id)a0;

@end
