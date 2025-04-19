@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSBAASigner : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *baaQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)isBAAHTTPResponseCode:(long long)a0;
+ (BOOL)shouldRetryError:(id)a0;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (BOOL)isVirtualMachine;
- (id)alternateICloudSigningPayloadForData:(id)a0 currentTimestampInMs:(unsigned long long *)a1;
- (id)baaCertTTLInMinutesFromServerBag;
- (id)baaFetchTimeoutFromServerBag;
- (id)errorStringForNSError:(id)a0;
- (id)errorStringForNSErrorWithoutUnderlyingError:(id)a0;
- (id)errorStringForSingingResult:(id)a0;
- (void)fetchBAAIdentityIfNeededWithCompletion:(id /* block */)a0;
- (id)headersBySigningData:(id)a0 baaSigningResult:(id)a1 baaCert:(id)a2 intermediateRootCert:(id)a3;
- (void)headersBySigningData:(id)a0 serverTimestamp:(id)a1 topic:(id)a2 completion:(id /* block */)a3;
- (void)headersBySigningDataNoXPC:(id)a0 serverTimestamp:(id)a1 completion:(id /* block */)a2;
- (void)headersBySigningDataXPC:(id)a0 serverTimestamp:(id)a1 topic:(id)a2 completion:(id /* block */)a3;
- (id)hostErrorStringForSingingResult:(id)a0;
- (id)icloudBAAVersion;
- (id)icloudSignData:(id)a0 withKey:(struct __SecKey { } *)a1 error:(id *)a2;
- (id)icloudSigningPayloadForData:(id)a0 withAltPayload:(id)a1;
- (BOOL)isBAAProtocolHeader:(id)a0;
- (id)isBAASupportedHeaderValue;
- (BOOL)isDeviceIdentitySupported;
- (id)legacySignData:(id)a0 withKey:(struct __SecKey { } *)a1 signingTimestamp:(id *)a2 error:(id *)a3;
- (void)purgeBAACertForTopic:(id)a0;
- (void)purgeBAACertForTopic:(id)a0 completion:(id /* block */)a1;
- (void)purgeBAACertNoXPCWithCompletion:(id /* block */)a0;
- (void)purgeBAACertXPCForTopic:(id)a0 completion:(id /* block */)a1;
- (void)signData:(id)a0 withKey:(struct __SecKey { } *)a1 completion:(id /* block */)a2;

@end
