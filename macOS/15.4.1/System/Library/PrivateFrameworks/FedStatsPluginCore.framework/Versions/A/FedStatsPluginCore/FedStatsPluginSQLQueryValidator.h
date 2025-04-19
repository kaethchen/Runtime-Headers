@class NSDictionary;

@interface FedStatsPluginSQLQueryValidator : NSObject

@property (retain) NSDictionary *allowList;
@property (retain) NSDictionary *blockList;

+ (id)sharedInstanceWithError:(id *)a0;
+ (id)parseQueryPermissionList:(id)a0 error:(id *)a1;
+ (id)isValidSQLQuery:(id)a0 forNamespaceID:(id)a1 possibleError:(id *)a2;

- (void).cxx_destruct;
- (id)initWithAllowList:(id)a0 blockList:(id)a1;

@end
