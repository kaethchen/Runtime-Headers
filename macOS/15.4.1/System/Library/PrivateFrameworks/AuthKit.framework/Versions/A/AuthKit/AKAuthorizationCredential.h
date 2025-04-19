@class NSArray, NSString, NSData, AKUserInformation;

@interface AKAuthorizationCredential : NSObject <AKCredential>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *authorizedScopes;
@property (copy, nonatomic) NSData *identityToken;
@property (copy, nonatomic) NSData *authorizationCode;
@property (copy, nonatomic) NSString *state;
@property (retain, nonatomic) AKUserInformation *userInformation;
@property (nonatomic) BOOL isLikelyRealUser;
@property (readonly, copy, nonatomic) NSString *transactionID;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServerResponse:(id)a0;

@end
