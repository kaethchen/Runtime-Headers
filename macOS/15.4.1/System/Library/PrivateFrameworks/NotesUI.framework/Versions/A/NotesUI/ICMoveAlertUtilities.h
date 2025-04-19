@interface ICMoveAlertUtilities : NSObject

+ (void)postAlertForFolderDepthLimitWithCompletionHandler:(id /* block */)a0;
+ (void)postAlertForMovingFolderWithSharedNotes:(id)a0 sharedSubfolders:(id)a1 destination:(id)a2 shareHandler:(id /* block */)a3 cancelHandler:(id /* block */)a4;
+ (void)postAlertForMovingLockedNotesToOtherAccountIsCopy:(BOOL)a0 completionHandler:(id /* block */)a1;
+ (void)postAlertForMovingLockedOrSingleJoinedNotesToSharedFolderWithCountOfNotes:(unsigned long long)a0 guiltyObjects:(id)a1 completionHandler:(id /* block */)a2;
+ (void)postAlertForMovingNotesContainingSharedNotesToSharedFolder:(id)a0 destination:(id)a1 shareHandler:(id /* block */)a2 cancelHandler:(id /* block */)a3;
+ (void)postAlertForMovingSharedNotesToAnotherAccountWithCompletionHandler:(id /* block */)a0;
+ (void)postAlertForMovingSmartFolderWithRestrictedFilterToLocalAccount:(id)a0;
+ (void)postAlertForOwnerStoppedSharingCurrentFolderWithCompletionHandler:(id /* block */)a0;
+ (void)postAlertForSharingFolderContainingLockedOrJoinedRootObjectsWithGuiltyObjects:(id)a0 completionHandler:(id /* block */)a1;
+ (void)postAlertForSharingFolderWithSharedNotes:(id)a0 sharedSubfolders:(id)a1 shareHandler:(id /* block */)a2 cancelHandler:(id /* block */)a3;
+ (void)postAlertForUnsupportedAttachmentsInLegacyAccount:(id)a0;
+ (void)postAlertWithOKButtonWithTitle:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
+ (void)postAlertWithProceedAndCancelButtonsWithTitle:(id)a0 message:(id)a1 proceedTitle:(id)a2 proceedHandler:(id /* block */)a3 cancelHandler:(id /* block */)a4;
+ (void)setSuppressesAlerts:(BOOL)a0;
+ (BOOL)suppressesAlerts;

@end
