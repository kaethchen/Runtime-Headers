@class ACAccount;

@interface AAFamilyEligibilityRequest : AAFamilyRequest

@property (retain, nonatomic) ACAccount *iTunesAccount;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;

@end
