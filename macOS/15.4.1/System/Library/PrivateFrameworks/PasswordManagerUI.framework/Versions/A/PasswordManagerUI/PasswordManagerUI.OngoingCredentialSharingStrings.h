@class NSString;

@interface PasswordManagerUI.OngoingCredentialSharingStrings : NSObject

@property (class, nonatomic, readonly) NSString *cannotChangePermissionForGroupMemberTitle;
@property (class, nonatomic, readonly) NSString *preventReadOnlyPermissionForGroupMemberThatHasContributedPasswordsExplanationFooter;
@property (class, nonatomic, readonly) NSString *groupCreationViewSubtitleString;
@property (class, nonatomic, readonly) NSString *groupManagementViewSubtitleStringForOwner;
@property (class, nonatomic, readonly) NSString *groupManagementViewSubtitleStringForNonOwner;
@property (class, nonatomic, readonly) NSString *newGroupViewTitle;
@property (class, nonatomic, readonly) NSString *newGroupButtonTitle;
@property (class, nonatomic, readonly) NSString *choosePasswordsButtonTitle;
@property (class, nonatomic, readonly) NSString *reviewDuplicateButtonTitle;
@property (class, nonatomic, readonly) NSString *removeDuplicatePasswordsTitle;
@property (class, nonatomic, readonly) NSString *unableToInviteAllParticipantsBecauseOfUnsupportedDevicesAlertMessage;
@property (class, nonatomic, readonly) NSString *unableToInviteMultipleContactsBecauseOfUnsupportedDevicesAlertMessage;
@property (class, nonatomic, readonly) NSString *sharedPasswordsGroupsUnavailableAlertTitle;

+ (id)deleteDuplicatesButtonTitleWithNumberOfSelectedAccounts:(long long)a0;
+ (id)pickerTitleWithNumberOfSelectedAccounts:(long long)a0;
+ (id)unableToInviteContactBecauseOfUnsupportedDevicesAlertMessageWithContactName:(id)a0;

- (id)init;

@end
