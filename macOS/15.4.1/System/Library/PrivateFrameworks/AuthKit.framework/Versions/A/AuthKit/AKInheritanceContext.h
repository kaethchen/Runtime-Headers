@class AKBeneficiaryManifest, NSString, NSUUID, AKInheritanceAccessKey;

@interface AKInheritanceContext : NSObject <AKAuthenticatedServerRequest, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *beneficiaryIdentifier;
@property (copy, nonatomic) NSString *beneficiarySetupToken;
@property (retain, nonatomic) AKBeneficiaryManifest *manifest;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (readonly, nonatomic) NSUUID *_identifier;
@property (copy, nonatomic) NSString *altDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthenticationContext:(id)a0;
- (id)initWithOwnerAltDSID:(id)a0;

@end
