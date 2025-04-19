@class NSURL, EMGeneratedSummary, ECSubject, NSDate, NSObject, EMCategory, ECMessageFlags, EMGroupedSenderObjectID, NSString, EMFollowUp, EFFuture, NSIndexSet, NSArray, EMReadLater, EMObjectID, EMMessageRepository;
@protocol OS_os_log, ECEmailAddressConvertible, EMCollectionItemID;

@interface EMGroupedSender : EMBaseMessageListItem <EMGroupedSenderBuilder, EFLoggable, EMMutableMessageListItem>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMMessageRepository *repository;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) unsigned long long unseenCount;
@property (retain) NSString *businessDisplayName;
@property (readonly, copy, nonatomic) EMGroupedSenderObjectID *objectID;
@property (retain, nonatomic) id<ECEmailAddressConvertible> senderAddress;
@property (copy, nonatomic) NSArray *bccList;
@property (retain) NSDate *date;
@property (retain) NSDate *displayDate;
@property (retain) ECSubject *subject;
@property (retain) NSArray *groupedSenderMessageListItems;
@property (copy) NSString *summary;
@property (copy) EMGeneratedSummary *generatedSummary;
@property (copy) NSArray *senderList;
@property (copy) NSArray *toList;
@property (copy) NSArray *ccList;
@property BOOL isToMe;
@property BOOL isCCMe;
@property (retain) ECMessageFlags *flags;
@property BOOL hasUnflagged;
@property (copy) NSIndexSet *flagColors;
@property BOOL isVIP;
@property BOOL isBlocked;
@property long long unsubscribeType;
@property BOOL hasAttachments;
@property BOOL isAuthenticated;
@property BOOL allowAuthenticationWarning;
@property long long conversationNotificationLevel;
@property (retain, nonatomic) NSURL *brandIndicatorLocation;
@property (retain) EMReadLater *readLater;
@property (retain) NSDate *sendLaterDate;
@property (retain) EMFollowUp *followUp;
@property (retain) EMCategory *category;
@property long long businessID;
@property (copy) NSString *businessLogoID;
@property unsigned long long count;
@property long long conversationID;
@property (copy) NSArray *mailboxObjectIDs;
@property (copy) NSArray *mailboxes;
@property (retain) id<EMCollectionItemID> displayMessageItemID;
@property unsigned long long attachmentCount;
@property struct { unsigned char x0; unsigned char x1; unsigned char x2; } messageColor;
@property BOOL messageColorIsHighlight;
@property long long priority;
@property BOOL wasActedOnByExtension;
@property unsigned long long messageSize;
@property (readonly, copy) NSArray *mailboxesIfAvailable;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly) EFFuture *displayMessage;
@property (readonly) BOOL deleteMovesToTrash;
@property (readonly) BOOL supportsArchiving;
@property (readonly) BOOL shouldArchiveByDefault;
@property (readonly) BOOL isEditable;
@property (readonly) BOOL isGroupedSender;
@property (readonly, nonatomic) id<EMCollectionItemID> itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)changeFrom:(id)a0;
- (id)initWithObjectID:(id)a0 builder:(id /* block */)a1;
- (void)_commonInitWithBuilder:(id /* block */)a0;
- (id)preferredSenderDisplayNameWithContactStore:(id)a0;
- (void)setRepository:(id)a0;

@end
