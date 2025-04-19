@class MFMailbox, NSString, NSArray, ECSubject;

@interface MFMessageSortingValue : NSObject <MCMessageSortingInterface>

@property (readonly, nonatomic) long long libraryID;
@property (readonly, nonatomic) MFMailbox *mailbox;
@property (readonly, nonatomic) int colorForSort;
@property (readonly) double dateLastViewedAsTimeIntervalSince1970;
@property (readonly, nonatomic) long long messageFlags;
@property (readonly, nonatomic) unsigned char flagColorSet;
@property (readonly) unsigned long long conversationFlags;
@property (readonly, copy) NSString *sender;
@property (readonly, copy, nonatomic) NSString *senderDisplayName;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy) NSArray *senders;
@property (readonly, nonatomic) unsigned long long messageSize;
@property (readonly, nonatomic) unsigned long long numberOfAttachments;
@property (readonly, copy) ECSubject *subject;
@property (readonly, copy) NSArray *to;
@property (readonly) double displayDateAsTimeIntervalSince1970;
@property (readonly) double readLaterDateAsTimeIntervalSince1970;
@property (readonly) double sendLaterDateAsTimeIntervalSince1970;
@property (readonly) double followUpDateAsTimeIntervalSince1970;
@property (readonly) double dateReceivedAsTimeIntervalSince1970;
@property (readonly) double dateSentAsTimeIntervalSince1970;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_automaticSecondarySortForPrimarySort:(id)a0;
+ (id)_newSortOrderDictionary;
+ (void)addMessage:(id)a0 toSortData:(id)a1 withDelegate:(id)a2;
+ (void)addMessages:(id)a0 toSortData:(id)a1 withDelegate:(id)a2;
+ (void)addSortData:(id)a0 forMessages:(id)a1 sortOrder:(id)a2 withDelegate:(id)a3;
+ (id)copySortDataForMessages:(id)a0 sortOrders:(id)a1 includeDataForAutomaticSecondarySort:(BOOL)a2 withDelegate:(id)a3;
+ (id)equivalentSortsForSort:(id)a0;
+ (id)mutableCopyOfSortData:(id)a0;
+ (void)removeEverythingExceptMessages:(id)a0 fromSortData:(id)a1;
+ (void)removeMessage:(id)a0 fromSortData:(id)a1;


@end
