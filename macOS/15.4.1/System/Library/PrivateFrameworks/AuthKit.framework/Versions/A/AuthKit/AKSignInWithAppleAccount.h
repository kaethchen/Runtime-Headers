@class NSString, AKSignInWithAppleAccountShareInfo, NSDate;

@interface AKSignInWithAppleAccount : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localizedAppName;
@property (copy, nonatomic) NSString *privateEmail;
@property (copy, nonatomic) NSString *localizedAppDeveloperName;
@property (copy, nonatomic) NSString *privacyPolicyURL;
@property (nonatomic) BOOL hasEULA;
@property (copy, nonatomic) NSString *appStoreAdamID;
@property (copy, nonatomic) NSString *teamID;
@property (retain, nonatomic) AKSignInWithAppleAccountShareInfo *shareInfo;
@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSDate *creationDate;
@property (nonatomic) long long sharedScopes;
@property (readonly, copy, nonatomic) NSString *appStoreURL;
@property (readonly, copy, nonatomic) NSString *userID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientID:(id)a0 userID:(id)a1;
- (id)initWithClientID:(id)a0 userID:(id)a1 scopes:(id)a2 creationDate:(id)a3 privateEmail:(id)a4;

@end
