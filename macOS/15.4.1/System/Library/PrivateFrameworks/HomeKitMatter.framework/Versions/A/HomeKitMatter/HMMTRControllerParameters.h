@class NSUUID, NSArray, NSData, NSNumber, NSObject;
@protocol MTRKeypair, MTROperationalCertificateIssuer, MTROTAProviderDelegate, OS_dispatch_queue, MTRDeviceControllerStorageDelegate;

@interface HMMTRControllerParameters : HMFObject <NSCopying>

@property (copy, nonatomic) NSData *ipk;
@property (copy, nonatomic) NSNumber *fabricID;
@property (copy, nonatomic) NSUUID *uniqueIdentifier;
@property (copy, nonatomic) NSData *rootCertificate;
@property (copy, nonatomic) NSData *intermediateCertificate;
@property (copy, nonatomic) NSData *operationalCertificate;
@property (retain, nonatomic) id<MTRKeypair> operationalKeypair;
@property (copy, nonatomic) NSData *rootPublicKey;
@property (retain, nonatomic) id<MTRDeviceControllerStorageDelegate> storageDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageDelegateQueue;
@property (copy, nonatomic) NSNumber *vendorID;
@property (retain, nonatomic) id<MTROperationalCertificateIssuer> operationalCertificateIssuer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationalCertificateIssuerQueue;
@property (retain, nonatomic) id<MTROTAProviderDelegate> otaProviderDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *otaProviderDelegateQueue;
@property (copy, nonatomic) NSArray *productAttestationAuthorityCertificates;
@property (copy, nonatomic) NSArray *certificationDeclarationCertificates;
@property (nonatomic) BOOL shouldAdvertiseOperational;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIPK:(id)a0 operationalKeypair:(id)a1 operationalCertificate:(id)a2 intermediateCertificate:(id)a3 rootCertificate:(id)a4;
- (id)initWithStorageDelegate:(id)a0 storageDelegateQueue:(id)a1 uniqueIdentifier:(id)a2 ipk:(id)a3 vendorID:(id)a4 operationalKeypair:(id)a5 operationalCertificate:(id)a6 intermediateCertificate:(id)a7 rootCertificate:(id)a8;
- (id)controllerParams;
- (id)controllerParams2;
- (BOOL)usesCommonStorageDelegate;

@end
