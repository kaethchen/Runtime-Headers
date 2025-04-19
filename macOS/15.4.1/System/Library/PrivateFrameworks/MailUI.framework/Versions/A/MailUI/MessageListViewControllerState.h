@class NSArray, NSString;

@interface MessageListViewControllerState : NSObject <EFPubliclyDescribable>

@property (nonatomic) BOOL isCompact;
@property (nonatomic) BOOL useSplitViewStyling;
@property (nonatomic) BOOL shouldDisplayUnreadAndVIP;
@property (nonatomic) BOOL canShowReadLaterDate;
@property (nonatomic) BOOL containsInbox;
@property (nonatomic) BOOL containsSent;
@property (nonatomic) BOOL containsOnlyInboxScope;
@property (nonatomic) BOOL containsArchiveMailbox;
@property (nonatomic) BOOL containsDraftsMailbox;
@property (nonatomic) BOOL containsOutbox;
@property (nonatomic) BOOL containsDraftsOrOutbox;
@property (nonatomic) BOOL isOutgoingMailbox;
@property (nonatomic) BOOL containsTrashMailbox;
@property (nonatomic) BOOL isUnifiedMailbox;
@property (nonatomic) BOOL containsSmartMailbox;
@property (nonatomic) BOOL containsReadLaterMailbox;
@property (nonatomic) BOOL containsSendLaterMailbox;
@property (nonatomic) BOOL containsFollowUpMailbox;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL didAlertOnBlankCell;
@property (nonatomic) BOOL didRecordTailspin;
@property (nonatomic) BOOL isSearch;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) BOOL isCommerceMailbox;
@property (nonatomic) BOOL isSenderSpecificMailbox;
@property (copy, nonatomic) NSString *sortKeyPath;
@property (nonatomic) BOOL isSortedAscending;
@property (nonatomic) BOOL hasDateBasedSortOrder;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateWithMailboxes:(id)a0 senderSpecificMessageListItem:(id)a1;

@end
