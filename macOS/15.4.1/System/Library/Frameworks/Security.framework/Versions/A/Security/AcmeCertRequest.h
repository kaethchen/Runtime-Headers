@class SecJWSEncoder, NSArray, NSDictionary, NSData, NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AcmeCertRequest : NSObject

@property long long state;
@property BOOL logAcmeCSR;
@property BOOL permitLocalIssuer;
@property BOOL requireAttestation;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSArray *subject;
@property (retain) NSDictionary *parameters;
@property (retain) NSDictionary *keyParams;
@property (retain) NSArray *attestationOids;
@property (retain) NSArray *attestationChain;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *attestationCRKey;
@property (retain) NSArray *attestationCRChain;
@property (retain) NSData *attestation;
@property (retain) NSData *csr;
@property (retain) NSString *nonce;
@property (retain) NSString *location;
@property (retain) NSString *account;
@property (retain) NSString *token;
@property (retain) NSString *timestamp;
@property (retain) NSArray *authorizations;
@property (retain) NSString *authorizationURL;
@property (retain) NSString *challengeURL;
@property (retain) NSString *finalizeOrderURL;
@property (retain) NSString *orderURL;
@property (retain) NSString *certificateURL;
@property (retain) NSString *nextMessageURL;
@property (retain) NSString *acmeNewAccountURL;
@property (retain) NSString *acmeNewNonceURL;
@property (retain) NSString *acmeNewOrderURL;
@property (retain) NSObject<OS_dispatch_queue> *xpc_queue;
@property (retain) NSObject<OS_xpc_object> *connection;
@property (retain) SecJWSEncoder *encoder;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *publicKey;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *privateKey;
@property struct __SecCertificate { } *certificate;
@property struct __SecIdentity { } *identity;

- (void)dealloc;
- (void).cxx_destruct;
- (id)sanitizeSubject;
- (id)acmeRequest;
- (id)attestationChainPEMRepresentation;
- (id)attestationObjectWithCertificates:(id)a0;
- (id)createCSR;
- (id)createCertificate;
- (id)createKeyPair;
- (BOOL)deviceAttestationSupported;
- (int)errorStatusWithHTTPErrorCode:(int)a0;
- (id)executeRequest;
- (id)hardwareAttestationWithError:(id *)a0;
- (struct __SecIdentity { } *)identityWithError:(id *)a0;
- (id)initWithSubject:(id)a0 parameters:(id)a1;
- (id)pollForStatus:(id)a0 until:(id)a1;
- (id)processReply:(id)a0;
- (id)requestAttestationChainWithError:(id *)a0;
- (id)sanitizeParameters;
- (id)sendRequestToXPCService:(id)a0 response:(id *)a1;
- (id)serialNumber;
- (BOOL)valueForBooleanDefault:(id)a0;

@end
