@class NSString;

@interface _AMMailSmtpServer : SBObject

@property (readonly, copy) NSString *name;
@property (copy) NSString *password;
@property (readonly) int accountType;
@property int authentication;
@property BOOL enabled;
@property (copy) NSString *userName;
@property long long port;
@property (copy) NSString *serverName;
@property BOOL usesSsl;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
