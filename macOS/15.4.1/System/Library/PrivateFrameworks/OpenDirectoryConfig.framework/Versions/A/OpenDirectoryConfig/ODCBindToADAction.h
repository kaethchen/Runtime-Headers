@class NSString, NSDictionary;

@interface ODCBindToADAction : ODCAction

@property (copy) NSString *domainName;
@property (copy) NSString *userName;
@property (copy) NSString *password;
@property (copy) NSString *clientComputerID;
@property BOOL addDomainToSearchPaths;
@property BOOL forceBind;
@property (copy) NSString *computerOU;
@property (copy) NSString *preferredServer;
@property (copy) NSDictionary *options;

- (id)init;
- (void)bind;
- (void)_mergeKeys:(id)a0 fromDictionary:(id)a1 toDictionary:(id)a2;
- (void)legacyBind;
- (void)startExecution;

@end
