@class NSString;

@interface AKAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1;
- (void)_processAppleAccountModification:(id)a0 oldAccount:(id)a1 inStore:(id)a2 changeType:(int)a3;
- (void)_removeAllProtoAccountsInStore:(id)a0;
- (BOOL)_isAccount:(id)a0 ofAccountType:(id)a1;
- (BOOL)_isFullAppleAccount:(id)a0;
- (BOOL)_isPrimaryAppleAccount:(id)a0;
- (BOOL)_isValidAuthKitAccount:(id)a0;
- (BOOL)_isValidChangeForAccount:(id)a0 oldAccount:(id)a1;
- (void)_processAuthKitAccountChange:(id)a0 oldAccount:(id)a1 inStore:(id)a2;
- (void)_processDeletionForAccount:(id)a0;
- (void)_removePCSAuthCredential;
- (void)_removePrivateEmailDatabase;
- (void)_synchronizeItemsForAccount:(id)a0 altDSID:(id)a1 inStore:(id)a2;

@end
