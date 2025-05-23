@class ASPasskeyAssertionCredentialExtensionInput, NSString, NSArray, NSData;

@interface ASPasskeyCredentialRequestParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSData *clientDataHash;
@property (readonly, copy, nonatomic) NSString *userVerificationPreference;
@property (readonly, copy, nonatomic) NSArray *allowedCredentials;
@property (readonly, nonatomic) ASPasskeyAssertionCredentialExtensionInput *extensionInput;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRelyingPartyIdentifier:(id)a0 clientDataHash:(id)a1 userVerificationPreference:(id)a2 allowedCredentials:(id)a3 extensionInput:(id)a4;

@end
