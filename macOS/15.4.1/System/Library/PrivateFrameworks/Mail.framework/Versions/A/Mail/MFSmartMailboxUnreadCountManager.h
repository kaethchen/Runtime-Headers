@class NSString, NSConditionLock, EFAutoCancelationToken, NSOperationQueue, NSMutableDictionary, NSMutableArray, NSObject, EMFocus, NSMutableSet;
@protocol OS_os_log, EFScheduler;

@interface MFSmartMailboxUnreadCountManager : NSObject <EMCurrentFocusObserver, MCActivityTarget> {
    NSMutableArray *_smartMailboxes;
    NSMutableDictionary *_smartMailboxesOpenDates;
    BOOL _updateNeededAfterOpeningMailboxes;
    NSMutableDictionary *_unreadMessagesBySmartMailbox;
    NSMutableDictionary *_smartMailboxesUpdates;
    NSConditionLock *_watchedMessagesLock;
    NSMutableDictionary *_watchedMessages;
    NSMutableDictionary *_messagesNeedingToBeIndexed;
    NSConditionLock *_isUpdatingStateLock;
    NSConditionLock *_isDirtyStateLock;
    NSConditionLock *_obsoleteMessageKeysLock;
    NSMutableSet *_obsoleteMessageKeys;
    NSMutableSet *_restartingUnreadCountQueryMailboxes;
    double _lastUnreadCountQueryRestartTime;
    double _restartDelay;
    id<EFScheduler> _restartingUnreadCountQueryScheduler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentFocusLock;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EMFocus *currentFocus;
@property (retain, nonatomic) EFAutoCancelationToken *focusObservationToken;
@property (readonly, nonatomic) NSOperationQueue *spotlightQueue;
@property double lastModificationToUpdate;
@property BOOL suspendSmartMailboxUnreadCountCalculations;
@property long long unreadQueryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *displayName;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_startObservingNotifications;
- (void)_stopObservingNotifications;
- (id)_keyForMessage:(id)a0;
- (void)currentFocusChanged:(id)a0;
- (void)_addMessagesWaitingToBeIndexed:(id)a0;
- (id)_keyForMailbox:(id)a0;
- (void)_setIsUpdating:(BOOL)a0;
- (void)_messagesAdded:(id)a0;
- (void)_storeWillOpen:(id)a0;
- (void)_addObsoleteMessageKeys:(id)a0;
- (void)_decomposeMessageKey:(id)a0 intoRowID:(id *)a1 messageIDHeader:(id *)a2;
- (id)_filterMessages:(id)a0 matchingCriterion:(id)a1;
- (BOOL)_isMessageIndexed:(id)a0;
- (BOOL)_isObservingSmartMailbox:(id)a0;
- (void)_libraryMessagesFlagsChanged:(id)a0;
- (void)_mailboxesDeleted:(id)a0;
- (void)_messageFlagsChanged:(id)a0;
- (id)_messageKeysWaitingToBeIndexes;
- (void)_messagesCompacted:(id)a0;
- (id)_pathForMessage:(id)a0;
- (void)_performDelayedUpdate:(id)a0;
- (void)_performUpdateNow;
- (double)_restartQueryDelayForError:(id)a0;
- (void)_searchedMailboxPreferencesChanged:(id)a0;
- (void)_setIsDirty:(BOOL)a0;
- (void)_setSmartMailboxesWithSpotlightCriterion:(id)a0;
- (void)_setUnreadMessages:(id)a0 forSmartMailbox:(id)a1 onDate:(id)a2;
- (void)_smartMailboxesDidSaveToDisk:(id)a0;
- (void)_smartMailboxesWillSaveToDisk:(id)a0;
- (void)_storeDidOpen:(id)a0;
- (unsigned long long)_uniqueCountOfMessages:(id)a0;
- (void)_updateObsoleteMessageKeys;
- (void)_updateSmartMailboxUnreadCountUsingSearchableIndexForMailbox:(id)a0;
- (void)_updateSmartMailboxUnreadCountUsingSpotlight:(id)a0;
- (void)_updateSmartMailboxUnreadCountsByRemovingMessagesWithKeys:(id)a0;
- (void)_updateSmartMailboxUnreadCountsWithMessages:(id)a0;
- (void)_updateUnreadCountsWithWatchedMessages;
- (void)_watchMessages:(id)a0 withUnreadState:(BOOL)a1 onDate:(id)a2;
- (id)criterionForFocusedAccounts:(id)a0;
- (void)setFocusController:(id)a0;
- (void)setSmartMailboxes:(id)a0;
- (void)smartMailbox:(id)a0 didInitializeWithDictionaryRepresentation:(id)a1;
- (void)smartMailbox:(id)a0 willReturnDictionaryRepresentation:(id)a1;
- (void)test_cancelAndWaitForUpdatesToFinish;
- (void)updateMailboxesUnreadCountUsingSpotlight:(id)a0 cancelExistingQuery:(BOOL)a1;
- (void)updateUnreadCountsUsingSpotlightForAllSmartMailboxes;

@end
