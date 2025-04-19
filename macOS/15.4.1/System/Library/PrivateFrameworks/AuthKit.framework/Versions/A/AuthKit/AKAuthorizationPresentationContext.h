@class NSString, AKUserInformation, NSData, NSArray, NSNumber, AKCredentialRequestContext;

@interface AKAuthorizationPresentationContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *cachedHasSharedAccountLoginChoice;
@property (retain, nonatomic) NSNumber *cachedHasCreateAccountLoginChoice;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL signInAllowsPCSKeyAccess;
@property (copy, nonatomic) NSString *localizedAppName;
@property (nonatomic) BOOL hasShownFirstTimeAlready;
@property (retain, nonatomic) NSData *clientAuditTokenData;
@property (readonly, copy, nonatomic) NSString *iconName;
@property (readonly, copy, nonatomic) NSData *iconData;
@property (readonly, copy, nonatomic) NSNumber *iconScale;
@property (retain, nonatomic) AKCredentialRequestContext *credentialRequestContext;
@property (retain, nonatomic) AKUserInformation *userInformation;
@property (copy, nonatomic) NSArray *loginChoices;
@property (readonly, nonatomic) BOOL hasSharedAccountLoginChoices;
@property (readonly, nonatomic) BOOL hasCreateAccountLoginChoice;
@property (readonly, nonatomic) BOOL isSignInFlow;

+ (id)presentationContextForCreateAppleIDFlow:(id)a0;
+ (id)presentationContextForRequestContext:(id)a0 client:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addPresentationParametersForContext:(id)a0;
- (void)_addPresenterParameters;
- (id)initWithContext:(id)a0 bundleID:(id)a1;
- (id)initWithContext:(id)a0 client:(id)a1;
- (id)initWithUsername:(id)a0;

@end
