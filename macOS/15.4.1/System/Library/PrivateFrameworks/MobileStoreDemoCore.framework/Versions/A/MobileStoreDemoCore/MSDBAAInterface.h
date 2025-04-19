@class NSMutableArray;

@interface MSDBAAInterface : NSObject

@property (retain) NSMutableArray *clientCertArray;
@property struct __SecKey { } *privateKey;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)addBAAAuthenticationHeadersToRequest:(id)a0 withBody:(id)a1 error:(id *)a2;
- (id)certificatesEncodeToBase64:(id)a0 status:(id *)a1;
- (BOOL)generateBAACertficate:(id /* block */)a0;
- (struct __SecKey { } *)lockcrypto_extract_public:(id)a0;
- (void)printAllKeys:(id)a0;
- (id)serializeCertificateChain:(id)a0;
- (id)signDataAndEncodeToBase64:(id)a0 withPrivateKey:(struct __SecKey { } *)a1 status:(id *)a2;
- (void)writeCertsToDevice:(id)a0;

@end
