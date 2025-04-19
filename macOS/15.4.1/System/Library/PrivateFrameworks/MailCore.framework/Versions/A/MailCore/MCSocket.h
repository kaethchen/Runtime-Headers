@class NSOutputStream, NSString, NSArray, NSData, NSPort, NSInputStream, NSObject;
@protocol OS_os_log;

@interface MCSocket : NSObject <NSStreamDelegate> {
    NSArray *_clientCertificates;
    BOOL _useSSL;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSPort *wakeupPort;
@property (retain) NSInputStream *inputStream;
@property (retain) NSOutputStream *outputStream;
@property (copy) id /* block */ bytesAvailableHandler;
@property BOOL scheduledForBytesToArrive;
@property (readonly) unsigned long long identifier;
@property long long activityType;
@property BOOL isNonAppInitiated;
@property (nonatomic) double connectTimeout;
@property (nonatomic) double readWriteTimeout;
@property (readonly, nonatomic) BOOL isExpensive;
@property (readonly, copy, nonatomic) NSString *securityLevel;
@property (readonly, nonatomic) unsigned int cipherKeyLength;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, copy, nonatomic) NSString *remoteHostname;
@property (readonly, nonatomic) long long remotePortNumber;
@property (readonly, copy, nonatomic) NSData *sourceIPAddress;
@property (readonly, copy, nonatomic) NSString *sourceHostname;
@property (copy) NSArray *trustedCertificates;
@property BOOL disableEphemeralDiffieHellmanCiphers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (struct __SecTrust { } *)serverTrust;
- (void)setClientIdentity:(struct __SecIdentity { } *)a0;
- (BOOL)setUsesSSL:(BOOL)a0;
- (void)registerForBytesToArriveWithHandler:(id /* block */)a0;
- (void)unregisterForBytesToArrive;
- (void)_cancelLookupForHost:(struct __CFHost { } *)a0 infoType:(int)a1;
- (BOOL)_handleReadWriteErrorOnStream:(id)a0 timedOut:(BOOL)a1 logDetails:(id)a2 error:(id *)a3;
- (void)_scheduleInputStreamInMainRunLoopIfNecessary;
- (BOOL)_setSSLStreamProperties:(BOOL)a0;
- (BOOL)_setupStreamsWithHostname:(id)a0 port:(long long)a1 needToEstablishInternetConnection:(BOOL *)a2 useSSL:(BOOL *)a3 isBackground:(BOOL)a4 error:(id *)a5;
- (void)_unscheduleInputStreamFromMainRunLoopIfNecessary;
- (id)_waitForSecurityLayerNegotiationStreamsAreScheduled:(BOOL)a0;
- (BOOL)connectToHost:(id)a0 withPort:(long long)a1 isBackground:(BOOL)a2;
- (long long)readBytes:(void *)a0 maxLength:(unsigned long long)a1 error:(id *)a2;
- (long long)writeBytes:(const void *)a0 maxLength:(unsigned long long)a1 error:(id *)a2;

@end
