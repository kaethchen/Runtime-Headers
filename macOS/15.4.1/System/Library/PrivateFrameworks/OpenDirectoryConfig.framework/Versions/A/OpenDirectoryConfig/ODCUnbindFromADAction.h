@class NSString;

@interface ODCUnbindFromADAction : ODCAction

@property (copy) NSString *userName;
@property (copy) NSString *password;
@property BOOL removeDomainFromSearchPaths;
@property BOOL forceUnbind;

- (id)init;
- (void)unbind;
- (void)legacyUnbind;
- (void)startExecution;

@end
