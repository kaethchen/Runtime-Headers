@class CPLFingerprintScheme, NSData, CPLFingerprintSchemeV1, CPLFingerprintSchemeV2;

@interface CPLFingerprintContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, retain) CPLFingerprintContext *sharedContext;

@property (copy) NSData *boundaryKey;
@property (readonly) CPLFingerprintSchemeV1 *mmcsv1FingerprintScheme;
@property (readonly) CPLFingerprintSchemeV2 *mmcsv2FingerprintScheme;
@property (readonly) BOOL usesMMCSv2AsDefault;
@property (readonly, nonatomic) CPLFingerprintScheme *fingerprintSchemeForNewMasterAsset;

+ (void)initialize;
+ (void)setupFingerprintContextForTests;
+ (long long)defaultAccountEPPCapabilityInUniverseName:(id)a0;

- (void).cxx_destruct;
- (id)initWithBoundaryKey:(id)a0;
- (id)fingerprintSchemeForFingerprint:(id)a0;
- (id)fingerprintSchemeForMasterIdentifier:(id)a0;
- (void)refreshBoundaryKeyWithSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateWithStatus:(id)a0 configuration:(id)a1;
- (id)fingerprintSchemeForSignature:(id)a0;
- (id)initWithFingerprintSchemeV1:(id)a0 fingerprintSchemeV2:(id)a1;
- (void)updateWithAccountEPPCapability:(long long)a0 source:(id)a1;

@end
