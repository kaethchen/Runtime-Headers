@class UARPiCloudContainer, NSObject;
@protocol OS_os_log, OS_dispatch_queue, UARPiCloudManagerDelegate;

@interface UARPiCloudManager : NSObject {
    NSObject<OS_dispatch_queue> *_recordProcessingQueue;
}

@property (readonly) UARPiCloudContainer *container;
@property (readonly) id<UARPiCloudManagerDelegate> delegate;
@property (readonly) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPublicKeyFromCertificateID:(id)a0;
- (void)performRemoteFetchForSupportedAccessoriesMetadata:(id)a0 batchRequest:(BOOL)a1;
- (id)calculateDigestFromCHIPAccessoryCKRecord:(id)a0;
- (id)calculateDigestFromCHIPAttestationCertificateRecord:(id)a0;
- (id)calculateDigestFromUARPAccessoryRecord:(id)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPublicKeyForVerificationCertificateData:(id)a0 policy:(struct __SecPolicy { } *)a1;
- (long long)fetchRemoteDatabaseChangesInContainer:(id)a0 completion:(id /* block */)a1;
- (BOOL)fetchVerificationCertificateInContainer:(id)a0;
- (void)fetchZoneChangesInContainer:(id)a0 forAccessories:(id)a1;
- (id)filterInterestedZonesInContainer:(id)a0 forAccessories:(id)a1;
- (BOOL)handleRemoteFetchRequestForCHIPAccessoriesMetadata:(id)a0 batchRequest:(BOOL)a1;
- (void)handleRemoteFetchRequestForCHIPAttestationCertificates:(id)a0;
- (BOOL)handleRemoteFetchRequestSyncForCHIPAccessoriesMetadata:(id *)a0 productGroup:(id)a1 batchRequest:(BOOL)a2;
- (void)handleRemoteFetchRequestSyncForCHIPAttestationCertificates:(id *)a0 subjectKeyIdentifier:(id)a1;
- (id)initWithDelegate:(id)a0 containerID:(id)a1;
- (void)performRemoteFetchForAccessories:(id)a0;
- (void)performRemoteFetchForAttestationCertificates:(id)a0;
- (void)performRemoteFetchForCHIPVerificationCertificateSync;
- (void)performRemoteFetchForSupportedAccessoriesMetadataInZone:(id)a0;
- (BOOL)processCHIPAccessoriesRecord:(id)a0;
- (void)processCHIPAccessoriesRecords:(id)a0 isComplete:(BOOL)a1 productGroup:(id)a2;
- (BOOL)processCHIPAttestationCertificateRecord:(id)a0 subjectKeyIdentifier:(id)a1;
- (void)processCHIPAttestationCertificateRecords:(id)a0 subjectKeyIdentifier:(id)a1;
- (void)processCHIPFirmwareRecord:(id)a0 inContainer:(id)a1 forAccessory:(id)a2;
- (void)processCKRecord:(id)a0 inContainer:(id)a1 forAccessory:(id)a2;
- (void)processRecordsInContainer:(id)a0 forAccessory:(id)a1;
- (void)processUpdatedRecordsInContainer:(id)a0 forAccessories:(id)a1;
- (void)processVerificationCertificateRecord:(id)a0 forContainer:(id)a1;
- (void)qHandleRemoteFetchRequestForAccessories:(id)a0;
- (BOOL)validateCHIPFirmwareRecord:(id)a0 inContainer:(id)a1 forAccessory:(id)a2;
- (BOOL)validateSignatureForUARPAccessoryRecord:(id)a0 inContainer:(id)a1;

@end
