@class NSArray, ICNFMCSaslClient, NSData, NSFileHandle, ICNFMCSocket, NSString;
@protocol ICNFMCAccount;

@interface ICNFMCConnection : NSObject <ICNFMCConnectionLogging> {
    id _accountLock;
    id<ICNFMCAccount> _account;
}

@property (nonatomic) void *buffer;
@property (nonatomic) long long bufferRemainingBytes;
@property (nonatomic) unsigned long long bufferStart;
@property (nonatomic) unsigned long long bufferLength;
@property (retain, nonatomic) NSData *logHeader;
@property (retain, nonatomic) ICNFMCSaslClient *saslClient;
@property (retain) NSFileHandle *logFile;
@property (retain, nonatomic) ICNFMCSocket *socket;
@property (readonly, nonatomic) BOOL hasBytesAvailable;
@property (readonly, nonatomic) BOOL supportsPlainTextSchemes;
@property (nonatomic) double connectTimeout;
@property (nonatomic) double readWriteTimeout;
@property (weak) id<ICNFMCAccount> account;
@property BOOL isBackground;
@property (readonly, nonatomic) BOOL isExpensive;
@property (readonly, nonatomic) unsigned int cipherKeyLength;
@property (readonly, copy, nonatomic) NSArray *authenticationMechanisms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)_defaultsToBackground;
+ (id)loggingDelegate;
+ (id)logActivityOnHosts;
+ (id)logActivityOnPorts;
+ (BOOL)logActivityToFile;
+ (BOOL)logAllSocketActivity;
+ (void)setLogActivityOnHosts:(id)a0;
+ (void)setLogActivityOnPorts:(id)a0;
+ (void)setLogActivityToFile:(BOOL)a0;
+ (void)setLogAllSocketActivity:(BOOL)a0;
+ (void)setLoggingDelegate:(id)a0;
+ (BOOL)shouldLogActivityForHost:(id)a0 port:(long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)quit;
- (void)_setupConnection;
- (void)logData:(id)a0;
- (void)logString:(id)a0;
- (BOOL)authenticate;
- (BOOL)_fillBuffer:(id *)a0;
- (void)flushLog;
- (BOOL)connectDiscoveringBestSettings:(BOOL)a0;
- (id)_authenticateWithNonPlainTextSchemes;
- (id)_authenticateWithPlainTextSchemes;
- (BOOL)_completeConnectionWithResult:(BOOL)a0;
- (BOOL)_readLineIntoData:(id)a0 error:(id *)a1;
- (BOOL)_startTLS;
- (BOOL)_writeData:(id)a0 dontLogBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (void)discoverAccountSettings;
- (BOOL)isValidAllowNetworking:(BOOL)a0;
- (BOOL)_readBytesIntoData:(id)a0 desiredLength:(long long)a1 error:(id *)a2;
- (BOOL)_authenticateWithAuthenticationMechanisms:(id)a0 allowPlainText:(BOOL)a1;
- (BOOL)_isSSLError:(id)a0;
- (void)_logEventWithPrefix:(const char *)a0 bytes:(const void *)a1 length:(unsigned long long)a2 maskStartIndex:(unsigned long long)a3 maskLength:(unsigned long long)a4;
- (void)_logToFileDidChange:(id)a0;
- (void)_loggingDidChange:(id)a0;
- (id)_newConnectionAttemptsConfigureDynamically:(BOOL)a0;
- (long long)_readBytesFromSocketIntoBuffer:(void *)a0 amount:(unsigned long long)a1 requireAllBytes:(BOOL)a2 error:(id *)a3;
- (void)_resetLogHeaderWithPort:(long long)a0;
- (void)_setupReadErrorForMonitor;
- (void)_setupWriteErrorForMonitor;
- (void)logBytes:(void *)a0 length:(unsigned long long)a1;
- (void)logData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_authenticateWithSaslClient:(id)a0;
- (void)_setupConnectionErrorForMonitorWithPort:(long long)a0 usingSSL:(BOOL)a1;
- (void)_setupSSLErrorForMonitorWithHostname:(id)a0;
- (void)_setupSocketWithSecurityLayer:(long long)a0;
- (BOOL)_shouldKeepTryingAfterAuthenticationFailure:(id *)a0;

@end
