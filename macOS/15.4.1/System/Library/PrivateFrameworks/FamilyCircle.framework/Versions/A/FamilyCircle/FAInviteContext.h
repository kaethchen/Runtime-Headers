@class NSString, NSURL, NSArray;

@interface FAInviteContext : NSObject

@property (retain, nonatomic) NSString *eventType;
@property (nonatomic) unsigned long long validation;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSURL *inviteURL;
@property (copy, nonatomic) NSURL *reportInviteeDetailsUrl;
@property (copy, nonatomic) NSString *overlaidTextColorString;
@property (copy, nonatomic) NSArray *invitees;
@property (nonatomic) BOOL canEditRecipients;
@property (readonly, nonatomic) unsigned long long remainingFamilySpots;
@property (readonly, nonatomic) unsigned long long maxFamilySuggestions;
@property (copy, nonatomic) NSString *mailLinkTitle;
@property (copy, nonatomic) NSString *mailLinkSubtitle;
@property (copy, nonatomic) NSString *mailMessageSubject;
@property (copy, nonatomic) NSString *mailMessageBodyHTML;
@property (copy, nonatomic) NSString *messageBubbleTitle;
@property (copy, nonatomic) NSString *messageBubbleSubTitle;
@property (copy, nonatomic) NSString *messageBubbleSubTitleTeen;
@property (copy, nonatomic) NSString *messageBubbleViewInvitationButtonLabel;
@property (copy, nonatomic) NSString *messageBubbleInviteDeclineButtonLabel;
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptButtonLabel;
@property (copy, nonatomic) NSString *messageBubbleSubscriptionsList;
@property (copy, nonatomic) NSString *messageBubbleFamilySettingsLinkLabel;
@property (copy, nonatomic) NSString *messageBubbleAppleIDSettingsLinkLabel;
@property (copy, nonatomic) NSString *messageBubbleLearnMoreLinkLabel;
@property (copy, nonatomic) NSString *messageBubbleInviteLoadingLabel;
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedTitleSender;
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedTitleReceiver;
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedIcon;
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedSubTitleSender;
@property (copy, nonatomic) NSString *messageBubbleInviteAcceptedSubTitleReceiver;
@property (copy, nonatomic) NSURL *messageBubbleAcceptInviteURL;
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedTitleSender;
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedTitleReceiver;
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedIcon;
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedSubTitleSender;
@property (copy, nonatomic) NSString *messageBubbleInviteDeclinedSubTitleReceiver;
@property (copy, nonatomic) NSURL *messageBubbleDeclineInviteURL;
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredTitleSender;
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredTitleReceiver;
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredIcon;
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredSubTitleSender;
@property (copy, nonatomic) NSString *messageBubbleInviteExpiredSubTitleReceiver;
@property (copy, nonatomic) NSString *messageBubbleInvitePendingTitle;
@property (copy, nonatomic) NSString *messageBubbleInvitePendingSubTitle;
@property (copy, nonatomic) NSString *messageBubbleInvitePendingIcon;
@property (copy, nonatomic) NSString *messageBubbleInviteDeclineAlertSheetTitle;
@property (copy, nonatomic) NSString *messageBubbleInviteDeclineAlertSheetMessage;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_validatonFromString:(id)a0 eventType:(id)a1;
- (void)_parseResultsDictionary:(id)a0;
- (id)buildInviteMessageBubbleURL:(id)a0;
- (id)initWithResults:(id)a0;
- (id)privacySafeInvitees;

@end
