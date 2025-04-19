@class NSString;

@interface ODCRemoveODServerAction : ODCAction

@property (copy) NSString *serverName;
@property (copy) NSString *userName;
@property (copy) NSString *password;
@property BOOL forceUnbind;
@property BOOL removeServerFromSearchPaths;

- (id)init;
- (void)unbind;
- (void)removeTrust;
- (void)legacyUnbind;
- (void)startExecution;

@end
