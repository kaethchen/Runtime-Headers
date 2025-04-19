@interface CPLHardcodedFingerprintSchemeV2 : CPLFingerprintSchemeV2 {
    BOOL _shouldAssertOnFingerprinting;
}

@property (class, readonly) CPLHardcodedFingerprintSchemeV2 *sharedInstance;

- (id)init;
- (id)fingerprintSchemeDescription;
- (void **)_createSignatureGenerator;
- (id)boundaryKeyDescription;

@end
