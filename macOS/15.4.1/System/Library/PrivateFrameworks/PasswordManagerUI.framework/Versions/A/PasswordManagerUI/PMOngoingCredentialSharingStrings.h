@class NSString;

@interface PMOngoingCredentialSharingStrings : NSObject

@property (class, readonly, copy, nonatomic) NSString *cannotChangePermissionForGroupMemberTitle;
@property (class, readonly, copy, nonatomic) NSString *preventReadOnlyPermissionForGroupMemberThatHasContributedPasswordsExplanationFooter;
@property (class, readonly, copy, nonatomic) NSString *groupCreationViewSubtitleString;
@property (class, readonly, copy, nonatomic) NSString *groupManagementViewSubtitleStringForOwner;
@property (class, readonly, copy, nonatomic) NSString *groupManagementViewSubtitleStringForNonOwner;
@property (class, readonly, copy, nonatomic) NSString *newGroupViewTitle;
@property (class, readonly, copy, nonatomic) NSString *newGroupButtonTitle;
@property (class, readonly, copy, nonatomic) NSString *unableToInviteMultipleContactsBecauseOfUnsupportedDevicesAlertMessage;
@property (class, readonly, copy, nonatomic) NSString *unableToInviteAllParticipantsBecauseOfUnsupportedDevicesAlertMessage;

+ (id)pickerTitleForNumberOfSelectedAccounts:(unsigned long long)a0;
+ (id)unableToInviteContactBecauseOfUnsupportedDevicesAlertMessageWithContactName:(id)a0;

@end
