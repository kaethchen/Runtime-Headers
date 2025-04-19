@class NSString, NSArray, NSURL;

@interface _AMMailAccount : SBObject

@property (copy) id deliveryAccount;
@property (copy) NSString *name;
@property (copy) NSString *password;
@property int authentication;
@property (readonly) int accountType;
@property (copy) NSArray *emailAddresses;
@property (copy) NSString *fullName;
@property long long emptyJunkMessagesFrequency;
@property long long emptySentMessagesFrequency;
@property long long emptyTrashFrequency;
@property BOOL emptyJunkMessagesOnQuit;
@property BOOL emptySentMessagesOnQuit;
@property BOOL emptyTrashOnQuit;
@property BOOL enabled;
@property (copy) NSString *userName;
@property (readonly, copy) NSURL *accountDirectory;
@property long long port;
@property (copy) NSString *serverName;
@property BOOL includeWhenGettingNewMail;
@property BOOL moveDeletedMessagesToTrash;
@property BOOL usesSsl;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)mailboxes;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
