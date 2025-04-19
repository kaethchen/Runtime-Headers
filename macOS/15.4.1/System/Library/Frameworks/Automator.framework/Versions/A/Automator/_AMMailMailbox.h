@class NSString, _AMMailAccount;

@interface _AMMailMailbox : SBObject

@property (copy) NSString *name;
@property (readonly) long long unreadCount;
@property (readonly, copy) _AMMailAccount *account;
@property (readonly, copy) _AMMailMailbox *container;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)messages;
- (id)mailboxes;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
