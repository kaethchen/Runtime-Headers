@class NSString, NSData;

@interface AKAppleIDPasskeyCredentialRequestContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSData *userID;
@property (copy, nonatomic) NSString *credentialName;
@property (copy, nonatomic) NSString *originalChallenge;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_sanitizeBase64EncodedString:(id)a0;
- (id)initWithRelyingPartyIdentifier:(id)a0 challenge:(id)a1 originalChallenge:(id)a2 userID:(id)a3 credentialName:(id)a4;
- (id)initWithRelyingPartyIdentifier:(id)a0 challengeString:(id)a1 userIDString:(id)a2 credentialName:(id)a3;

@end
