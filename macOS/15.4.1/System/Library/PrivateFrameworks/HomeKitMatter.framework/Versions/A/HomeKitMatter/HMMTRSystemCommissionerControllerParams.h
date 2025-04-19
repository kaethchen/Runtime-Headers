@class HMMTRControllerFactory, NSNumber, NSArray, HMMTRControllerWrapper, NSObject, HMMTRMatterKeypair;
@protocol OS_dispatch_queue;

@interface HMMTRSystemCommissionerControllerParams : HMFObject <MTROperationalCertificateIssuer>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMMTRControllerFactory *controllerFactory;
@property (retain, nonatomic) HMMTRControllerWrapper *controllerWrapper;
@property (retain, nonatomic) HMMTRMatterKeypair *v1keypair;
@property (retain, nonatomic) NSNumber *commissioningFabricID;
@property (retain, nonatomic) NSNumber *adminNodeID;
@property (nonatomic) BOOL generatingKeyPair;
@property (retain) NSNumber *commissioneeNodeID;
@property (copy, nonatomic) NSArray *productAttestationAuthorityCertificates;
@property (copy, nonatomic) NSArray *certificationDeclarationCertificates;
@property (readonly, nonatomic) BOOL shouldSkipAttestationCertificateValidation;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)issueOperationalCertificateForRequest:(id)a0 attestationInfo:(id)a1 controller:(id)a2 completion:(id /* block */)a3;
- (void)setMTSStoredValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)_buildControllerParams1WithV1Keypair:(id)a0;
- (id)_buildControllerParams2WithV1Keypair:(id)a0;
- (void)_buildV1KeyFromScratch;
- (void)_buildV1KeyFromV0KeyAllowingNew:(BOOL)a0;
- (void)_buildV1KeyWithPrivateKey:(struct __SecKey { } *)a0 operationalKey:(struct __SecKey { } *)a1 ipk:(id)a2 rootCert:(id)a3 operationalCert:(id)a4 updatingMTSKeyValueStore:(BOOL)a5;
- (void)_buildV1KeyWithV0KeyPair:(id)a0;
- (BOOL)_checkAndUpdateValidityPeriodOfV1Keypair:(id)a0 newKeyPair:(id *)a1;
- (BOOL)_findFabricRecordInMTSKeyValueStoreMatchingKeyPair:(id)a0 ipk:(id *)a1 rootCert:(id *)a2 operationalKey:(id *)a3 operationalCert:(id *)a4;
- (void)_handleKeychainDataChanged;
- (void)_obtainControllerWrapperWithV1KeyPair:(id)a0 startupParams:(id)a1;
- (void)_startWithV1Keypair:(id)a0;
- (void)_updateMTSKeyValueStore:(id)a0;
- (BOOL)fetchControllerParamsAllowingNew:(BOOL)a0 nocSigner:(id *)a1 controllerWrapper:(id *)a2;
- (void)handleKeyPairDataChanged;
- (id)initWithQueue:(id)a0 controllerFactory:(id)a1;
- (id)storeV0MatterKeypair;
- (id)storeV0MatterKeypairWithPrivateKey:(struct __SecKey { } *)a0;
- (id)storeV1MatterKeypairWithPrivateKey:(struct __SecKey { } *)a0 operationalKey:(struct __SecKey { } *)a1 rootCert:(id)a2 operationalCert:(id)a3 ipk:(id)a4;
- (id)v0MatterKeypairFromKeychain;
- (BOOL)v1KeypairIsEquivalentTo:(id)a0;
- (id)v1MatterKeypairFromKeychain;

@end
