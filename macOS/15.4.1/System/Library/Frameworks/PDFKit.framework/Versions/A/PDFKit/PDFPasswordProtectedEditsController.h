@class NSString, NSPanel, NSDate, NSWindow;

@interface PDFPasswordProtectedEditsController : NSObject <PDFPasswordAlertDelegate>

@property (weak, nonatomic) NSPanel *passwordPanel;
@property (weak, nonatomic) NSWindow *windowForSheet;
@property (retain, nonatomic) NSDate *lastPasswordDismissDate;
@property (nonatomic) long long lastPasswordDismissModalResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)checkForPermissionToChangePermissionsOnDocument:(id)a0 windowForSheet:(id)a1;
- (BOOL)checkForPermissions:(unsigned long long)a0 onDocument:(id)a1 windowForSheet:(id)a2;
- (BOOL)didJustDismissPasswordPanel;
- (void)dismissPasswordAlertWithModalResponse:(long long)a0;

@end
