@class NSLock, NSXPCConnection;

@interface ROSLockoutController : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSLock *serviceConnectionLock;
@property (nonatomic) BOOL systemLockoutEnabled;
@property (nonatomic) BOOL recoveryLockoutEnabled;

+ (id)LogObject;
+ (BOOL)lockoutControllerSupported;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (BOOL)_pingPongService;
- (BOOL)removeRecoveryPasswordWithError:(id *)a0;
- (BOOL)setRecoveryLockWithPassword:(id)a0 withError:(id *)a1;
- (BOOL)setSystemLockWithPIN:(id)a0 withPhoneNumber:(id)a1 withInformationalMessage:(id)a2 withError:(id *)a3;
- (id)systemLockSettings;
- (BOOL)validateRecoveryLockPassword:(id)a0 removeOnVerification:(BOOL)a1 withError:(id *)a2;
- (BOOL)validateSystemLockPIN:(id)a0 removeLockIfPINValidates:(BOOL)a1 withNextRetryDate:(id *)a2 withError:(id *)a3;

@end
