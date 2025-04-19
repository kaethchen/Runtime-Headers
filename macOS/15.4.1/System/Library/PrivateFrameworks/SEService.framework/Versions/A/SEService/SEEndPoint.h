@class NSNumber, NSArray, NSString, NSData, NSDictionary, SEEndPointConfiguration, SEEndPointPrivacyEncryptResponse;

@interface SEEndPoint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *certificates;
@property (retain) SEEndPointConfiguration *configuration;
@property (readonly, nonatomic) NSString *issuerIdentifier;
@property (readonly, nonatomic) NSString *privacyKeyIdentifier;
@property (readonly, nonatomic) NSData *keyIdentifier;
@property (retain, nonatomic) NSData *revocationAttestation;
@property (retain, nonatomic) SEEndPointPrivacyEncryptResponse *carOEMProprietaryData;
@property (retain, nonatomic) NSString *terminatedByTaskID;
@property (readonly) long long endPointType;
@property (readonly) NSData *appletIdentifier;
@property (readonly) NSString *identifier;
@property (readonly) NSString *subjectIdentifier;
@property (readonly) NSData *publicKey;
@property (readonly) NSData *publicKeyIdentifier;
@property (readonly) NSData *privacyPublicKey;
@property (readonly) NSData *privacyPublicKeyIdentifier;
@property (readonly) NSData *readerIdentifier;
@property (readonly) NSData *readerPublicKey;
@property (copy) NSData *readerLongTermPublicKeyCertificate;
@property (readonly) NSArray *authorizedKeys;
@property (readonly) NSNumber *confidentialMailBoxSize;
@property (readonly) NSNumber *privateMailBoxSize;
@property (readonly) NSNumber *counter;
@property (copy) NSData *shareInitiatorCertificateChainData;
@property (copy) NSString *friendlyName;
@property (copy) NSNumber *keyRole;
@property (copy) NSString *readerInfo;
@property (copy) NSString *invitationIdentifier;
@property (copy) NSData *mailboxMapping;
@property (copy) NSData *trackingRequest;
@property (copy) NSData *trackingReceipt;
@property (copy) NSData *deviceConfiguration;
@property (copy) NSString *environment;
@property (copy) NSNumber *sharingTokenAvailabilityBitmap;
@property (copy) NSString *bleUUID;
@property (copy) NSData *bleIntroKey;
@property (copy) NSData *bleOOBKey;
@property (copy) NSData *bleOOBMasterKey;
@property (copy) NSData *bleDCKIdentifier;
@property (copy) NSData *bleAddress;
@property (copy) NSNumber *blePairingRequest;
@property (copy) NSArray *supportedRKEFunctions;
@property (copy) NSData *longTermSharedSecret;
@property (copy) NSString *ownerIDSIdentifier;
@property (copy) NSString *sharingSessionUUID;
@property (copy) NSData *readerConfigID;
@property (copy) NSData *hupData;
@property (copy) NSNumber *hupDone;
@property (copy) NSData *vehicleSupportedVersionsData;
@property (copy) NSData *mailboxSizesPlusAdditionalData;
@property (copy) NSData *slotIdentifier;
@property (retain) NSString *homeUUIDString;
@property (copy) NSData *upgradeEndpointJSONData;
@property (copy) NSData *anonymizedDsid;
@property (copy) NSArray *sharingRecords;
@property (copy) NSData *sharingAttestationData;
@property (copy) NSData *ownerEphemeralKey;
@property (copy) NSData *sharingEncryptedData;
@property (copy) NSDictionary *additionalAttestationsDict;

+ (id)decodeWithData:(id)a0 error:(id *)a1;
+ (id)endPointWithType:(long long)a0 appletIdentifier:(id)a1 identifier:(id)a2 certificateData:(id)a3 error:(id *)a4;
+ (id)parsePTAExtension:(struct __CFString { } *)a0 certificate:(struct __SecCertificate { } *)a1 specification:(const struct { struct *x0; unsigned long long x1; } *)a2 output:(struct PTAEndPointExtensionContent { struct { char *x0; unsigned long long x1; } x0; struct { char *x0; unsigned long long x1; } x1; struct { char *x0; unsigned long long x1; } x2; struct { char *x0; unsigned long long x1; } x3; struct { char *x0; unsigned long long x1; } x4; struct { char *x0; unsigned long long x1; } x5; struct { char *x0; unsigned long long x1; } x6; struct { char *x0; unsigned long long x1; } x7; struct { char *x0; unsigned long long x1; } x8; struct { char *x0; unsigned long long x1; } x9; struct { char *x0; unsigned long long x1; } x10; struct { char *x0; unsigned long long x1; } x11; struct { char *x0; unsigned long long x1; } x12; struct { char *x0; unsigned long long x1; } x13; struct { char *x0; unsigned long long x1; } x14; } *)a3;
+ (id)revokedEndpointWithPublicKeyIdentifier:(id)a0 appletIdentifier:(id)a1 revocationAttestation:(id)a2 error:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)encodeWithError:(id *)a0;
- (unsigned long long)getEndpointUser;
- (id)configurePrivateData:(id)a0 confidentialData:(id)a1 contactlessPersistentVisibility:(id)a2 wiredPersistentVisibility:(id)a3 nfcExpressOnlyInLPM:(id)a4;
- (void)configurePrivateDataOffset:(unsigned short)a0 privateDataLength:(unsigned short)a1 confidentialDataOffset:(unsigned short)a2 confidentialDataLength:(unsigned short)a3 contactlessVisibility:(BOOL)a4 wiredVisibility:(BOOL)a5;
- (id)deleteEndPointLongTermPrivacyKey;
- (id)generateEndPointPrivacyLongTermPrivacyKey;
- (void)prependCertificateChain:(id)a0;
- (id)validateAuthorizedEndpointConfig:(id)a0;

@end
