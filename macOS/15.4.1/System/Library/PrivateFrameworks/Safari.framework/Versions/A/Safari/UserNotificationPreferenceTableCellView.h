@class NSMenuItem, UserNotificationPolicyData, NSPopUpButton;

@interface UserNotificationPreferenceTableCellView : NSTableCellView

@property (weak, nonatomic) NSPopUpButton *policyPopUpButton;
@property (weak, nonatomic) NSMenuItem *allowMenuItem;
@property (weak, nonatomic) NSMenuItem *denyMenuItem;
@property (retain, nonatomic) UserNotificationPolicyData *data;

- (void).cxx_destruct;
- (id)_menuItemForPermissionPolicy:(int)a0;
- (int)_permissionPolicyForMenuItem:(id)a0;
- (void)setUserNotificationPolicyFrom:(id)a0;

@end
