@class NSString, NSDictionary, NSData, NSDate, NSNumber, NSArray;

@interface PODeviceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *_deviceSigningKeyData;
@property (retain, nonatomic) NSData *_deviceEncryptionKeyData;
@property (readonly) int version;
@property (copy, nonatomic) NSString *accountDisplayName;
@property (copy, nonatomic) NSNumber *loginFrequency;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *deviceSigningKey;
@property (readonly, nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *deviceSigningPublicKey;
@property (nonatomic) struct __SecCertificate { } *deviceSigningCertificate;
@property (readonly) struct __SecIdentity { } *deviceSigningIdentity;
@property (copy, nonatomic) NSNumber *signingAlgorithm;
@property (copy, nonatomic) NSNumber *pendingSigningAlgorithm;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *deviceEncryptionKey;
@property (readonly, nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *deviceEncryptionPublicKey;
@property (nonatomic) struct __SecCertificate { } *deviceEncryptionCertificate;
@property (readonly) struct __SecIdentity { } *deviceEncryptionIdentity;
@property (copy, nonatomic) NSNumber *encryptionAlgorithm;
@property (copy, nonatomic) NSNumber *pendingEncryptionAlgorithm;
@property (copy, nonatomic) NSDate *lastEncryptionKeyChange;
@property (copy, nonatomic) NSString *extensionIdentifier;
@property BOOL registrationCompleted;
@property unsigned long long loginType;
@property BOOL sharedDeviceKeys;
@property long long protocolVersion;
@property (copy) NSNumber *sdkVersionString;
@property BOOL createUsersEnabled;
@property BOOL authorizationEnabled;
@property (copy, nonatomic) NSString *defaultUserDomain;
@property (copy, nonatomic) NSDictionary *tokenToUserMapping;
@property long long newUserAuthorizationMode;
@property long long userAuthorizationMode;
@property (copy, nonatomic) NSArray *administratorGroups;
@property (copy, nonatomic) NSArray *otherGroups;
@property (copy, nonatomic) NSDictionary *authorizationGroups;
@property (nonatomic) unsigned long long fileVaultPolicy;
@property (nonatomic) unsigned long long loginPolicy;
@property (nonatomic) unsigned long long unlockPolicy;
@property (nonatomic) long long offlineGracePeriod;
@property (nonatomic) long long requireAuthGracePeriod;
@property (copy, nonatomic) NSDate *authGracePeriodStart;
@property (copy, nonatomic) NSArray *nonPlatformSSOAccounts;
@property (nonatomic) BOOL allowDeviceIdentifiersInAttestation;
@property (copy) NSData *temporaryAccountCredential;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)dataRepresentation;
- (void)updateVersion;
- (BOOL)supportsAuthorization;
- (id)decryptTemporaryAccountCredential;
- (struct __SecIdentity { } *)deviceEncryptionIdentity;
- (struct __SecIdentity { } *)deviceSigningIdentity;
- (BOOL)encryptAndSaveTemporaryAccountCredential:(id)a0;
- (BOOL)supportsCreateNewUsers;
- (BOOL)supportsCreateTemporaryUsers;
- (BOOL)supportsTokenUnlock;
- (id)dataRepresentationForDisplay:(BOOL)a0;

@end
