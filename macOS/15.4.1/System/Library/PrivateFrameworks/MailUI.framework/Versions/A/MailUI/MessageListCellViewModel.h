@class NSDate, NSString, NSArray, NSAttributedString, NSDictionary, MUIAvatarImageContext, MUIAvatarImageGenerator, EMFollowUp, NSIndexSet;
@protocol EMCollectionItemID;

@interface MessageListCellViewModel : MessageItemViewModel <MessageListCellViewModelBuilder>

@property (copy, nonatomic) NSDictionary *hintsBySnippetZone;
@property (nonatomic) long long style;
@property (nonatomic) long long recipientType;
@property (copy, nonatomic) NSString *subject;
@property (nonatomic) BOOL subjectIsPresent;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSAttributedString *attributedAddress;
@property (nonatomic) BOOL addressIsPresent;
@property (copy, nonatomic) NSArray *addressList;
@property (retain, nonatomic) MUIAvatarImageContext *avatarContext;
@property (retain, nonatomic) MUIAvatarImageGenerator *avatarGenerator;
@property (retain, nonatomic) id<EMCollectionItemID> itemID;
@property (nonatomic) BOOL hideFollowUp;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSString *categorizationState;
@property (nonatomic) BOOL allowAuthenticationWarning;
@property (nonatomic, getter=isBlockedSender) BOOL blockedSender;
@property (nonatomic) long long unsubscribeType;
@property (nonatomic) BOOL hasAttachments;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *displayDate;
@property (copy, nonatomic) NSDate *readLaterDate;
@property (copy, nonatomic) NSDate *sendLaterDate;
@property (copy, nonatomic) EMFollowUp *followUp;
@property (nonatomic, getter=isRead) BOOL read;
@property (nonatomic, getter=isFlagged) BOOL flagged;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (nonatomic, getter=isReplied) BOOL replied;
@property (nonatomic, getter=isForwarded) BOOL forwarded;
@property (nonatomic, getter=isRedirected) BOOL redirected;
@property (nonatomic, getter=isJunk) BOOL junk;
@property (nonatomic, getter=isVIP) BOOL VIP;
@property (nonatomic, getter=isNotify) BOOL notify;
@property (nonatomic, getter=isMute) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithItemBuilder:(id /* block */)a0;

@end
