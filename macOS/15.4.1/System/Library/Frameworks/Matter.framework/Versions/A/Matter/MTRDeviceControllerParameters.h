@class NSUUID, NSArray, NSData, MTRDeviceStorageBehaviorConfiguration, NSNumber, NSObject;
@protocol MTRKeypair, MTROperationalCertificateIssuer, MTROTAProviderDelegate, OS_dispatch_queue, MTRDeviceControllerStorageDelegate;

@interface MTRDeviceControllerParameters : MTRDeviceControllerAbstractParameters

@property (readonly, copy, nonatomic) NSData *ipk;
@property (readonly, copy, nonatomic) NSNumber *vendorID;
@property (readonly, copy, nonatomic) NSData *rootCertificate;
@property (readonly, copy, nonatomic) NSData *intermediateCertificate;
@property (readonly, copy, nonatomic) NSData *operationalCertificate;
@property (readonly, nonatomic) id<MTRKeypair> operationalKeypair;
@property (readonly, nonatomic) id<MTROperationalCertificateIssuer> operationalCertificateIssuer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationalCertificateIssuerQueue;
@property (readonly, nonatomic) id<MTRDeviceControllerStorageDelegate> storageDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storageDelegateQueue;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) id<MTROTAProviderDelegate> otaProviderDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *otaProviderDelegateQueue;
@property (copy, nonatomic) NSArray *productAttestationAuthorityCertificates;
@property (copy, nonatomic) NSArray *certificationDeclarationCertificates;
@property (nonatomic) BOOL shouldAdvertiseOperational;
@property (nonatomic) unsigned long long concurrentSubscriptionEstablishmentsAllowedOnThread;
@property (copy, nonatomic) MTRDeviceStorageBehaviorConfiguration *storageBehaviorConfiguration;

+ (id)fabricIDFromNOC:(id)a0;
+ (id)nodeIDFromNOC:(id)a0;
+ (id)publicKeyFromCertificate:(id)a0;

- (void).cxx_destruct;
- (id)initWithStorageDelegate:(id)a0 storageDelegateQueue:(id)a1 uniqueIdentifier:(id)a2 ipk:(id)a3 vendorID:(id)a4 operationalKeypair:(id)a5 operationalCertificate:(id)a6 intermediateCertificate:(id)a7 rootCertificate:(id)a8;
- (void)setOTAProviderDelegate:(id)a0 queue:(id)a1;
- (void)setOperationalCertificateIssuer:(id)a0 queue:(id)a1;

@end
