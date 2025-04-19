@class HMMTRMatterKeypair, HMMTRAccessoryServerBrowser, NSString, NSData, NSArray, NSNumber, NSObject;
@protocol OS_dispatch_queue, HMMTROperationalCertificateIssuerRemoteDelegate;

@interface HMMTROperationalCertificateIssuer : NSObject <HMFObject, HMFLogging, MTROperationalCertificateIssuer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNumber *fabricID;
@property (readonly) NSData *rootCertificate;
@property (readonly) HMMTRMatterKeypair *rootKeyPair;
@property (readonly) id<HMMTROperationalCertificateIssuerRemoteDelegate> remoteDelegate;
@property (retain) NSNumber *commissioneeNodeID;
@property (readonly, weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldSkipAttestationCertificateValidation;

+ (id)shortDescription;
+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isEquivalentTo:(id)a0;
- (id)logIdentifier;
- (id)initWithRemoteDelegate:(id)a0 fabricID:(id)a1;
- (id)initWithRootKeyPair:(id)a0 rootCertificate:(id)a1 fabricID:(id)a2;
- (void)issueOperationalCertificateForRequest:(id)a0 attestationInfo:(id)a1 controller:(id)a2 completion:(id /* block */)a3;
- (id)publicKeyFromCSRInfo:(id)a0 error:(id *)a1;

@end
