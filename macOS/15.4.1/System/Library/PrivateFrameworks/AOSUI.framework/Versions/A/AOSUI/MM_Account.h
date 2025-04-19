@class NSString, NSArray, NSMutableDictionary, CNContact, NSDictionary, NSImage, NSWindow, ACAccount;

@interface MM_Account : NSObject {
    ACAccount *_appleAccount;
    NSString *_accountID;
    BOOL _suppressFailureSheets;
    NSMutableDictionary *_suppressedFailures;
}

@property (retain) NSImage *cachedImage;
@property (retain) NSImage *croppedImage;
@property (readonly) NSArray *services;
@property (copy, nonatomic) NSString *displayName;
@property (retain) ACAccount *appleAccount;
@property (readonly) NSImage *image;
@property (readonly) NSImage *editorImage;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageCropRect;
@property (readonly) CNContact *contact;
@property (readonly) NSDictionary *properties;
@property (retain) NSDictionary *context;
@property (retain, nonatomic) NSWindow *parentWindow;

+ (id)accountForACAccount:(id)a0;
+ (id)accountForACAccount:(id)a0 fetchAccountImage:(BOOL)a1;
+ (id)accountWithID:(id)a0;
+ (id)accountWithID:(id)a0 fetchAccountImage:(BOOL)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)valueForProperty:(id)a0;
- (void)refresh;
- (id)accountID;
- (id)initWithAccountID:(id)a0;
- (id)initWithACAccount:(id)a0;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (void)DSEEnable:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)didBecomeActive;
- (void)handleAEEvents:(id)a0;
- (void)willResignFocus;
- (id)_cdpStateController;
- (void)_handleBeginMigrationNotification:(id)a0;
- (void)_handleEndMigrationNotification:(id)a0;
- (void)_handleServiceFailureForServiceID:(id)a0 notification:(id)a1;
- (void)_handleServiceFailureNotification:(id)a0;
- (void)_setProgressStringForAccount:(id)a0 service:(id)a1 starting:(BOOL)a2;
- (void)didBecomeInactive;
- (void)didSelect;
- (void)didSignOutAccount;
- (void)didUnselect;
- (void)enableFailureSheetsAndShow:(BOOL)a0;
- (id)getiCloudStorageUsageDict;
- (BOOL)hasMailConfigured;
- (id)initWithACAccount:(id)a0 fetchAccountImage:(BOOL)a1;
- (id)initWithAccountID:(id)a0 fetchAccountImage:(BOOL)a1;
- (void)preflightDSEEnable:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)preflightDelete:(id *)a0 withWindow:(id)a1;
- (BOOL)prepareForSignoutWithOptionsDict:(id *)a0 parentWindow:(id)a1;
- (id)serviceWithID:(id)a0;
- (void)setImage:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andCroppedImage:(id)a2;
- (void)suppressFailureSheets;
- (void)willGainFocus;
- (void)willSelect;
- (void)willSignOutAccount;
- (void)willUnselect;

@end
