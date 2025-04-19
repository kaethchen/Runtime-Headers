@class NSString, NSArray;

@interface SFAuthenticateAccountResult : NSObject

@property (copy, nonatomic) NSString *preferredLanguageCode;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (copy, nonatomic) NSArray *keyboards;
@property (readonly, nonatomic) NSArray *authenticatedAccounts;
@property (readonly, nonatomic) NSArray *knownHomeUserIdentifiers;

- (void).cxx_destruct;
- (id)initWithAuthenticatedAccounts:(id)a0 knownHomeUserIdentifiers:(id)a1;

@end
