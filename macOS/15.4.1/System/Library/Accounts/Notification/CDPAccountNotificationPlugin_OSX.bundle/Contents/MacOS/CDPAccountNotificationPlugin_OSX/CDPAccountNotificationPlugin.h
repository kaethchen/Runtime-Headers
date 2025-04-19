@class NSString;

@interface CDPAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_clearFollowUpsOnAccountDeletionWithController:(id)a0;
- (void)_processAppleAcocuntChange:(id)a0;
- (unsigned long long)_calculateCDPSOSCompatibilityTypeWithAccount:(id)a0;
- (BOOL)_isPrimaryAccount:(id)a0;
- (void)_processAuthKitAccountChange:(id)a0 oldAccount:(id)a1;

@end
