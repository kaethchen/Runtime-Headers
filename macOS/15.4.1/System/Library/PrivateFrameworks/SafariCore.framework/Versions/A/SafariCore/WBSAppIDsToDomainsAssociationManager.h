@class NSDictionary;

@interface WBSAppIDsToDomainsAssociationManager : NSObject

@property (copy, nonatomic) NSDictionary *appIDsToDomains;

- (id)description;
- (void).cxx_destruct;
- (id)domainsWithAssociatedCredentialsForAppID:(id)a0;
- (id)initWithAppIDsToDomains:(id)a0;

@end
