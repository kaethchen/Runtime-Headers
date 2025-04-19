@class NSString;

@interface _AMMailLdapServer : SBObject

@property BOOL enabled;
@property (copy) NSString *name;
@property long long port;
@property int scope;
@property (copy) NSString *searchBase;
@property (copy) NSString *hostName;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
