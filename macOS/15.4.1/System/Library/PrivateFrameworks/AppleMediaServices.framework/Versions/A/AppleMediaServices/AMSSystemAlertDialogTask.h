@class AMSDialogResult, AMSDialogRequest;

@interface AMSSystemAlertDialogTask : AMSTask

@property (retain) AMSDialogResult *autoDismissResult;
@property long long defaultButtonIndex;
@property BOOL dismissOnHomeButton;
@property BOOL dismissOnLock;
@property BOOL shouldDismissAfterUnlock;
@property BOOL shouldDisplayAsTopMost;
@property BOOL shouldPendInSetupIfNotAllowed;
@property BOOL displaysOnLockscreen;
@property long long unlockActionButtonIndex;
@property struct __CFUserNotification { } *userNotification;
@property BOOL isDialogDismissalEnabled;
@property (readonly) AMSDialogRequest *request;

- (void).cxx_destruct;
- (id)present;
- (id)initWithRequest:(id)a0;
- (struct __CFDictionary { } *)_createNoteDictionaryWithKeys:(struct ButtonKey { struct __CFString *x0; int x1; } *)a0 buttonActions:(id)a1 outOptions:(unsigned long long *)a2;
- (void)_dismiss;
- (id)_handleResponseForNote:(struct __CFUserNotification { } *)a0 buttonActions:(id)a1 keys:(struct ButtonKey { struct __CFString *x0; int x1; } *)a2;
- (id)_reorderButtonActions;
- (struct __CFUserNotification { } *)_showNotificationFromDictionary:(struct __CFDictionary { } *)a0 options:(unsigned long long)a1;

@end
