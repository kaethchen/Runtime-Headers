@class NSTimer, NSOperationQueue, MFSMTPConnection, ECSMTPAccount;

@interface MFSMTPAccount : MFDeliveryAccount {
    MFSMTPConnection *_connection;
    id _smtpAccountLock;
    NSTimer *_timer;
}

@property (readonly, nonatomic) NSOperationQueue *connectionCleanupQueue;
@property (nonatomic) long long lastTimerSetTime;
@property (readonly) ECSMTPAccount *baseAccount;

+ (id)accountTypeString;
+ (id)standardPorts;
+ (id)standardSSLPorts;
+ (id)csAccountTypeString;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (void)_setTimer;
- (void)checkInConnection:(id)a0;
- (id)saslProfileName;
- (id)initWithSystemAccount:(id)a0;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (void)_connectionExpired:(id)a0;
- (void)_disconnect:(id)a0;
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)a0 changedSystemAccount:(BOOL *)a1;
- (id)authenticatedConnection;
- (BOOL)connectAndAuthenticate:(id)a0;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)a0 withConnectTimeout:(double)a1 readWriteTimeout:(double)a2;
- (id)newDelivererWithMessage:(id)a0;
- (void)releaseAllConnections;

@end
