@class EMMessage, NSString, EMQuery, NSArray, EMThread, NSObject, NSMutableArray, EMThreadScope;
@protocol OS_os_log, EMMessageListItem;

@interface EMInMemoryThread : NSObject <EFLoggable, NSCopying> {
    NSMutableArray *_messages;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (retain, nonatomic) EMThread *thread;
@property (readonly, nonatomic) EMQuery *originatingQuery;
@property (readonly, nonatomic) EMMessage *newestMessage;
@property (readonly, nonatomic) EMMessage *oldestMessage;
@property (retain, nonatomic) EMMessage *displayMessage;
@property (readonly, copy, nonatomic) NSArray *messages;
@property (readonly, nonatomic) id<EMMessageListItem> messageListItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateSortDescriptors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)addMessages:(id)a0;
- (id)initWithMessages:(id)a0 originatingQuery:(id)a1 threadScope:(id)a2;
- (id)_combinedCCList;
- (id)_combinedToList;
- (void)_addMessagesToThread:(id)a0;
- (id)_calculateAndApplyChange;
- (id)_calculateChangesAfterRemovingMessages:(id)a0 applyingChanges:(id)a1 threadIsEmpty:(BOOL *)a2;
- (id)_combinedFlagColors;
- (id)_combinedFlags;
- (BOOL)_combinedHasAttachments;
- (BOOL)_combinedHasUnflagged;
- (BOOL)_combinedIsBlocked;
- (BOOL)_combinedIsVIP;
- (id)_combinedMailboxes;
- (id)_combinedReadLater;
- (id)_combinedSenderList;
- (id)_createThreadWithObjectID:(id)a0;
- (BOOL)_isSortedByDate:(id)a0;
- (id)_newestDisplayDate;
- (void)_recalculateDisplayMessage;
- (unsigned long long)_totalMessageSize;
- (id)changeMessages:(id)a0 forKeyPaths:(id)a1 threadIsEmpty:(BOOL *)a2;
- (id)removeMessages:(id)a0 threadIsEmpty:(BOOL *)a1;
- (id)updateMessage:(id)a0 fromOldObjectID:(id)a1;

@end
