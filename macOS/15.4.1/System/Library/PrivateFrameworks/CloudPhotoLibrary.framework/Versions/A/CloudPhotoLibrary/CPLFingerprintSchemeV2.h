@class NSData, NSString;

@interface CPLFingerprintSchemeV2 : CPLFingerprintScheme

@property (readonly, nonatomic) NSData *boundaryKey;
@property (readonly, nonatomic) NSString *boundaryKeyDescription;

- (void).cxx_destruct;
- (id)initWithBoundaryKey:(id)a0;
- (BOOL)isValidSignature:(id)a0;
- (id)fingerprintSchemeDescription;
- (void **)_createSignatureGenerator;
- (BOOL)isValidFingerprint:(id)a0;
- (BOOL)isMMCSv2;

@end
