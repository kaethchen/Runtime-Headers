@class NSString, ACAccount;

@interface iCloudAccountFeatureEligibilityRequest : AARequest

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 featureIdentifier:(id)a1;

@end
